import React from "react";
import Item from "./Item";

function ItemList()
{
    const items=["Laptop","Mouse","Keyboard","Monitor","Headphones"];
    return(
        <ul style={{listStyle:"none",padding:0}}>
        {items.map((i,index)=>(
            <Item key={index} name={i} />
        ))}
     </ul>
    );
}
export default ItemList;