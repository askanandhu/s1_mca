<html>
<head><title>registration form</title></head>
<body bgcolor="ADD8E6" style="text-align:center">
<marquee height="100"scrollamount="10" onmouseover="stop()" onmouseout="start()"><font color="red" size="20">WELCOME TO FRESHERS WORLD!!!</font></marquee>
<form method="POST" action="results.php">
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
	<td>Password</td><td><input type="password" id="password" name="password">
</tr>
<tr>
	<td>Re-enter Password</td><td><input type="password" id="re_password" name=re_"password">
</tr>
<tr>
	<td rowspan="5">Select your security Question</td>
	<tr><td><input type="radio" name="sec" >What is your pet name?</td></tr>
	<tr><td><input type="radio" name="sec" >Who is your best friend?</td></tr>
	<tr><td><input type="radio" name="sec" >What is favourite colour?</td></tr>
	<tr><td><input type="radio" name="sec" >Who is your favourite teacher?</td></tr>
</tr>
<tr>
	<td>Answer of security question</td><td><input type="text" id="ques"></td>
</tr>
<tr>
	<td>Email id</td><td><input type="text" id="email" name="femail"></td>
</tr>
<tr>
	<td>lanuguages known</td>
	<td><input type="checkbox" value="Malayalam"  name="lang1">Malayalam</input>
	<input type="checkbox"  value="English" name="lang2">English</input>
	<input type="checkbox" value="Hindi" name="lang3">Hindi</input>
	</td>
	
</tr>
<tr>
	<td>Phone number</td>
	<td>
		<table border="1">
		<tr><th>Home</th>
		<th>Office</th></tr>
		<tr><td><input type="number" name="fhome"></td>
		<td><input type="number" name="foffice"></td></tr>
		</table>
	</td>
</tr>
<tr>
	<td>Upload CV</td>
	<td><button>Choose File</button>No File Chosen</td>
</tr>
<tr>
	<td><center><input type="Reset"></center></td>
	<td><center><input type="Submit" value="submit"></center></td>
</tr>
</table>
</form>
</body>
</html>
