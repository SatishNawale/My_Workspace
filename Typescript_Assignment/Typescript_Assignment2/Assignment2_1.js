// 2.1 Write a typescript program which contains one funciotn named as Maximum.
//     That function accepts array of numbers andd returns the largest number from array
// Input : 23 89 6 29 56 45 77 32
// Output : Maximum number is 89
function Maximum(list) {
    var temp = list[0];
    for (var i = 0; i < list.length; i++) {
        if (temp < list[i]) {
            temp = list[i];
        }
    }
    return temp;
}
var Data = new Array();
Data = [23, 89, 6, 29, 56, 45, 77, 32];
console.log("Maximum number is " + Maximum(Data));
