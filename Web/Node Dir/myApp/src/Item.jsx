import React from "react";

function Item({name})
{
    return(
        <li style={{
            background: "#a6afafff",
            margin: "8px auto",
            padding: "10px 20px",
            width: "300px",
            borderRadius: "50px",
            textAlign: "center",
            fontSize: "20px"
        }}>
            {name}
        </li>
    );
}
export default Item;