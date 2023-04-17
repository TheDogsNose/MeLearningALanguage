//C type comments

//semicolons are optional but recomended
//  there are three ways to declare variables
//var declares a regular variable as in c
var a = "a";
//let declares a variable specific to the block (curly brackets)
let b = "b";
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
/*  operations;
        ++, --., -, +                           as in c both post and pre
        +, -, *, /, %, **                       regular operations (** is power and % is remainder)
        =, +=, -=, *=, /=, %=, **=              assignment
        ==, !=, ===, !==, <, >, <=, >=          comparing operations (== checks if they are equal while === checks if they are equal and are of the same type/point to the same object)
        !, &&, ||                               boolean operations
        typeof (returns the type), instanceof (returns weither an object is an instance of an object type or was created using a certain constructor)
        &, |, ~, ^, <<, >>, >>>                 bitwise operations (>>> is for unsigned right shift)
        (condition)?(do this):(else do this)    teranery operations
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//if else
    if (a < b){
        console.log(a);
    }else if (a > b){
        console.log(b);
    }else {
        console.log(a, b);
    }
//switch statement
switch(a){
    case "a":
        console.log("a");
        break;
    case "b":
        console.log("b");
        break;
    default:
        console.log("something else");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//for loop
    for (var i; i < 10; i++){
        if (i%2==1){
            //goes to the next iteration skipping the rest of the block
            continue;
        }
        console.log(i);
    }
//while loop
    while (true){
        if (true){
            //exists the loop entirly breaking it
            break;
        }
    }
//do while loop
    do{
        console.log("LOOPS!");
    }while(false)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//function // functions (and sometimes variables) can be used before their declaration in a process called hoisting where the interpreter moves the defination above the usage before executing the script
function func(a, b){
    //printing onto the console
    console.log(a, b);
    console.log("this is a function");
    //returning the value
    return "End of function func";
}
//a function call inside a function call (func and log)
console.log(func(1, 2));
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//objects in js are a type of variables
student = {
    //object property name and value note that the property name can be a regular name or a string or a number but then you will need to use the brackets method to access it not the dot method
    name: "John",
    gpa: 3.1,
    dateOfBirth: {
        day: 1, monthe: 1, year: 2001
    },
    age: 20,
    //methods can be defined using a function expression inside a constructor or object definition
    calculateAge: function(){
        this.age = 2023 - this.dateOfBirth.year;
    }
};
//calling a method, now age = 22
student.calculateAge();

//proprties can be accessed by two ways:
student.name = student['name'];

//to create a template or structure we may use a constructor function;
function createStudent (name, gpa, dob, age){
    this.name = name;
    this.gpa = gpa;
    this.dateOfBirth = dob;
    this.age = age;
    this.calculateAge = function(){
        this.age = 2023 - this.dateOfBirth.year;
    }

}
//the new keyword is used to return a new instance of the created object
anotherStudent = new createStudent("Max", 2.2, {day: 12, month: 3, year:2019}, 4);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//arrays are a special type of objects
//there are two ways to create an array but note that passing a single value in the new + constructor methos will resault in an array with a number of elements = value instead of a single element whose value = value
const arr = new Array(1,2,3,4,5);
const arr2 = [1,2,3,4,5]
//arrays are dynamic and meaning you can add items at runtime without any issues or special functions
//note that a const array or object doesn't mean it doesn't change it means the refrence of pointer is constant meaning you can't assign the variable to other objects but editing the object is possible
//arrays can have multiple data types and can include anything from arrays to functions to object
/*      arrays have built in propertis and methods like:
    arr.length -- the length of the array
    arr.sorth(function comp(a,b){return -1 to sort a before b, 1 for opposite, and 0 for no change}) -- sorts the array alphabetically not numeracally also can take a compare function as an arguement
    arr.reverse()
    arr.forEach(func) -- calls the function func for each element in the array passing its (value, index, arr) as parameters
    arr.map(func) -- returns a new array by pereforming func on each element also (value, index, arr)
    arr.filter(func) -- returns a new array with elements that return true in func (value, index, arr)
    arr.reduce(func, initial) -- returns a single value after pereforing func on each element that value is the one passed as x in func and intializes as initial (x, value, index, arr)
    arr.reduceRight same but rtl
    arr.everty(func) -- checks if every element pass a test (value, index, arr)
    arr.some same but checks if some pass the test
    arr.indexOf(value, start) -- searches for a value
    arr.lastIndexOf same but rtl
    arr.find(func) -- returns tha value of the first element that passes a test(value, index, arr)
    arr.findIndex same but returns index
    arr.push(vale) -- adds an element at the end
    arr.pop() -- pops the last element
    arr.unshift(value) -- push but at the begining
    arr.shift() -- pop but the start
    arr.splice(index, howMuchToDelete, ...values) -- adds items return the an array of the deleted
    arr.slice(index, index2) -- returns a new array consisting of the old array starting from that index up to the other (execlusive)
    arr.toString() -- to string
    arr.concat(arr2) -- concatenation
    arr = [...arr2] -- called array spread it spreads array elements onto another array ES6 feature

    from
    keys
    entries
    includes
    flat
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

















