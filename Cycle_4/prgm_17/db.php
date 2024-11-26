<?php
// Database connection credentials
$server = 'localhost';
$username = 'root';
$password = '0000';
$database = 'finaldb'; // Database name

// Connect to MySQL server
$connection = mysqli_connect($server, $username, $password); 

if (!$connection) {
    die('Could not connect: ' . mysqli_connect_error());
}
echo 'Connected successfully<br>';

// Check if the database exists, if not create it
$sqlCreateDatabase = "CREATE DATABASE IF NOT EXISTS $database";
if (mysqli_query($connection, $sqlCreateDatabase)) {
    echo "Database '$database' is ready<br>";
} else {
    die('Error creating database: ' . mysqli_error($connection));
}

// Select the database
mysqli_select_db($connection, $database);

// Create table if it doesn't exist
$sqlCreateTable = "CREATE TABLE IF NOT EXISTS BOOK_DETAILS (
    id INT NOT NULL AUTO_INCREMENT,
    bookno INT NOT NULL,
    title VARCHAR(20) NOT NULL,
    edition INT NOT NULL,
    publisher VARCHAR(50) NOT NULL,
    PRIMARY KEY (id)
)";
if (mysqli_query($connection, $sqlCreateTable)) {
    echo "Table 'BOOK_DETAILS' is ready<br>";
} else {
    die('Error creating table: ' . mysqli_error($connection));
}

// Close the database connection
//mysqli_close($connection);
?>