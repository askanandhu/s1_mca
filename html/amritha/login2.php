<?php
$conn=mysqli_connect('localhost','root','root','student');
$username=$_POST["femail"];
$password=$_POST["password"];
$name=$_POST["fname"];
$age=$_POST["fage"];
$email=$_POST["femail"];
$phno=$_POST["fphno"];
$sq="insert into userlogin values('$username','$password','$name',$age,'$email','$phno')";
if(mysqli_query($conn,$sq))
{
 echo "Success";
}
else
{ 
 echo "error";
}
?>
