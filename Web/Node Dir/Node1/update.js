const con = require('./db.js');

const sql = "UPDATE STUDENT SET Name = 'Alen' WHERE ID = 9"; 

con.query(sql, (err, result) => {
    if (err) throw err;
    console.log('Record Updated Successfully');
});

con.end();
