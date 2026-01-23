import { useNavigate } from "react-router-dom";
import { useState } from "react";

function SearchBuses() {
  const navigate = useNavigate();
  const [data, setData] = useState({
    source: "",
    destination: "",
    date: "",
  });

  const handleSubmit = (e) => {
    e.preventDefault();
    navigate("/buses", { state: data });
  };

  return (
    <form onSubmit={handleSubmit}>
      <h2>Search Buses</h2>

      <input placeholder="Source" required
        onChange={(e) => setData({ ...data, source: e.target.value })}
      />

      <input placeholder="Destination" required
        onChange={(e) => setData({ ...data, destination: e.target.value })}
      />

      <input type="date" required
        onChange={(e) => setData({ ...data, date: e.target.value })}
      />

      <button>Search</button>
    </form>
  );
}

export default SearchBuses;
