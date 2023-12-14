<?php
$conn=mysqli_connect('localhost','root','root','student');
if(isset($_POST['update']))
{
$ktu=$_POST['roll'];
$sub=$_POST['name'];
$ser1=$_POST['ser1'];
$ser2=$_POST['ser2'];
$ass1=$_POST['ass1'];
$ass2=$_POST['ass2'];
$att=$_POST['atten'];
$sum=(($ser1+$ser2)/100)*20;
if($att>90)
	$at=8;
elseif($att > 80)
	$at=7;
elseif($att > 80)
	$at=5;
elseif($att > 70)
	$at=4;
else
	$at=0;
$as=($ass1+$ass2)/2;
$sum=$sum+$at+$as;
$rq="update studmark set series1=$ser1,series2=$ser2,assgmnt1=$ass1,assgmnt2=$ass2,attendance=$att,internal=$sum where KTU_id=$ktu and subject=$sub";
$qr=mysqli_query($conn,$rq);
if($qr)
{
	echo"Mark updated";
	
}
else{
	echo "not";
}
}
?>
<html>
<body>
<form method="POST" action="markview.php">
<?php
$conn=mysqli_connect('localhost','root','root','student');
$ktu=$_POST['KTU_id'];
$sub=$_POST['sub'];
$sq="select * from studmark where KTU_id=$ktu and subject=$sub";
$r=mysqli_query($conn,$sq);
if(mysqli_num_rows($r)){
	$row=mysqli_fetch_assoc($r);
	echo"KTU_id:<input type='text' value='".$row["KTU_id"]."'disabled name='roll'>" ;
		echo"sub:<input type='text' value='".$row["subject"]."'disabled name='name'>";
		echo"<input type='hidden' value='".$row["KTU_id"]."' name='roll'>" ;
		echo"<input type='hidden' value='".$row["subject"]."' name='name'>";
		echo"Series1:<input type='text' value='".$row["series1"]."'name='ser1'>";
		echo"series2:<input type='text' value='".$row["series2"]."'name='ser2'>";
		echo"assignment1:<input type='text' value='".$row["assgmnt1"]."'name='ass1'>";
		echo"assignment2:<input type='text' value='".$row["assgmnt2"]."'name='ass2'>";
		echo"attendance:<input type='text' value='".$row["attendance"]."'name='atten'>";
		echo "<input type='submit' value='update' name='update's>";
}
?>

</form>
</body>
</html>






