const con = require('./db.js');

const sql = "DELETE FROM STUDENT WHERE ID = 7"; 

con.query(sql, (err, result) => {
    if (err) throw err;
    console.log('Record Deleted Successfully');
});

con.end();
