// 2.4 Write a typescript program which contains one arrow function named as
//     ChkArmstrong. That function accepts one numbers and check whether 
//     Armstrong number or not.
// Input : 153
// Output : It is Armstrong number.
function ChkArmstrong(num) {
    var rem;
    var no = num;
    var sum = 0;
    while (no > 0) {
        rem = no % 10;
        sum = sum + rem * rem * rem;
        no = Math.floor(no / 10);
    }
    if (sum == num) {
        return true; // if sum is same as given number then return true
    }
    else {
        return false; // if sum is not same as given number then return false
    }
}
var num = 153;
if (ChkArmstrong(num) == true) {
    console.log(num + " is a Armstrong number");
}
else {
    console.log(num + " is not a Armstrong number");
}
