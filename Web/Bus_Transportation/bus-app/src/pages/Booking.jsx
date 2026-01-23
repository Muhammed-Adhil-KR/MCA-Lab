import { useLocation, useNavigate } from "react-router-dom";
import { useState } from "react";

function Booking() {
  const { state } = useLocation();
  const navigate = useNavigate();
  const [name, setName] = useState("");
  const [seats, setSeats] = useState(1);

  const handleBooking = async () => {
    const bookingData = {
      name,
      seats,
      bus: state.bus,
      date: state.date,
      total: seats * state.bus.price,
    };

    await fetch("http://localhost:5000/book", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify(bookingData),
    });

    navigate("/confirmation", { state: bookingData });
  };

  return (
    <div>
      <h2>Booking Page</h2>
      <input placeholder="Your Name" onChange={(e) => setName(e.target.value)} />
      <input type="number" min="1" onChange={(e) => setSeats(e.target.value)} />
      <button onClick={handleBooking}>Confirm Booking</button>
    </div>
  );
}

export default Booking;
