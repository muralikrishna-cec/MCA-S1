<!DOCTYPE html>
<html>
<head>
    <title>Cricket Players</title>
    <style>
        table {
            border-collapse: collapse;
            width: 50%;
            margin: 20px auto;
        }
        table, th, td {
            border: 1px solid black;
        }
        th, td {
            text-align: left;
            padding: 8px;
        }
        th {
            background-color: #f2f2f2;
        }
    </style>
</head>
<body>
    <h1 style="text-align: center;">List of Cricket Players</h1>

    <?php
    // Array of cricket players
    $players = [
        "Virat Kohli",
        "Sachin Tendulkar",
        "MS Dhoni",
        "Rohit Sharma",
        "Jasprit Bumrah"
    ];
    ?>

    <!-- Display the players in an HTML table -->
    <table>
        <tr>
            <th>#</th>
            <th>Player Name</th>
        </tr>
        <?php foreach ($players as $index => $player): ?>
        <tr>
            <td><?= $index ?></td>
            <td><?= $player ?></td>
        </tr>
        <?php endforeach; ?>
    </table>
</body>
</html>
