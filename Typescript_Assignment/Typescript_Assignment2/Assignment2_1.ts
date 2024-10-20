// 2.1 Write a typescript program which contains one funciotn named as Maximum.
//     That function accepts array of numbers andd returns the largest number from array

// Input : 23 89 6 29 56 45 77 32
// Output : Maximum number is 89

function MaxiMum(list : number[]) : number
{
    var temp : number = list[0]
    for(var i = 0; i<list.length; i++)
    {
        if(temp < list[i])
        {
            temp = list[i]
        }
    }
    return temp
}

var Data : number[] = new Array()
Data = [23, 89, 6, 29, 56, 45, 77, 32]

console.log("Maximum number is "+MaxiMum(Data))

/*

E:\Typescript\Assignment\Typescript_Assignment2>tsc Assignment2_1.ts

E:\Typescript\Assignment\Typescript_Assignment2>node Assignment2_1.js
Maximum number is 89

*/