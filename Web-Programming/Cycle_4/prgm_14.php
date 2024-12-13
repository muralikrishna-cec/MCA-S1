<html>
  <head>
    <title>ODD OR EVEN</title>
  </head>
  <body style="text-align: center; margin-top: 50px;">
     <h2 >ODD OR EVEN CHECKER</h2>
     <form method="GET" action="<?php echo $_SERVER['PHP_SELF']; ?>">
       <label for="number">Enter a number:</label><br>
       <input type="text" name="number" required><br><br>
       <input type="submit" name="submit">
    </form>
  </body>
</html>

<?php
    if($_SERVER["REQUEST_METHOD"] == "GET" && isset($_GET["submit"])) {
      $number=$_GET['number'];

      if(is_numeric($number)){
         if($number%2==0){
            echo "<p>{$number}is an Even Number </p>";
         }
         else{
            echo "<p>{$number}is an Odd Number </p>"; 
         }
      }
      else{
        echo "Enter A Valid Number";
      }
    }
?>