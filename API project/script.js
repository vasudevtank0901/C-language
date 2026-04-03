let container = document.getElementById("container")

// const fetchApi = async ()=>{
//     let response = await fetch("https://dummyjson.com/products")
//     let res = await response.json()

//     res.product.forEach((product)=>{
//         let div = document.createElement("div")
//         let p = document.createElement("p")
//         let img = document.createElement("img")
        
//         img.src = product.images[0]

//         div.setAttribute("class","product")

//         p.innerText = product.description

//         div.append(p)
//         div.append(img)

//         container.append(div)

//         console.log(product);
        
//     })
// }

// fetchApi()

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