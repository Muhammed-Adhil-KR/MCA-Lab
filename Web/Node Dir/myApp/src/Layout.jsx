// src/Layout.jsx
import { NavLink, Outlet } from "react-router-dom";

function Layout() {
  return (
    <>
      <nav style={{ padding: "20px", backgroundColor: "#f0f0f0", marginBottom: "20px" }}>
        <NavLink to="/" style={{ margin: "0 15px",marginRight: "15px"}} end>
          Home
        </NavLink>
        ______________________________
        <NavLink to="/about" style={{ margin: "0 15px",marginRight: "15px" }}>
          About
        </NavLink>
        ______________________________
        <NavLink to="/contact" style={{ margin: "0 15px",marginRight: "15px" }}>
          Contact
        </NavLink>
      </nav>

      {/* This is where Home, About, or Contact will be rendered */}
      <main style={{ padding: "20px", minHeight: "80vh" }}>
        <Outlet />
      </main>
    </>
  );
}

export default Layout;