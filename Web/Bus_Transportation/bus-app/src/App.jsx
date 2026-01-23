import { Routes, Route } from "react-router-dom";
import SearchBuses from "./pages/searchBuses";
import BusList from "./pages/BusList";
import Booking from "./pages/Booking";
import Confirmation from "./pages/Confirmation";

function App() {
  return (
    <Routes>
      <Route path="/" element={<SearchBuses />} />
      <Route path="/buses" element={<BusList />} />
      <Route path="/booking" element={<Booking />} />
      <Route path="/confirmation" element={<Confirmation />} />
    </Routes>
  );
}

export default App;
