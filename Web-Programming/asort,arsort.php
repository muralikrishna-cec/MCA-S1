<!DOCTYPE html>
<html>
<head>
    <title>Sort Cricket Players</title>
</head>
<body>
    <?php
    // Array of cricket players
    $players = [
        "Virat Kohli",
        "Sachin Tendulkar",
        "MS Dhoni",
        "Rohit Sharma",
        "Jasprit Bumrah"
    ];

    echo "<h2>Original Array</h2>";
   
    print_r($players);


    // Sort in ascending order
    asort($players);
    echo "<h2>Ascending Order (asort)</h2>";
    echo "<pre>";
    print_r($players);
    echo "</pre>";

    // Sort in descending order
    arsort($players);
    echo "<h2>Descending Order (arsort)</h2>";
    echo "<pre>";
    print_r($players);
    echo "</pre>";
    ?>
</body>
</html>
