<html>
    <head>
        <title>EMAIL-VALIDATION</title>

        <script>
           function validate()
           {
            var email = document.forms["frm"]["email"].value;

            /*var mailformat = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;

            var mailformat = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;

            var mailformat = /^[a-zA-Z0-9]+@[a-zA-Z0-9]+\.[a-zA-Z]{2,3}$/; 
            
            var mailformat = /^[a-zA-Z0-9.-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,3}$/;   

            var mailformat = /^[\w]+@[\w]+\.[a-zA-Z]{2,}$/; */
            
            var mailformat = /^[\w.-]+@[\w.-]+\.[a-zA-Z]{2,}$/;
            
            
            if(email == ""){
                alert("fields cant be empty");
                return false;
            }
            if(!(email.match(mailformat))){
                alert("Enter a valid email");
                return false;
            }
            
            alert("submitted sucesssfully");
            return true;
            
           }
        </script>    

    </head>

    <body style="text-align:center">

        <h2>EMAIL-VALIDATION</h2>

        <form method="post" onsubmit="return validate()" name="frm" action="<?php echo $_SERVER['PHP_SELF'] ?>">

            ENTER EMAIL <br>
            <input type="text" name="email"><br> <br>

            <input type="submit" name="submit">

        </form>
    </body>
</html>

  
<?php
  if(isset($_POST['submit'])){
     $email=$_POST['email'];
     
     echo "<p>EMAIL: {$email}</p>";

  }
?>