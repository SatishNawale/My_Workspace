// 2.5 Write a typescript program which contains one function named ChkString. 
//     That function accept one string and check whether that string contains
//     "Marvellous" word or not.

// Input : "Pune Kothrud Marvellous Infosystems"
// Output : String contains Marvellous in it.


function ChkString(str : string, str1 : string) : boolean
{
    // split the given sentence into words and store them into array
    var Data : string[] = str.split(" ")

    return (Data.indexOf(str1) !==-1)
}


var sentence: string = "Pune Kothrud Marvellous Infosystems"
var word: string = "Marvellous"

var Result : boolean = ChkString(sentence,word)

if(Result == true)
{
    console.log(`String contains "${word}" in it.`)
}

else
{
    console.log(`String does not contains "${word}" in it.`)
}

/*

E:\Typescript\Assignment\Typescript_Assignment2>tsc Assignment2_5.ts

E:\Typescript\Assignment\Typescript_Assignment2>node Assignment2_5.js
String contains "Marvellous" in it.

E:\Typescript\Assignment\Typescript_Assignment2>

*/