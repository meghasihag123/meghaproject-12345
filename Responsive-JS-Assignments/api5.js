let b1 = document.getElementById('B1');
b1.style.cursor = "pointer";

b1.addEventListener('click', function () {
    let xhttp = new XMLHttpRequest();
    console.log(xhttp.readyState); // Readystate = 0
    xhttp.open('get', 'https://fakestoreapi.com/products/category/jewelery', true);
    console.log(xhttp.readyState); // Readystate = 1

    xhttp.onreadystatechange = function () {
        if (this.readyState === 4 && xhttp.status === 200) {
            console.log(xhttp.responseText); // Data Will shown

            let data = JSON.parse(xhttp.responseText);
            console.log(data);

            // Create table once
            // let t1 = document.createElement('table');
            // t1.style.border = '2px solid blue';
            // t1.style.borderCollapse = 'collapse';

            // Get reference to existing table
            let table = document.querySelector("table");

            // Loop through products
            for (let x in data) {
                let { id, price, image } = data[x];

                let row = document.createElement('tr');

                let d1 = document.createElement('td');
                d1.textContent = id;
                d1.style.border = '2px solid blue';
                // d1.style.padding = '5px';

                let d2 = document.createElement('td');
                d2.textContent = `$${price}`;
                d2.style.border = '2px solid blue';
                // d2.style.padding = '5px';

                let d3 = document.createElement('td');
                d3.style.border = '2px solid blue';
                // d3.style.padding = '5px';

                let img = document.createElement('img');
                img.src = image;
                img.width = 70;
                img.height = 70;
                d3.appendChild(img);

                row.appendChild(d1);
                row.appendChild(d2);
                row.appendChild(d3);

                // t1.appendChild(row);
                // Append table to body
                // document.body.appendChild(t1);

                // Append row to existing table
                table.appendChild(row);
            }
        }

    }
    xhttp.send();
});