// 1.5 Write a typescript program which contains one function named as Fibonacci.
//     That function accept number from user and print Fibonacci series 
//     till that number.

// Input : 21
// Output : 1   1   2   3   5   8   13  21

function Fibonacci(num : number) : number[]
{
    var list : number[] = []
    var no1 = 0
    var no2 = 1
    var no3 : number = 0
    while(no3<=num)
    {
        list.push(no2)
        no3 = no1 + no2
        no1 = no2
        no2 = no3
    }
    return list
}

console.log("Fibonacci Series is : ")
console.log(Fibonacci(21))

/*

E:\Typescript\Assignment\Typescript_Assignment1>tsc Assignment1_5.ts

E:\Typescript\Assignment\Typescript_Assignment1>node Assignment1_5.js
Fibonacci Series is :
[
  1, 1,  2,  3,
  5, 8, 13, 21
]

E:\Typescript\Assignment\Typescript_Assignment1>

*/