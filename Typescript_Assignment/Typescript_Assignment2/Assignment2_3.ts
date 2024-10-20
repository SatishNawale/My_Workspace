// 2.3 Write a typescript program which contains one function named as maximum.
//     That function accepts array of numbers and returns the second largest
//     number from array.

// Input : 23 89 6 29 56 45 77 32
// Output : Second Maximum number is 77.

function MaxiMum(Data : number[]) : number
{
    var max : number = Data[0]
    var smax : number = Data[0]
    
    for(var i = 0; i<Data.length; i++)
    {
        if(max<=Data[i])
        {
            smax = max
            max = Data[i]
        }
        else if(smax<=Data[i] && smax!=max)
        {
            smax = Data[i]
        }
    }
    return smax
}

var Data : number[] = new Array()
Data = [23, 89, 6, 29, 56, 77, 32]

console.log("Second Maximum number is :"+MaxiMum(Data))