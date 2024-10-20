// 2.2 Write a typescript program which contains on function names as Summation.
//     That function accepts array of numbers and returns the summation of each
//     number from array.

// Input : 23 6 7 4 5 7
// Output : Addition is 52

function Addition(Data : number[]) : number
{
    var sum : number = 0
    for(var i = 0; i<Data.length; i++)
    {
        sum = sum + Data[i]
    }
    return sum
}

var Data : number[] = new Array()
Data = [23, 6, 7, 4, 5, 7]
console.log("Addition is "+Addition(Data))

/*

E:\Typescript\Assignment\Typescript_Assignment2>tsc Assignment2_2.ts

E:\Typescript\Assignment\Typescript_Assignment2>node Assignment2_2.js
Addition is 52

*/