// 1.4 Write a typescript program which contains one function named as ChkPrime.
//     That function should accept one number and it should return true if the
//     given number is prime and otherwise return false.
// Input : 11
// Output : It is prime number
function ChkPrime(num) {
    var flag = true;
    for (var i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = false;
        }
    }
    return flag;
}
if (ChkPrime(11) == true) {
    console.log("It is prime number.");
}
else {
    console.log("It is not prime number.");
}
