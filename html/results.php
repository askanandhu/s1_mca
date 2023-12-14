<html>
<body>
<?php
$name=$_POST['fname'];
$age=$_POST['fage'];
$email=$_POST['femail'];
$phoneH=$_POST['fhome'];
$phoneO=$_POST['foffice'];
$lang1=$_POST['lang1'];
$lang2=$_POST['lang2'];
$lang3=$_POST['lang3'];
echo"<center>";
echo"<h1> WELCOME:".$name."</h1><br>";
echo"<table border='2'>";
echo"<tr><td>NAME</td>"."<td>".$name."</td></tr>";
echo"<tr><td>AGE</td> "."<td>".$age."</td></tr>";
echo"<tr><td>EMAIL</td> "."<td>".$email."</td></tr>";
echo"<tr><td>PHONE 1</td>"."<td>".$phoneH."</td></tr>";
echo"<tr><td>LANGUAGES KNOWN</td>"."<td><ul><li>".$lang1."</li><li>". $lang2."</li><li>".$lang3."</li></ul></td></tr>";
echo"</table>";
echo"</center>";
?>
</body>
</html>
