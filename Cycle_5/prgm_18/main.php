<?php
session_start();
include("connect.php");
?>

<html>
    <head>
        <title>LOGIN</title>
    </head>
    <body>
        <center>
            <h2>LOGIN PAGE</h2>
            <form action="check.php" method="POST">
               USERNAME:<input type="text" name="uname" required><br><br>
               PASSWORD:<input type="password" name="pword" required><br><br>
               <input type="submit" name="submit"><br>
            </form>
        </center>
    </body>
</html>


<?php
if($_GET)
{
 $msg=$_GET['msg'];
 echo"<center>
         <br><br> ".$msg."<br> 
     </center>";
}
?>