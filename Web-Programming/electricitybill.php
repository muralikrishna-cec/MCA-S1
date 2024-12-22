<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Electricity Bill</title>
</head>
<body>
    <h1>Electricity Bill Calculator</h1>
    
    <!-- Form to input units consumed -->
    <form method="POST">
        <label for="units">Enter Number of Units:</label>
        <input type="number" id="units" name="units" required>
        <button type="submit">Calculate Bill</button>
    </form>

    <?php
    // Check if form is submitted
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        // Get the number of units from the user input
        $units = $_POST['units'];

        // Define the tariff 
        if ($units <= 50) {
            $bill = $units * 3; // First 50 units: $3 per unit
        } elseif ($units <= 150) {
            $bill = 50 * 3 + ($units - 50) * 5; // Next 100 units: $5 per unit
        } elseif ($units <= 300) {
            $bill = 50 * 3 + 100 * 5 + ($units - 150) * 7; // Next 150 units: $7 per unit
        } else {
            $bill = 50 * 3 + 100 * 5 + 150 * 7 + ($units - 300) * 10; // Above 300 units: $10 per unit
        }

        // Display the calculated bill
        echo "<h2>Total Bill: $" . number_format($bill, 2) . "</h2>";
    }
    ?>
</body>
</html>
