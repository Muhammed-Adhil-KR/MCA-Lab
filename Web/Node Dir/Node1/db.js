const mysql = require('mysql');

const con = mysql.createConnection({
  host: 'localhost',
  user: 'root',        
  password: 'toor',
  database: 'CollegeDB'     
});

con.connect((err) => {
  if (err) {
    console.error(' Error connecting to MySQL:', err.message);
    return;
  }
  console.log('Connected to MySQL database.');
  con.query('CREATE DATABASE IF NOT EXISTS DB1',(err,result)=>{
    // if(err) throw err;
   
  });
});

module.exports = con;