// 2.5 Write a typescript program which contains one function named ChkString. 
//     That function accept one string and check whether that string contains
//     "Marvellous" word or not.
// Input : "Pune Kothrud Marvellous Infosystems"
// Output : String contains Marvellous in it.
function ChkString(str, str1) {
    // split the given sentence into words and store them into array
    var Data = str.split(" ");
    return (Data.indexOf(str1) !== -1);
}
var sentence = "Pune Kothrud Marvellous Infosystems";
var word = "Marvellous";
var Result = ChkString(sentence, word);
if (Result == true) {
    console.log("String contains \"".concat(word, "\" in it."));
}
else {
    console.log("String does not contains \"".concat(word, "\" in it."));
}
