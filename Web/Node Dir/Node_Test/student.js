const con=require('./db.js');

const student='CREATE TABLE IF NOT EXISTS STUDENT(RollNo INT PRIMARY KEY,Name VARCHAR(15))';

con.query(student,(err)=>{
    if(err) throw err;
      console.log('Table Student Created');
});

con.end();