const con=require('./db.js');

const student='CREATE TABLE IF NOT EXISTS STUDENT(id INT PRIMARY KEY,name VARCHAR(50),age INT,course VARCHAR(30))';

con.query(student,(err)=>{
    if(err) throw err;
      console.log('Table Student Created');
});
con.end();

