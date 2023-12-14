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
$rno=$_POST['rno'];
$name=$_POST['fname'];
$mark=$_POST['fmark'];
$sq="insert into stud values('$rno','$name','$mark')";
$q="select * from stud";
$p=mysqli_query($conn,$sq);
if($p)
{
	echo"<script>alert('successfully inserted one rows');</script>";
}
else
{
	echo"<script>alert('unsuccessfully inserted one rows');</script>";
}
?>
