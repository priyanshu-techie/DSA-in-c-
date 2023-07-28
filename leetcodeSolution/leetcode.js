let abc={}

let arr=
[-30,34,1,32,26,-9,-30,22,-49,29,48,47,38,4,43,12,-1,-8,11,-37,32,40,9,15,-34,-34,-16,-5,26,-44,-36,-13,-16,10,39,-17,-22,17,-16];
// make the hash map
arr.forEach(e=>{
    e=Number(e);
    if(e>0){
        if(abc[e]==undefined){
            abc[e]={
                pve:1,
                nve:0
            };
        }
        else{
            abc[e]['pve']++;
        }
    }
    else{
        let positive=Math.abs(e);
        if(abc[positive]==undefined){
            abc[positive]={
                pve:0,
                nve:1
            }
        }
        else{
            abc[positive]['nve']++;
        }
    }
})

let bothArr=[];
// finding elems which has both +ve and -ve
for(key in abc){
    if(abc[key]['pve']>0&&abc[key]['nve']>0){
        bothArr.push(key);
    }
}
let big=0;
bothArr.forEach(e=>{
    if(Number(e)>big) big= Number(e);
})
console.log(big);