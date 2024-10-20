// 1.2 Write a typescript program which contains one function named as Area.
//     That function should calculate area of circle. Accept value of radius
//     from user and return its area. Default value of PI should be 3.14 if 
//     it is not provided by the caller.

// Input : 5
// Output : Area of circle is 78.5

function Area(Radius : number, PI : number = 3.14) : number
{
    return PI*Radius*Radius
}

console.log("Area of Circle is "+Area(5))

/* 
E:\Typescript\Assignment\Typescript_Assignment1>tsc Assignment1_2.ts

E:\Typescript\Assignment\Typescript_Assignment1>node Assignment1_2.js
Area of Circle is 78.5

E:\Typescript\Assignment\Typescript_Assignment1>

*/