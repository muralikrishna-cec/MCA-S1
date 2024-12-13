<html>
  <head>
      <title>Factorial Calculator</title>
  </head>
  <body style="text-align: center; margin-top: 50px;">
     <h2>Factorial Calculator</h2>
     <form method="POST" action="<?php echo $_SERVER['PHP_SELF']; ?>">
       <label for="number">Enter a number:</label><br>
       <input type="text" name="number" required><br><br>
       <input type="submit" name="submit">
     </form>
  </body>
</html>

<?php
    if($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["submit"])){
      $number=$_POST['number'];

      if(is_numeric($number) && $number >= 0){
         $fact=1;
         for($i=1; $i <= $number; $i++) {
           $fact *= $i;
         }
          echo "<p>The factorial of $number is $fact.</p>";
      }
      else{
        echo "Enter A Valid Number";
      }
    }
?>