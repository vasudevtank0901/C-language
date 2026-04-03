let qdata=[
    {
        'question':"1) 10 + 10",
        'opt':["1000","200","20","100"],
        'ans':3
    },
    {
        'question':"2) 20 - 10",
        'opt':["20","10","5","30"],
        'ans':2
    },
    {
        'question':"3) 10 * 10",
        'opt':["10","100","0","50"],
        'ans':2
    },
     {
        'question':"4) 100 / 2",
        'opt':["50","40","0","10"],
        'ans':1
    }
]

let que = document.getElementById("ques")
let opt = document.querySelectorAll(".opt")
let res = document.getElementById("res")

let qesnum = 0
let marks = 0 

function getques(){
    que.innerText = qdata[qesnum].question
    opt.forEach((btn,index)=>{
        btn.innerText = qdata[qesnum].opt[index]
    })
}

getques()

opt.forEach((btn,index)=>{
    btn.addEventListener("click",()=>{
        if(qdata[qesnum].ans==index+1){
            marks++
        }
        qesnum++;

        if(qesnum<qdata.length){
            getques()
        }
        else{
            res.innerText = `Your Total Marks Is :- ${marks}`
        }
    })
})