<?php
$conn=mysqli_connect('localhost','root','root','student');
?>
<html>
<body>
<form method="POST" action="markview.php">
<center><table cellspacing="10">
<h2>MARK UPDATE</h2>
<tr><td>KTU_id</td>
<td><select id="ktu-id" name="KTU_id">
<option value="select">SELECT</option>
<?php
$conn=mysqli_connect('localhost','root','root','student');
$q="select KTU_id,subject from studmark";
$r=mysqli_query($conn,$q);
if(mysqli_num_rows($r)>0)
{
	while($row1=mysqli_fetch_assoc($r))
	{
		echo"<option value=".$row1[KTU_id].">".$row1[KTU_id]."</option>";
	}
}
?>
<td>subject</td>
<td><select id="sub" name="sub">
<option value="select">SELECT</option>
<?php
$p="select subject from studmark";
$s=mysqli_query($conn,$p);
if(mysqli_num_rows($s)>0)
{
	while($row2=mysqli_fetch_assoc($s))
	{
		echo"<option value=".$row2[subject].">".$row2[subject]."</option>";
	}
}
?>
<tr><td><input type="submit" value="search" name="ok"></td></tr>
</table></center>
</form>
</body>
</html>

