/*let b1 = document.getElementById('B1');
b1.addEventListener('click', function () {
    let xhttp = new XMLHttpRequest();
    // ReadyState Values(0,1,2,3,4)
    console.log(xhttp.readyState); // 0 (Request not initialized)
    xhttp.open("get", 'https://fakestoreapi.com/products', true); // true=Asynchronous
    console.log(xhttp.readyState); // 1 (Server connection established)

    xhttp.onreadystatechange = function () {
        if (this.readyState === 2) {
            console.log('Request received by server');
        }
        if (this.readyState == 3) {
            console.log('Processing request;Partial data received');

        }
        if (this.readyState === 4) {
            console.log('Request finished and Response is ready')

        }
    }
    xhttp.send();
})*/

// STATUS CODE (200)
/*let b1 = document.getElementById('B1');
b1.addEventListener('click', function () {
    // The older XMLHttpRequest method can also be used to get the status code.
    //  Using XMLHttpRequest
    let xhttp = new XMLHttpRequest();
    // ReadyState Values(0,1,2,3,4)
    console.log(xhttp.readyState); // 0 (Request not initialized)
    xhttp.open("get", 'https://fakestoreapi.com/products', true); // true=Asynchronous
    console.log(xhttp.readyState); // 1 (Server connection established)

    xhttp.onload = function () {
        console.log('Status code:', this.status);
        if (this.status === 200) {
            console.log('Response:', this.responseText);

        } else {
            console.error('HTTP  Error', this.status);
        }
    }
    this.onerror = () => {
        console.log('Request Failed');
    }
    xhttp.send();
})*/

// Start
let b1 = document.getElementById('B1');
b1.style.cursor = "pointer";

b1.addEventListener('click', function () {
    let xhttp = new XMLHttpRequest();
    // ReadyState Values(0,1,2,3,4)
    // console.log(xhttp.readyState); // 0 (Request not initialized)
    xhttp.open("get", 'https://fakestoreapi.com/products', true); // true=Asynchronous
    // console.log(xhttp.readyState); // 1 (Server connection established)

    xhttp.onreadystatechange = function () {
        if (this.readyState === 4 && this.status === 200) {
            // console.log(this.responseText); // DATA IN JSON FORMAT

            // CONVERT TO OBJECT FORMAT(JSON.parse() function)
            let data = JSON.parse(this.responseText);
            // console.log(data);

            // Get reference to existing table
            let table = document.getElementById("productTable");

            // Data in OBJECT format(Loop through products)
            for (let i in data) {
                // console.log(data[i]);
                // unstructure data
                let { id, price, category } = data[i];

                // Create a new row
                let row = document.createElement('tr');

                // Create cells
                let d1 = document.createElement('td');
                d1.textContent = id;

                let d2 = document.createElement('td');
                d2.textContent = price;

                let d3 = document.createElement('td');
                d3.textContent = category;

                row.append(d1);
                row.append(d2);
                row.append(d3);

                // Append row to table
                table.appendChild(row);

            }
        }
    }
    xhttp.send();
})
