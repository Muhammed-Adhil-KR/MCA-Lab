const con=require('./db.js');

const sql="INSERT INTO STUDENT (id,name,age,course)VALUES(9,'Aleena',21,'MCA'),(8,'Aleena',21,'MCA')";

con.query(sql,(err)=>{
    if(err) throw err;
      console.log('Record Inserted Succesfully!');
    con.end();

});