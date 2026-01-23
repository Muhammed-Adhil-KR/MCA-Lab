const express = require("express");
const mysql = require("mysql2");
const cors = require("cors");

const app = express();
app.use(cors());
app.use(express.json());

// MySQL Connection
const db = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "Root@123",   // add password if set
  database: "BusDB"
});

// Connect
db.connect((err) => {
  if (err) throw err;
  console.log("MySQL Connected");
});

// Save booking
app.post("/book", (req, res) => {
  const { name, seats, bus, date, total } = req.body;

  const sql = `
    INSERT INTO bookings (name, bus_name, seats, travel_date, total_price)
    VALUES (?, ?, ?, ?, ?)
  `;

  db.query(sql, [name, bus.name, seats, date, total], (err) => {
    if (err) throw err;
    res.send({ message: "Booking stored successfully" });
  });
});

app.listen(5000, () => {
  console.log("Server running on port 5000");
});
