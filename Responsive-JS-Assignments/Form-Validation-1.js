function data() {
    let a = document.getElementById("n1").value.trim();
    let b = document.getElementById("n2").value.trim();
    let c = document.getElementById("n3").value.trim();
    let d = document.getElementById("n4").value.trim();

    // Check empty fields
    if (a === "" || b === "" || c === "" || d === "") {
        alert("All fields are mandatory");
        return false;
    }

    // Contact number validation
    if (b.length !== 10 || isNaN(b)) {
        alert("Number must be exactly 10 digits and only numbers allowed");
        return false;
    }

    // Password length validation
    if (c.length < 5) {
        alert("Password must be at least 5 characters long");
        return false;
    }

    // Confirm password length validation
    if (d.length < 5) {
        alert("Confirm password must be at least 5 characters long");
        return false;
    }

    // Password match validation
    if (c !== d) {
        alert("Passwords do not match");
        return false;
    }

    // If everything is valid
    return true;
}

