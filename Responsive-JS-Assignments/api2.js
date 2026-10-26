let b1 = document.getElementById("B1");
b1.addEventListener("click", function () {
    // READYSTATE VALUES(0,1,2,3,4)
    var xhttp = new XMLHttpRequest();
    console.log(xhttp.readyState); // 0 (unsent)
    xhttp.open("GET", 'https://fakestoreapi.com/products/category/jewelery', true)
    console.log(xhttp.readyState)  // 1 (opened/request ready to be sent)

    xhttp.onreadystatechange = function () {
        // Data in JSON FORMAt
        if (this.readyState == 4 && this.status == 200) {
            console.log("response", this.responseText);
            let data = JSON.parse(this.responseText);
            console.log(data);

            // DAta in Object Format
            for (let key in data) {
                console.log(data[key]);
                // console.log(typeof key);
                // Unstructure the Data (fetch key and values from all data that we want ,not all data)
                let { title, price, image } = data[key]

                // Create table
                let t1 = document.createElement('table');
                t1.style.border = '1';
                t1.style.bordercollapse = 'collapse';


                let row = document.createElement('tr');

                let d1 = document.createElement('td');
                d1.innerHTML = price;
                d1.border = '2px solid black';
                d1.paddding = '10px'

                let d2 = document.createElement('td');
                d2.innerHTML = title;
                d2.border = '2px solid black';
                d2.paddding = '10px'

                let d3 = document.createElement('td');
                d3.border = '2px solid black';
                d3.paddding = '10px';

                let img = document.createElement('img');
                img.src = image;
                img.height = 70;
                img.width = 70;
                d3.append(img);

                row.append(d1);
                row.append(d2);
                row.append(d3);

                // Append row into TABLE
                t1.append(row);
                // Apeend table to body
                document.body.append(t1);
            }
        }


    }
    xhttp.send();
})