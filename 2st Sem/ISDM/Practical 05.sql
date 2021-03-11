Practical 05

Section 2

	a)SELECT CID,COUNT(SID) AS 'Number Of Students' FROM Student GROUP BY CID HAVING COUNT(SID) < 10;
	
	b)SELECT CID,COUNT(Mcode) AS 'Number of Modules' FROM Offers GROUP BY CID HAVING COUNT(Mcode) > 3 ORDER BY 'Number of Modules' ASC;
	  SELECT CID,COUNT(Mcode) FROM Offers GROUP BY CID HAVING COUNT(Mcode) > 3 ORDER BY COUNT(Mcode) ASC;
	  
	c)SELECT CID,Accadamic_year,COUNT(Mcode) AS 'Number Of Modules' FROM Offers GROUP BY CID,Accadamic_year HAVING COUNT(Mcode) < 10 ;
	
	d)SELECT CID,COUNT(Mcode) FROM Offers WHERE Accadamic_year = 'Y3' GROUP BY CID HAVING COUNT(Mcode) > 2;