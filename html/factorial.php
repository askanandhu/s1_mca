<html>
<head>
<title>Factorial</title>
</head>
<form method="POST">
enter a number<input type="number" name=num>
<br>
<input type="Submit" value="submit">
</form>
<?php
$num=$_POST["num"];
$N=1;
$fact=1;
for($i=1;$i<=$num;$i++)
{
	$fact*=$i;
}
echo "the factorial of $num  is $fact";
?>
</html>
