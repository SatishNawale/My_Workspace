// 1.5 Write a typescript program which contains one function named as Fibonacci.
//     That function accept one number from user and print Fibonacci series till 
//     that number.
// Input : 21
// Output : 1   1   2   3   5   8   13  21
function Fibonacci(num) {
    var list = [];
    var no1 = 0;
    var no2 = 1;
    var no3 = 0;
    while (no3 <= num) {
        list.push(no2);
        no3 = no1 + no2;
        no1 = no2;
        no2 = no3;
    }
    return list;
}
console.log("Fibonacci Series is : ");
console.log(Fibonacci(21));
