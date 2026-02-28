// import { useState } from 'react';
// import React from "react";
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
import './App.css'
// import Hello from './hello';
// import StudentList from './studentList';
// import ItemList from "./itemList";
// import Counter from "./Counter";
// import Button from"./Button";

import { BrowserRouter,Route,Routes } from "react-router-dom";
import Layout from "./Layout";
import Home from "./Home";
import About from "./About";
import Contact from "./Contact";



function App() {
  // const handleClick=(msg)=>alert(msg);
  return (
    <>
    {/* <div style={{ textAlign: "center", marginTop: "30px", color: "Red"}}> */}
      {/* <h1>Counter App</h1>
      <br></br>
      <Counter/> */}
      {/* <div>
      <h2>List of Items</h2>
      <ItemList/>
      </div>
      <div>
      <h2>List of Students</h2>
      <StudentList/>
      </div> */}

      {/* <h2>Reusable Button Component</h2>
      <br></br>
      <Button label="Primary" onClick={()=> handleClick("Primary clicked")} />
      <Button label="Success" bgColor="green" onClick={()=> handleClick("Success clicked")} />
      <Button label="Danger" bgColor="red" borderRadius="20px" onClick={()=>handleClick("Danger clicked")} /> */}

      <BrowserRouter>
      <Routes>

        <Route element={<Layout />}>
          <Route path="/" element={<Home />} />
          <Route path="/about" element={<About />} />
          <Route path="/contact" element={<Contact />} />
          
          <Route path="*" element={<h2>404 - Page Not Found</h2>} />
        </Route>
      </Routes>
    </BrowserRouter>
    </>
  );
}

export default App;
