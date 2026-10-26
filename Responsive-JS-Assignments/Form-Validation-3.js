let form = document.getElementById('registerForm');
let photoInput = document.getElementById('photo');
let preview = document.getElementById('preview');

// Photo preview listener (runs when user selects a file)
photoInput.addEventListener('change', function() {
    let file = this.files[0];   // <-- use files[0]
    if (file) {
        const reader = new FileReader();
        reader.onload = function(e) {
            preview.src = e.target.result;
            preview.style.display = "block";
        }
        reader.readAsDataURL(file);
    }
});

// Form validation listener (runs when user clicks submit)
form.addEventListener('submit', (e) => {
    e.preventDefault();

    // Validation Code
    let name = document.getElementById("name").value.trim();
    let email = document.getElementById("email").value.trim();
    let password = document.getElementById("password").value.trim();
    let phone = document.getElementById("phone").value.trim();
    let age = document.getElementById("age").value.trim();
    let photo = photoInput.files[0];

    let errors = [];

    // Name validation
    if (name.length < 3) {
        errors.push("Name must be at least 3 characters long.");
    }

    // Email validation
    let emailPattern = /^[^ ]+@[^ ]+\.[a-z]{2,3}$/;
    if (!email.match(emailPattern)) {
        errors.push('Please enter a valid email address.');
    }

    // Password validation
    if (password.length < 6) {
        errors.push("Password must be at least 6 characters long.");
    }

    // Phone validation (10 digits)
    let phonePattern = /^[0-9]{10}$/;
    if (!phone.match(phonePattern)) {
        errors.push("Phone number must be exactly 10 digits.");
    }

    // Age validation
    if (age < 18 || age > 100) {
        errors.push("Age must be between 18 and 100.");
    }

    // Photo validation
    if (!photo) {
        errors.push("Please upload a photo.");
    }

    // Show results
    if (errors.length > 0) {
        alert(errors.join('\n'));
    } else {
        alert("Form submitted successfully!");
    }
});

