let sentence = "hello this is priyanshu agrawal and i love programming."

let words = sentence.split(' ');
let max=0, ans;

words.forEach((e,i)=>{
    if(e.length>max) {max= e.length; ans =i;}
})

console.log("the answer is : "+ words[ans]);
