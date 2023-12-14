<?php
$conn=mysqli_connect('localhost','root','root','student');
$id=$_POST['KTU_id'];
$sub=$_POST['sub'];
$ser1=$_POST['ser1'];
$ser2=$_POST['ser2'];
$assgn1=$_POST['ass1'];
$assgn2=$_POST['ass2'];
$atten=$_POST['atten'];
$sum=(($ser1+$ser2)/100)*20;
 if($atten>90)
	$at=8;
else if($atten > 80)
	$at=7;
else if($atten > 80)
	$at=5;
else if($atten > 70)
	$at=4;
else
	$at=0;
$as=($assgn1+$assgn2)/2;
$sum=$sum+$at+$as;
if($atten<75)
	$sq="insert into studmark values($id,$sub,$ser1,$ser2,$assgn1,$assgn2,$atten,0)";
else
	$sq="INSERT INTO studmark VALUES ('$id', '$sub', '$ser1', '$ser2', '$assgn1', '$assgn2', '$atten',$sum)";

$data=mysqli_query($conn,$sq);
if($data)
{
	echo"<script>alert('successfully entered mark');</script>";
}
else{
	echo mysqli_error($conn);
}
?>

