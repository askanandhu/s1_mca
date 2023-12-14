<?php
$conn=mysqli_connect('localhost','root','root','student');
?>
<html>
<body>
<form method="POST" action="markentry.php">
<center><table border="2">
<h2>MARK REGISTRATION</h2>
<tr><td>KTU_id</td>
<td><select id="ktu-id" name="KTU_id">
<option value="select">SELECT</option>
<?php
$q="select KTU_id from KtuReg";
$r=mysqli_query($conn,$q);
if(mysqli_num_rows($r)>0)
{
	while($row=mysqli_fetch_assoc($r))
	{
		echo"<option value=".$row[KTU_id].">".$row[KTU_id]."</option>";
	}
}
?>
</select>
</td></tr>
<tr><td>subject</td><td><input type="text" name='sub'></td></tr>
<tr><td>series 1</td><td><input type="text" name='ser1'></td></tr>
<tr><td>series 2</td><td><input type="text" name='ser2'></td></tr>
<tr><td>assignmet 1</td><td><input type="text" name='ass1'></td></tr>
<tr><td>assignmet 2</td><td><input type="text" name='ass2'></td></tr>
<tr><td>attendence</td><td><input type="text" name='atten'></td></tr>
<tr><td><input type="submit" value="submit"></td>
<td><input type="Reset" value="Reset"></td></tr>
</table>
</center>
</form>
</body>
</html>
