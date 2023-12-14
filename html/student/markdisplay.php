<html>
<?php
$conn=mysqli_connect('localhost','root','root','student');
/*if($conn)
{
    echo"connected";
}*/
$q="select * from studmark";
$r=mysqli_query($conn,$q);
if(mysqli_num_rows($r))
{
    while($row=mysqli_fetch_assoc($r))
    {
        echo "ID: ".$row['KTU_id']."<br>Subject :".$row['subject']."<br>Series 1 :".$row['series1']."<br>Series 1 :".$row['subject']."<br>Series 2 :".$row['series2']."<br>Assignment 1 :".$row['assgmnt1']."<br>Assignment 2 :".$row['assgmnt2']."<br>Attendance :".$row['attendance']."<br>Internal :".$row['internal'];

}
}
?>
