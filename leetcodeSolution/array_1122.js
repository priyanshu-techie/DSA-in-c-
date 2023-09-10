var relativeSortArray = function(arr1, arr2) {
    let traker={};
      arr1.forEach((e)=>{
          if(traker[e]===undefined){
              traker[e]=1;
          }
          else{
            console.log("entered here");
              traker[e]++;
          }
      })

      console.log(traker);
      let answer=[];
      let tempArr=[];
      arr2.forEach(e=>{
          for(let i =0;i<traker[e];i++){
              answer.push(e);
          }
          traker[e]=0;
      })
      for(key in traker){
          if(traker[key]!==0){
            for(let i =0;i<traker[key];i++)
                tempArr.push(key);
          }
      }
      tempArr.sort((a, b)=> { return a - b });
      tempArr.forEach(e=>{
        
          answer.push(e);
      })
      return answer;
  };

  let arr1=[2,21,43,38,0,42,33,7,24,13,12,27,12,24,5,23,29,48,30,31]
  let arr2=[2,42,38,0,43,21]

  console.log(relativeSortArray(arr1,arr2));