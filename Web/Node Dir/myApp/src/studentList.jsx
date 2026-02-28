import React, { useState } from "react";

export default function StudentList() {
  const [students, setStudents] = useState([
    { id: 1, name: "Abhijith" },
    { id: 2, name: "Abhinav" },
    { id: 3, name: "Abhirami" },
    { id: 4, name: "Adish" },
    { id: 5, name: "Adithya" },
    { id: 6, name: "Adon" },
  ]);

  const [newName, setNewName] = useState("");

  const handleAddStudent = () => {
    if (newName.trim() === "") return; // prevent empty names
    const newStudent = {
      id: students.length + 1,
      name: newName,
    };
    setStudents([...students, newStudent]);
    setNewName(""); // clear input field
  };

  return (
    <div style={styles.container}>
      <h2 style={styles.heading}>Student List</h2>

      {/* Input Field and Button */}
      <div style={styles.inputContainer}>
        <input
          type="text"
          value={newName}
          onChange={(e) => setNewName(e.target.value)}
          placeholder="Enter student name"
          style={styles.input}
        />
        <button onClick={handleAddStudent} style={styles.button}>
          Add Student
        </button>
      </div>

      {/* Student List */}
      <ul style={styles.list}>
        {students.map((student) => (
          <li key={student.id} style={styles.item}>
            {student.id}. {student.name}
          </li>
        ))}
      </ul>
    </div>
  );
}

const styles = {
  container: {
    // maxWidth: "50%",
    margin: "10px auto",
    padding: "80px",
    backgroundColor: "#86b6e5ff",
    borderRadius: "8px",
    boxShadow: "0 4px 12px rgba(0,0,0,0.05)",
    fontFamily: "'Segoe UI', Tahoma, Geneva, Verdana, sans-serif",
  },
  heading: {
    fontSize: "1.8rem",
    marginBottom: "16px",
    color: "#333",
    textAlign: "center",
  },
  inputContainer: {
    display: "flex",
    justifyContent: "center",
    marginBottom: "20px",
    gap: "10px",
  },
  input: {
    padding: "10px",
    fontSize: "1rem",
    border: "1px solid #ccc",
    borderRadius: "4px",
    flex: 1,
  },
  button: {
    padding: "10px 16px",
    backgroundColor: "#007bff",
    color: "#fff",
    border: "none",
    borderRadius: "4px",
    cursor: "pointer",
    fontSize: "1rem",
  },
  list: {
    listStyleType: "none",
    padding: 0,
    margin: 0,
  },
  item: {
    padding: "12px 16px",
    marginBottom: "8px",
    backgroundColor: "#ffffff",
    border: "1px solid #dee2e6",
    borderRadius: "4px",
    color: "#495057",
  },
};
