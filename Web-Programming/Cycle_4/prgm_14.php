<html>
    <head>
        <title>ODD OR EVEN</title>
    </head>
  <body align="center">
    <h2 >ODD OR EVEN CHECKER</h2>
     <form method="GET" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        Enter a number :<input type="text" name="number" required>
                     <input type="submit" name="submit">
    </form>
  </body>
</html>

<?php
    if($_SERVER["REQUEST_METHOD"] == "GET" && isset($_GET["submit"]))
    {
      $number=$_GET['number'];

      if(is_numeric($number))
       {
         if($number%2==0)
         {
            echo "<p>{$number}is Even Number </p>";
         }
         else{
            echo "<p>{$number}is Odd Number </p>"; 
         }
       }else{
        echo "Enter A Valid Number";
       }
}
?>