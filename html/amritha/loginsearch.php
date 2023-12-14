<?php
$conn=mysqli_connect('localhost','root','root','student');
$n=$_POST['username'];
$s="select * from userlogin where username=$n";
$q=mysqli_query($conn,$s);
if(mysqli_num_rows($q))
{
	echo"<table border='2'>";
	echo"<tr><td>name</td><td>name</td><td>marks</td></tr>";
	while($row=mysqli_fetch_assoc($q))
	{
		//echo"<tr><td>".$row["roll_no"]."</td>";
		echo"<td>".$row["username"]."</td>";
		//echo"<td>".$row["marks"]."</td></tr>";
	}
	echo"</table>";
}
?>
