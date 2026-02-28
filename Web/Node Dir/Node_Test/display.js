const con=require('./db.js');

const sql="SELECT * FROM STUDENT";

con.query(sql,(err,results)=>{
    if(err) throw err;

    console.log('Student Records: ');
    console.table(results);
    
});
con.end();