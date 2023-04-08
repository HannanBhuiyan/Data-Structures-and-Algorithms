
function BinarySearch(arr){
     while(left <= right) {
          let middle = Math.floor((left + right) / 2)
          if(arr[middle] === item){
               return middle;
          }else if(arr[middle] < item) {
               left = middle + 1
          }
          else {
               right = middle - 1;
          }
     }
     return -1;
}


let arr = [2, 3, 4, 10, 40]
let left = 0;
let right = arr.length
let item = 10
let result = BinarySearch(arr)
if(result === -1) {
     console.log("Item not found ")
}
else {
     console.log(`Item found at index ${result}`)
}