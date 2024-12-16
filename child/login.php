<!-- this is the  session method for email is regstrion or not  -->
<!-- 
<?php
include 'db.php'; // Include the database connection

session_start(); // Start the session

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $email = $_POST['email'];
    $password = $_POST['password'];

    // Prepare and bind
    $stmt = $conn->prepare("SELECT password FROM users WHERE email = ?");
    $stmt->bind_param("s", $email);
    $stmt->execute();
    $stmt->store_result();
    
    if ($stmt->num_rows > 0) {
        $stmt->bind_result($hashed_password);
        $stmt->fetch();
        
        // Verify the password
        if (password_verify($password, $hashed_password)) {
            // Login successful
            $_SESSION['email'] = $email; // Store email in session
            header("Location: index.html"); // Redirect to a welcome page
            exit();
        } else {
            // Invalid password
            $_SESSION['error_message'] = "Invalid password.";
            header("Location: login.html"); // Redirect to login page
            exit();
        }
    } else {
        // Email not found
        $_SESSION['error_message'] = "Email not registered.";
        header("Location: login.html"); // Redirect to login page
        exit();
    }

    $stmt->close();
}
$conn->close();
?> -->









<!-- this is the window url error is show the method  -->
<?php
include 'db.php'; // Include the database connection

session_start(); // Start the session

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $email = $_POST['email'];
    $password = $_POST['password'];

    // Prepare and bind
    $stmt = $conn->prepare("SELECT password FROM users WHERE email = ?");
    $stmt->bind_param("s", $email);
    $stmt->execute();
    $stmt->store_result();
    
    if ($stmt->num_rows > 0) {
        $stmt->bind_result($hashed_password);
        $stmt->fetch();
        
        // Verify the password
        if (password_verify($password, $hashed_password)) {
            // Login successful
            $_SESSION['email'] = $email; // Store email in session
            header("Location: index.html"); // Redirect to a welcome page
            exit();
        } else {
            // Invalid password
            $_SESSION['error_message'] = "Invalid password.";
            header("Location: login.html"); // Redirect to login page
            exit();
        }
    } else {
        // Email not found
        echo "<script>alert('Email not registered.'); window.location.href='login.html';</script>";
        exit();
    }

    $stmt->close();
}
$conn->close();
?>