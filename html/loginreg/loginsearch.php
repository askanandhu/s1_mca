<?php
$conn=mysqli_connect('localhost','root','root','student');
$username=$_POST['username'];
$password=$_POST['password'];
$s= "SELECT * FROM userlogin WHERE username = '$username' AND password = '$password' ";
$q=mysqli_query($conn,$s);
if(mysqli_num_rows($q))
{
	echo"<table border='2'>";
	echo"<tr><td>name</td><td>age</td><td>email</td></tr>";
	while($row=mysqli_fetch_assoc($q))
	{
		
		echo"<tr><td>".$row["Name"]."</td>";
		echo"<td>".$row["age"]."</td>";
		echo"<td>".$row["email"]."</td></tr>";
	}
	echo"</table>";
}
else
{
    echo 'INVALID USERNAMRE OR PASSWORD';
}
?>
