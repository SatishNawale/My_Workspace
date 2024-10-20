// 2.4 Write a typescript program which contains one arrow function named as
//     ChkArmstrong. That function accepts one numbers and check whether 
//     Armstrong number or not.

// Input : 153
// Output : It is Armstrong number.

function ChkArmstrong(num : number) : boolean
{
    var rem : number
    var no : number = num
    var sum : number = 0

    while(no>0)
    {
        rem = no%10
        sum = sum + rem*rem*rem
        no = Math.floor(no/10)
    }

    if(sum == num)
    {
        return true     // if sum is same as given number then return true
    }
    else
    {
        return false    // if sum is not same as given number then return false
    }
}

var num : number = 153

if(ChkArmstrong(num)==true)
{
    console.log(num+" is a Armstrong number")
}
else
{
    console.log(num+" is not a Armstrong number")
}

/*

E:\Typescript\Assignment\Typescript_Assignment2>tsc Assignment2_4.ts

E:\Typescript\Assignment\Typescript_Assignment2>node Assignment2_4.js
153 is a Armstrong number

E:\Typescript\Assignment\Typescript_Assignment2>

*/