<html>
<body>
<form method="POST" action="studentdb.php">
<center><table border="2">
<h2> KTU REGISTRATION</h2>
<tr><td>KTU_id</td><td><input type="text" name='ktuid'></td></tr>
<tr><td>Name</td><td><input type="text" name='name'></td></tr>
<tr><td>Address</td><td><textarea name='address'></textarea></td></tr>
<tr><td>DOB</td><td><input type="date" name='date'></td></tr>
<tr><td>Rollno</td><td><input type="text"name='roll_no'></td></tr>
<tr><td>Gender</td><td>male<input type="radio" name='gender' value='m'>female<input type="radio" name='gender' value='f'></td></tr>
<tr><td>semester</td><td><select id="sem" name="sem">
	<option value="select">SELECT</option>
	<?php
	  for($i=1;$i<=6;$i++)
	  {
	  	echo"<option value=".$i.">".$i."</option>";
	  }
	?>
	</select></td>
<tr><td><input type="submit" value="login"></td>
<td><input type="Reset" value="Reset"></td></tr>
</table>
</center>
</form>
</html>
