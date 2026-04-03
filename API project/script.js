let container = document.getElementById("container")

async function getProducts() {
    let response = await fetch("https://dummyjson.com/products")
    let res = await response.json()

    let container = document.getElementById("container");

    res.products.forEach(product => {
        let card = `
        <div class="card" style="width: 18rem; padding: 15px">
                <img src="${product.images[0]}" class="card-img-top" alt="...">
                    <h5 class="card-title">${product.title.slice(0, 40)}</h5>
                    <p class="card-text">₹${product.price}</p>
                    <a href="#" class="btn btn-primary">ADD TO CART</a>
  </div>

        `;
        container.innerHTML += card;
    });
}

getProducts();
