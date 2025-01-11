<html>
<head>
    <title>Student Details </title>
</head>
<body style="text-align: center;">
    <h2>Details of Student</h2>
    <form method="GET" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        Name: <input type="text" name="name" required><br><br>
        Email id: <input type="email" name="mail" required><br><br>
        Address: <textarea rows="4" name="adrs" required></textarea><br><br>
        Gender:
        M <input type="radio" value="Male" name="gender">
        F <input type="radio" value="Female" name="gender"><br><br>
        DOB: <input type="date" name="dob"><br><br>
        <input type="submit" name="submit">
    </form>

    <?php
        if ($_SERVER["REQUEST_METHOD"] == "GET" && isset($_REQUEST["submit"])) {
            $name = $_REQUEST["name"];
            $email = $_REQUEST["mail"];
            $address = $_REQUEST["adrs"];
            $gender = $_REQUEST["gender"];
            $dob = $_REQUEST["dob"];
             
            if (empty($name) || empty($email) || empty($address) || empty($gender) || empty($dob)) {
                echo "<h2>Please fill in all the fields.</h2>";
            }
            else{
                echo"<br><br> <h1>DETAILS:- </h1>";
                echo " <h3> Name:  $name <br> Email ID:  $email <br>Address:  $address <br> Gender:  $gender <br> D.O.B:  $dob </h3>";
            }    
        } 
        else {
            echo "<h1>Please enter values..</h1>";
        }
    ?>
</body>

</html>