// 1.3 Write a typescript program which contains on efunction named as 
//     DisplayFactors. That funcion should accept one number and display
//     factors of that number.

// Input : 20
// Output : 1   2   4   5   10

function DisplayFactors(num : number) : number[]
{
    var List : number [] = [];
    for(var i = 1; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            List.push(i);
        }
    }

    return List
}
var No1 : number = 20
var Factors : number[] = []
Factors = DisplayFactors(No1)
console.log("Factors of "+No1+" are : ")
console.log(Factors)


/*

E:\Typescript\Assignment\Typescript_Assignment1>tsc Assignment1_3.ts

E:\Typescript\Assignment\Typescript_Assignment1>node Assignment1_3.js
Factors of 20 are :
[ 1, 2, 4, 5, 10 ]

E:\Typescript\Assignment\Typescript_Assignment1>

*/