<?php

include('con.php');

if(isset($_POST['submit']))
{
  $name=$_POST['name'];
  $email=$_POST['email'];


$sql="INSERT INTO student (name,email,address,dob,gender)VALUES('$name','$email','$adrs','$gender','$dob')";

if(mysqli_query($conn,$sql))
{
    echo"insertion successfull";
}
else{
    die("not insetred ".mysqli_error($conn));
}
}
?>

<html>
    <body>
        <center>
        <table>
            <tr>
                <td>NAME</td>
                <td>EMAIL</td>
                <td>ADDRESS</td>
                <td>DOB</td>
                <td>GENDER</td>
            </tr>
            <tr>
                <?php

                $sql2="SELECT * from student ";

                $result=mysqli_query($conn,$sql2);
                
                 if(mysqli_num_rows($result)>0)
                 {
                     while($r=mysqli_fetch_assoc($result))
                     {
                         echo"
                         <tr>
                           <td>{$r['name']} </td>
                           <td>{$r['email']} </td>
                           <td>{$r['address']} </td>
                           <td>{$r['dob']} </td>
                           <td>{$r['gender']} </td>
                         </tr>
                         
                         ";
                     }
                 }
                 else{
                     echo"<tr> <td>no records </td> </tr>";
                 }
                               
                ?>
            </tr>
        </table>
     </center>
    </body>
</html>







