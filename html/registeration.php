
<html>
<head><title>registration form</title></head>
<body bgcolor="ADD8E6" style="text-align:center">
<marquee height="100"scrollamount="10" onmouseover="stop()" onmouseout="start()"><font color="red" size="20">WELCOME TO FRESHERS WORLD!!!</font></marquee>
<form>
<table border=2 align="center">
<tr>
	<th colspan="2">Registration Form</th>
</tr>
<tr>
	<td>NAME</td><td><input type="text" id="name"></td>
</tr>
<tr>
	<td>AGE</td>
	<td><select id="age">
	  <option value="select">SELECT</option>
	  <option value="18">18</option>
	  <option value="19">19</option>
	  <option value="20">20</option>
	  <option value="21">21</option>
	  <option value="22">22</option>
	  <option value="23">23</option>
	  <option value="24">24</option>
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
	<td>Email id</td><td><input type="text" id="email"></td>
</tr>
<tr>
	<td>lanuguages known</td>
	<td><input type="checkbox">Malayalam</input>
	<input type="checkbox">English</input>
	<input type="checkbox">Hindi</input>
	</td>
	
</tr>
<tr>
	<td>Phone number</td>
	<td>
		<table border="1">
		<tr><th>Home</th>
		<th>Office</th></tr>
		<tr><td><input type="number"></td>
		<td><input type="number"></td></tr>
		</table>
	</td>
</tr>
<tr>
	<td>Upload CV</td>
	<td><button>Choose File</button>No File Chosen</td>
</tr>
<tr>
	<td><center><input type="Reset"></center></td>
	<td><center><input type="Submit"></center></td>
</tr>
</table>
</form>
</body>
</html>

