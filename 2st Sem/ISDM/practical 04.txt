Exercise

	a.SELECT COUNT(Mcode) FROM Offers GROUP BY CID;
	b.SELECT COUNT(SID) AS 'Number of Student' FROM Student GROUP BY CID;
	c.SELECT COUNT(Mcode) FROM Offers GROUP BY CID , Accadamic_year;
	d.SELECT COUNT(Mcode) FROM Offers WHERE Semester = 2;
	e.SELECT COUNT(Mcode),CID FROM Offers WHERE Semester = 2 GROUP BY CID ORDER BY CID ASC;