const con=require('./db.js');

const sql="INSERT INTO STUDENT (RollNo,Name)VALUES(9,'Aleena')";

con.query(sql,(err)=>{
    if(err) throw err;
      console.log('Record Inserted Succesfully!');

});
con.end();