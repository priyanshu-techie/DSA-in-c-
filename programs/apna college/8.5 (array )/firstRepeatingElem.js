function minIndexOfFirstRepeatingElem(nums){
    // LOGIC :
    // 1. loop through the elems and create an objcet
    // 2. if elem already exist in the obj then push the value to an arrya
    // 3. the array will have the elems which have repeated 
    // 4. now loop through the made array and find the elem which has minimum index
    // 5. return the minimum index. Most  probably i guess it would be the first elem of the made array
    if(nums.length<=1) return -1;
    let traker={};
    let ansArr=[];
    nums.forEach((e)=>{
        if(traker[e]===undefined){
            traker[e]=1;
        }
        else{
            ansArr.push(e);
        }
    })
    let min= nums.indexOf(ansArr[0]);
    ansArr.forEach(e=>{
        if(nums.indexOf(e)<min)
            min=nums.indexOf(e);
    })
    return min;
}

let arr=[1,7,3,4,3,5,6,4,5];

console.log(minIndexOfFirstRepeatingElem(arr));