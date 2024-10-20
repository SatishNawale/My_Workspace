
function Maximum(No1 : number, No2 : number, No3 : number):number
{
    if(No1>No2)
    {
        if(No1>No3)
        {
            return No1
        }
        else
        {
            return No3
        }
    }
    else
    {
        if(No2>No3)
        {
            return No2
        }
        else
        {
            return No3
        }
    }
}

var Max = Maximum(23, 89, 6)
console.log("Maximum number is "+Max)

/*

E:\Typescript\Assignment\Typescript_Assignment1>tsc Assignment1_1.ts

E:\Typescript\Assignment\Typescript_Assignment1>node Assignment1_1.js
Maximum number is 89

E:\Typescript\Assignment\Typescript_Assignment1>

*/