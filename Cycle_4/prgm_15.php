<html>
    <head>
        <title>FACTORIAL</title>
    </head>
  <body align="center">
    <h2 >FACTORIAL</h2>
     <form method="POST" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        Enter a number :<input type="text" name="number" required>
                     <input type="submit" name="submit">
    </form>
  </body>
</html>

<?php
    if($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["submit"]))
    {
      $number=$_POST['number'];
      if(is_numeric($number))
       {
         $num=$number;
         $fact=1;
  
         for($i=1; $i<=$num;$i++) 
          {
           $fact*=$i;
          }
          echo "Factorial of $num is $fact";
       }else{
        echo "Enter A Valid Number";
       }
}
?>