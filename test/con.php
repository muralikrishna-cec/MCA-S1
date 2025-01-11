<?php
$conn = mysqli_connect('localhost','root','0000','Student');
  if(!$conn)
  {
   die('error'.mysqli_connect_error());
  }
  else{
      echo"connection established";
  }

?>