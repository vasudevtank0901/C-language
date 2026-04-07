let products = JSON.parse(localStorage.getItem("Products")) || []

let container = document.getElementById("container")
let cartContainer = document.getElementById("cartContainer")

const fetchProducts = async () => {
    let response = await fetch("https://dummyjson.com/products")
    let res = await response.json()

    localStorage.setItem("Products", JSON.stringify(res.products))

    let pro = res.products

    pro.forEach((item) => {
        let div = document.createElement("div")
        div.innerHTML = `<div class="card" style="width: 18rem; margin:20px;">
                        <img src=${item.images[0]} class="card-img-top" alt="...">
                        <div class="card-body">
                        <h5 class="card-title">${item.description}</h5>
                        <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card’s content.</p>
                        <button href="#" data-id=${item.id} class="btn btn-primary cartBtn">Add To Cart</button>
                    </div>
                    </div>`
        container.append(div)
    })
}

const fetchCartProducts = async () => {
   
    let pro = JSON.parse(localStorage.getItem("CartData"))
    pro.forEach((item) => {
        let div = document.createElement("div")
        div.innerHTML = `<div class="card" style="width: 18rem; margin:20px;">
                        <img src=${item.images[0]} class="card-img-top" alt="...">
                        <div class="card-body">
                        <h5 class="card-title">${item.description}</h5>
                        <p class="card-text">Some quick example text to build on the card title and make up the bulk of the card’s content.</p>
                        <button href="#" data-id=${item.id} class="btn btn-primary cartBtn">Add To Cart</button>
                    </div>
                    </div>`
        cartContainer.append(div)
    })
}

fetchProducts()
fetchCartProducts()



setTimeout(()=>{
    let cartBtn = document.querySelectorAll(".cartBtn")
    cartBtn.forEach((btn)=>{
        btn.addEventListener("click",()=>{
            let id = btn.getAttribute("data-id")
            let onePro = products.find((item)=> item.id == id)
            
            let cartData = JSON.parse(localStorage.getItem("CartData")) || []
            cartData.push(onePro)

            localStorage.setItem("CartData",JSON.stringify(cartData))

        })
    })
},2000)
