import React from "react";
function Button({label,onClick,bgColor,color,padding,borderRadius})
{
    const style={
        backgroundColor:bgColor,
        color:color,
        padding:padding,
        border:"none",
        borderRadius:borderRadius,
        cursor:"pointer",
        margin:"5px"
    };
    return(
        <button style={style} onClick={onClick}>{label}</button>
    );
}
export default Button;