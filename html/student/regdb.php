<?php
$conn=mysqli_connect('localhost','root','root','student');
$id=$_POST['ktuid'];
$name=$_POST['name'];
$add=$_POST['adress'];
$dob=$_POST['date'];
$rno=$_POST['roll_no'];
$gender=$_POST['gender'];
$sem=$_POST['sem'];
$sq="insert into KtuReg values('$id','$name','$add','$dob','$rno','$gender','$sem')";
$p=mysqli_query($conn,$sq);
if($p)
{
	echo"<script>alert('successfully registered');</script>";
}
?>
