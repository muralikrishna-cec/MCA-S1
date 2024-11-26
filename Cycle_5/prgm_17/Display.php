<?php 
// Include the database connection file
include("db.php");

if (isset($_POST['submit'])) { // Check if the form is submitted
    // Fetch form data from the POST request
    $bookno = $_POST['bookno'];
    $booktitle = $_POST['booktitle'];
    $bookedition = $_POST['bookedition'];
    $bookpub = $_POST['bookpub'];

    // SQL query to insert a new record into the BOOK_DETAILS table
    $sql = "INSERT INTO BOOK_DETAILS (bookno, title, edition, publisher) 
            VALUES ('$bookno', '$booktitle', '$bookedition', '$bookpub')";

    // Execute the insert query
    if (mysqli_query($connection, $sql)) {
        echo "Inserted successfully<br>";
    } else {
        // Display an error message if the query fails
        echo "Error: " . mysqli_error($connection) . "<br>";
    }
}

// Fetch all records from the BOOK_DETAILS table
$query = mysqli_query($connection, "SELECT * FROM BOOK_DETAILS");

// Check if the query executed successfully
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
               // Check if there are any rows in the result set
              if (mysqli_num_rows($query) > 0) {
                // Loop through the result set
               while ($row = mysqli_fetch_assoc($query))
                {
                  echo "
                   <tr>
                       <td>{$row['bookno']}</td>
                       <td>{$row['title']}</td>
                       <td>{$row['edition']}</td>
                       <td>{$row['publisher']}</td>
                 </tr>";
                }
                } else {
                   // Display a message if no rows are found
                   echo "<tr><td colspan='4'>No records found</td></tr>";
                  }
            ?>
            </tr>

        </table>
       </center> 
    </body>
</html>