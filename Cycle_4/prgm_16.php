<html>
<head>
    <title>Student Details </title>
</head>
<body align="center">
    <h2>Details of Student</h2>
    <form method="REQUEST" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        Name: <input type="text" name="name"><br><br>
        Email id: <input type="email" name="mail"><br><br>
        Address: <textarea rows="4" name="adrs"></textarea><br><br>
        Gender: M <input type="radio" value="M" name="gender">
        F <input type="radio" value="F" name="gender"><br><br>
        DOB: <input type="date" name="dob"><br><br>
        <input type="submit" name="submit">
    </form>

    <?php
        if (isset($_REQUEST["submit"])) {
            $name = $_REQUEST["name"];
            $mail = $_REQUEST["mail"];
            $adrs = $_REQUEST["adrs"];
            $gen = $_REQUEST["gender"];
            $dob = $_REQUEST["dob"];

            echo"<br><br>DETAILS:- <br><br>";
            echo "Name: $name <br> Email ID: $mail <br>Address: $adrs <br> Gender: $gen <br> D.O.B: $dob";
        } else {
            echo "<p>Please enter values..</p>";
        }
    ?>
</body>

</html>