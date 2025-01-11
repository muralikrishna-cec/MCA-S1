<?php
 include("connect.php");
 session_start();

 if(isset($_POST['submit'])){
    $uname=$_POST['uname'];
    $pword=$_POST['pword'];

    $sql=mysqli_query($conn,"SELECT * FROM loginform WHERE uname='$uname' OR password='$pword'");
 }

 while($row =mysqli_fetch_assoc($sql)){
    $dbuname=$row['uname'];
    $dbpword=$row['password'];
  }




  if(isset($dbuname)&& isset($dbpword)){

    if($dbuname==$uname && $dbpword==$pword){
      
      $_SESSION['login_user']=$uname;

      header("Location:welcome.php");
    }
    elseif($dbuname==$uname && $dbpword!=$pword){
      header("Location:main.php?msg=WRONG PASSWORD");
    }
    elseif($dbuname!=$uname && $dbpword==$pword){
      header("Location:main.php?msg=Wrong Username");
    }
  }
 else{
    header("Location:main.php?msg=Wrong pasword and username");
  }

?>