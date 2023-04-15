//C type comments

//semicolons are optional but recomended
//  there are three ways to declare variables
//var declares a regular variable as in c
var a;
//let declares a variable specific to the block (curly brackets)
let b;
//const declares a constant
const c = 1;

/*  data types:
        -undefined
        -null
        -Number
        -BigInt
        -Boolean
        -String
        -Symbol
        -Object
    undefined is the default datatype of uninitialized variables and is what returned when a function doesn't have a return statement.
    all numbers are 64bit (8-Byte) floating point.
    BigInts is used for larger integer values and is distinguished by appending an 'n' to the number.
    strings can be changed and edited. a single character can be read using its indext str[0] but can't be edited.
    Symbols are unique variables so comparing two symbols will always result in false.
    eache data type has it's own constructor (called factory function)
*/

//function
function func(a, b){
    //printing onto the console
    console.log(a, b);
    console.log("this is a function");
    return "end of function";
}
//a function call inside a function call (func and log)
console.log(func(1, 2));


