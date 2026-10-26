//  Clock
function startTime() {
  const today = new Date();
  let h = today.getHours();
  let m = today.getMinutes();
  let s = today.getSeconds();

  m = checkTime(m);
  s = checkTime(s);

  document.getElementById("demo").innerHTML = h + ":" + m + ":" + s;
  setTimeout(startTime, 1000); // update every second
}

function checkTime(i) {
  return i < 10 ? "0" + i : i;
}

document.addEventListener("DOMContentLoaded", () => {
  fetch("https://fakestoreapi.com/products/category/jewelery")
    .then(res => res.json())
    .then(data => {
      const table = document.getElementById("productTable");
      
      data.forEach(item => {
        const row = document.createElement("tr");

        const idCell = document.createElement("td");
        idCell.textContent = item.id;

        const priceCell = document.createElement("td");
        priceCell.textContent = item.price;

        const imgCell = document.createElement("td");
        const img = document.createElement("img");
        img.src = item.image;
        // img.width = 70;
        // img.height = 70;
        imgCell.appendChild(img);

        row.append(idCell, priceCell, imgCell);
        table.appendChild(row);
      });
    })
    .catch(err => console.error("Fetch error:", err));
});































































