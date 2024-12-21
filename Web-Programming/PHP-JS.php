<html>
    <head>
        <title>SUM OF NUMS</title>

        <script>
           function validate()
           {
            var num1 = document.forms["frm"]["num1"].value;
            var num2 = document.forms["frm"]["num2"].value;

            if(isNaN(num1)){
                alert("num1 should be numeric");
                return false;
            }
            if(isNaN(num2)){
               alert("num2 should be numeric");
               return false;
            }
            if(num1 == "" || num2 == ""){
                alert("fields cant be empty");
                return false;
            }
            
            alert("submitted sucesssfully");
            return true;
            
           }
        </script>    

    </head>

    <body style="text-align:center">

        <h2>SUM OF 2 Numbers</h2>

        <form method="post" onsubmit="return validate()" name="frm" action="<?php echo $_SERVER['PHP_SELF'] ?>">

            <label for="num1">ENTER THE NUMBER 1</label>
            <input type="text" name="num1"><br> <br>

            <label for="num2">ENTER THE NUMBER 2</label>
            <input type="text" name="num2"><br> <br>

            <input type="submit" name="submit">

        </form>
    </body>
</html>

  
<?php
  if(isset($_POST['submit'])){
     $num1=$_POST['num1'];
     $num2=$_POST['num2'];

     $sum=$num1+$num2;

     echo "<p> {$num1} +  {$num2}  = {$sum}</p>";

  }
?>