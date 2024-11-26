<html>
    <head>
        <title>FACTORIAL</title>
    </head>
  <body>
    <h2 align="center">FACTORIAL</h2>
     <form method="post" action="">
        Enter a number :<input type="text" name="number">
                     <input type="submit" name="submit">
    </form>
  </body>
</html>

<?php
    if($_POST['submit'])
    {
      $number=$_POST['number'];
      $n=$number;
      $f=1;

     for($i=1; $i<=$n;$i++) 
     {
        $f=$f*$i;
     }

   echo "factorial of $n is $f";
}
?>