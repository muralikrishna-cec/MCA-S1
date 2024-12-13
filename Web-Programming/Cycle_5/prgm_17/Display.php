<?php 
include("db.php");

if (isset($_POST['submit'])) { 
    $bookno = $_POST['bookno'];
    $booktitle = $_POST['booktitle'];
    $bookedition = $_POST['bookedition'];
    $bookpub = $_POST['bookpub'];

    $sql = "INSERT INTO BOOK_DETAILS (bookno, title, edition, publisher) 
            VALUES ('$bookno', '$booktitle', '$bookedition', '$bookpub')";

    if (mysqli_query($connection, $sql)) {
        echo "Inserted successfully<br>";
    } 
    else {
        echo "Error: " . mysqli_error($connection) . "<br>";
    }
 }

$query = mysqli_query($connection, "SELECT * FROM BOOK_DETAILS");

if (!$query) {
    die("Error fetching records: " . mysqli_error($connection));
}
?>

<html>
<head>
  <title>BOOK_DETAILS</title>
</head>
<body>
  <center> 
  <table border="1px solid black" cellpadding="5" cellspacing="0">
    <tr>
        <th>BOOK NUMBER</th>
        <th>TITLE</th>
        <th>EDITION</th>
        <th>PUBLISHER</th>
    </tr>
    <tr>
        <?php
            if (mysqli_num_rows($query) > 0) {
               while ($row = mysqli_fetch_assoc($query)){
                  echo "
                   <tr>
                       <td>{$row['bookno']}</td>
                       <td>{$row['title']}</td>
                       <td>{$row['edition']}</td>
                       <td>{$row['publisher']}</td>
                   </tr>";
                }
            } 
            else {
                 echo "<tr><td colspan='4'>No records found</td></tr>";
            }
        ?>
    </tr>
    </table>
    </center> 
    </body>
</html>