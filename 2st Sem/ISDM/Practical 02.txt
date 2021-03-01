Section 01

Exercise

a. SELECT SID,Sname,Address,dob,NIC,CID from student;

b. SELECT Mname,NoOfCredits from Module;

c. SELECT SName FROM Student WHERE SName LIKE 'A%' ;
   
d. SELECT Sname from student WHERE dob < '1996/01/01';

e. SELECT Sname,NIC from student WHERE Address like '%Colombo%';

f. SELECT Sname from Student WHERE Sname LIKE 'K%' and CID = 'DS';

g. SELECT Sname from Student WHERE CID = 'DS' or CID = 'IT';

-------------------------------------------------------------------------------------------------------------------------

Section 02

Exercises

a. SELECT * from student ORDER BY Sname;

b. SELECT * from student ORDER BY NIC DESC;

c. SELECT * from student ORDER BY Sname ASC , CID DESC;

