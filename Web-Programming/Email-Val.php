<html>
    <head>
        <title>EMAIL-VALIDATION</title>

        <script>
           function validate()
           {
            var email = document.forms["frm"]["email"].value;

             // Regex 1

            //var mailformat = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/; 
            
            var mailformat=/^[\w.-]+@[\w.-]+\.[a-zA-z]{2,}$/;

            //  Regex 2
            //var mailformat = /^[\w.-]+@[\w.-]+\.[a-zA-Z]{2,}$/;
            
            
            if(email == ""){
                alert("field cannot be empty");
                return false;
            }
            if(!(email.match(mailformat))){
                alert("Enter a valid email");
                return false;
            }
            
            alert("submitted successfully");
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

  
/* 
-------------------------------
**Regex Comparison:**

### Regex 1:
`/^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/`
- **Explanation:** 
  - Matches basic email patterns but restricts the domain to only 2-3 characters (e.g., `.com`, `.org`).
  - Allows optional dots and hyphens before the `@` symbol and in the domain.

### Regex 2:
`/^[\w.-]+@[\w.-]+\.[a-zA-Z]{2,}$/`
- **Explanation:** 
  - Matches emails with words, dots, and hyphens both before and after the `@`.
  - Accepts any top-level domain (TLD) with at least 2 characters (e.g., `.com`, `.co.uk`).

### Test Cases:

#### **Test Cases that Pass Both Regexes**:
- **test.email@example.com** ✔️ (Valid for both)
- **user.name123@domain.co** ✔️ (Valid for both)
- **test-email@sub.domain.co** ✔️ (Valid for both)
- **test.email123@sub-domain.co** ✔️ (Valid for both)
- **test_123+abc@domain.com** ✔️ (Valid for both)
- **akdherit@gmail.com** ✔️ (Valid for both)

#### **Test Cases that Pass Only the First Regex (Fails Second)**:
- **test.email123@sub-domain.co.uk** ❌ (Fails second regex: Domain `.co.uk` has 4 characters)
- **user-name123@sub.domain.org** ❌ (Fails second regex: Domain `.org` is valid, but TLD length constraint in regex 1 is stricter)

#### **Test Cases that Pass Only the Second Regex (Fails First)**:
- **user.name123+abc@gmail.com** ✔️ (Valid for second regex, but the `+` sign isn't allowed by the first regex)
- **first.last@example.co.uk** ✔️ (Valid for second regex, but the `.co.uk` domain fails the first regex due to the length restriction)
- **chn24mc098@ceconline.edu** ✔️ (Valid for second regex, but fails the first regex due to longer domain)


### Some Other Regex Variants:

1. `var mailformat = /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;`
   - **Explanation:** Accepts letters, numbers, and common symbols like `+`, `%`, and `-` in both the local part (before `@`) and domain.

2. `var mailformat = /^[a-zA-Z0-9]+@[a-zA-Z0-9]+\.[a-zA-Z]{2,3}$/;`
   - **Explanation:** Strictly limits both the local part and domain to only letters and numbers, with a TLD of 2-3 characters.

3. `var mailformat = /^[a-zA-Z0-9.-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,3}$/;`
   - **Explanation:** Allows dots and hyphens in both the local part and domain, with a TLD of 2-3 characters.

4. `var mailformat = /^[\w]+@[\w]+\.[a-zA-Z]{2,}$/;`
   - **Explanation:** Similar to Regex 2, but stricter on the domain. It only allows letters and numbers in the domain name.

*/

?>
