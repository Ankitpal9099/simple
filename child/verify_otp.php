<?php
session_start();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $entered_otp = $_POST['otp'];

    // Check if the entered OTP matches the generated OTP
    if ($entered_otp == $_SESSION['otp']) {
        // OTP is correct, proceed with the registration
        echo "OTP verified successfully!";
        // You can redirect to a success page or log the user in
        header("Location: login.html");
        exit;
    } else {
        echo "Invalid OTP. Please try again.";
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Verify OTP</title>
</head>
<body>
    <form method="POST" action="">
        <label for="otp">Enter OTP:</label>
        <input type="text" name="otp" required>
        <button type="submit">Verify</button>
    </form>
</body>
</html>