<?php include("db.php"); ?>

<html>
<head>
        <title>BOOK DETAILS</title>
</head>
<body>
  <center>
  
  <h2>BOOK DETAILS</h2>

  <form method="POST" action="Display.php">
     <h2>Enter Book Details</h2>
     BOOK NO: <input type="number" name="bookno"><br><br>
     BOOK TITLE: <input type="text" name="booktitle"><br><br>
     BOOK EDITION: <input type="number" name="bookedition"><br><br>
     BOOK PUBLISHER: <input type="text" name="bookpub"><br><br>
     <input type="submit" name="submit">
                
   </form>
  </center>
</body>
</html>
