// 2.2 Write a typescript program which contains on function names as Summation.
//     That function accepts array of numbers and returns the summation of each
//     number from array.
// Input : 23 6 7 4 5 7
// Output : Addition is 52
function Addition(Data) {
    var sum = 0;
    for (var i = 0; i < Data.length; i++) {
        sum = sum + Data[i];
    }
    return sum;
}
var Data = new Array();
Data = [23, 6, 7, 4, 5, 7];
console.log("Addition is " + Addition(Data));
