import { useLocation } from "react-router-dom";

function Confirmation() {
  const { state } = useLocation();

  return (
    <div>
      <h2>Booking Confirmation</h2>
      <p>Name: {state.name}</p>
      <p>Bus: {state.bus.name}</p>
      <p>Seats: {state.seats}</p>
      <p>Total Price: ₹{state.total}</p>
      <p>Date: {state.date}</p>
    </div>
  );
}

export default Confirmation;
