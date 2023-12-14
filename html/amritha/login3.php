<html>
<head>
<title>registration</title></head>
<form method="POST" action="login2.php">
<table border=2 align="center">
<tr>
	<th colspan="2">Registration Form</th>
</tr>
<tr>
	<td>NAME</td><td><input type="text" id="name" name="fname"></td>
</tr>
<tr>
	<td>AGE</td>
	<td><select id="age" name="fage">
	<option value="select">SELECT</option>
	<?php
	  for($i=18;$i<=40;$i++)
	  {
	  	echo"<option value=".$i.">".$i."</option>";
	  }
	?>
	</select></td>
</tr>
<tr>
	<td>Email id</td><td><input type="text" id="email" name="femail"></td>
</tr>
<tr>
	<td>Password</td><td><input type="password" id="password" name="password">
</tr>
<tr>
	<td>Re-enter Password</td><td><input type="password" id="re_password" name=re_"password">
</tr>
<tr><td><input type="submit" value="register"></td>
<td><input type="Reset" value="Reset"></td></tr>
</table>
</center>


