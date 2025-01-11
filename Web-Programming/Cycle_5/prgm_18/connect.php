<?php
$servername = "localhost";
$username = "root";
$password = "0000";
$dbname = "login";

$conn = mysqli_connect($servername, $username, $password);
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}
echo "Connected successfully<br>";




























$db = "CREATE DATABASE IF NOT EXISTS $dbname";

if (mysqli_query($conn, $db)) {
    echo "Database created successfully<br>";
} else {
    die("Error creating database: " . mysqli_error($conn));
}

mysqli_select_db($conn, $dbname);




















$tb ="CREATE TABLE IF NOT EXISTS loginform (
        id INT  AUTO_INCREMENT,
        uname VARCHAR(20) , 
        password VARCHAR(50) ,
        PRIMARY KEY (id))";

if (mysqli_query($conn, $tb)) {
    echo "Table created successfully<br>";
} else {
    die("Error creating table: " . mysqli_error($conn));
}






















$uname = "ceconline"; 
$password = "cec@123";

$check_sql = "SELECT * FROM loginform WHERE uname = '$uname' AND password='$password'";
$result = mysqli_query($conn, $check_sql);

if (mysqli_num_rows($result) > 0) {
    echo "Username and password already exists. Skipping insertion.<br>";
} 
else {
    $sql = "INSERT INTO loginform (uname, password) VALUES ('$uname', '$password')";
    if (mysqli_query($conn, $sql)) {
        echo "Value inserted successfully<br>";
    } 
    else {
        die("Error inserting value: " . mysqli_error($conn));
    }
}

//mysqli_close($conn);
?>



<?php
/* db connection without query

 $servername="localhost";
 $username="root";
 $password="";
 $dbname="login";
 $conn=new mysqli($servername,$username,$password,$dbname);
 if($conn->connect_error)
 {
    die("connection failed".$conn->connect_error);
 }
*/
?>