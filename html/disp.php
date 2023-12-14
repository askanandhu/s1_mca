<?php
$conn=mysqli_connect('localhost','root','root','student');
if($conn)
{
	echo"connection successfull";
}
else
{
	echo"connection failed";
}
$s="select * from stud";
$q=mysqli_query($conn,$s);
if(mysqli_num_rows($q))
{	echo"<table border='2'>";
	echo"<tr><td>roll no</td><td>name</td><td>marks</td>";
	while($row=mysqli_fetch_assoc($q))
	{
		echo"<tr><td>".$row["roll no"]."</td>";
		echo"<td>".$row["name"]."</td>";
		echo"<td>".$row["marks"]."</td></tr>";
	}
	echo"</table>";
}
