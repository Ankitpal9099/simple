<?php
include 'db.php'; // Include the database connection

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_POST['name'];
    $email = $_POST['email'];
    $password = password_hash($_POST['password'], PASSWORD_DEFAULT); // Hash the password
    $confirmPassword = $_POST['confirm_password']; // Get the confirm password

    // Check if passwords match
    if ($_POST['password'] === $confirmPassword) {
        // Prepare and bind
        $stmt = $conn->prepare("INSERT INTO users (name, email, password) VALUES (?, ?, ?)");
        $stmt->bind_param("sss", $name, $email, $password);

        // Execute the statement
        if ($stmt->execute()) {
            // Create a session to store the user's data
            session_start();
            $_SESSION["name"] = $name;
            $_SESSION["email"] = $email;

            // Redirect the user to the index page
            header("Location: login.html");
            exit;
        } else {
            // Display an error message if the query fails
            echo "Error: " . $stmt->error;
        }

        // Close the statement
        $stmt->close();
    } else {
        // Display an error message if the passwords don't match
        echo "Passwords don't match!";
    }
}

$conn->close();
?>
