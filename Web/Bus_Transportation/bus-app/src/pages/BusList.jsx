import { useLocation, useNavigate } from "react-router-dom";

function BusList() {
  const navigate = useNavigate();
  const { state } = useLocation();

  const buses = [
    { id: 1, name: "Express A", time: "10:00 AM", seats: 20, price: 500 },
    { id: 2, name: "Express B", time: "2:00 PM", seats: 15, price: 450 },
  ];

  return (
    <div>
      <h2>Available Buses</h2>

      {buses.map((bus) => (
        <div key={bus.id}>
          <p>{bus.name} | {bus.time} | ₹{bus.price}</p>
          <button onClick={() =>
            navigate("/booking", { state: { bus, date: state.date } })
          }>
            Book
          </button>
        </div>
      ))}
    </div>
  );
}

export default BusList;
