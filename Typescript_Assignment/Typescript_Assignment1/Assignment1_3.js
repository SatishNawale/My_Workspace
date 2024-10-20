// 1.3 Write a typescript program which contains on efunction named as 
//     DisplayFactors. That funcion should accept one number and display
//     factors of that number.
// Input : 20
// Output : 1   2   4   5   10
function DisplayFactors(num) {
    var List = [];
    for (var i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            List.push(i);
        }
    }
    return List;
}
var No1 = 20;
var Factors = [];
Factors = DisplayFactors(No1);
console.log("Factors of " + No1 + " are : ");
console.log(Factors);
