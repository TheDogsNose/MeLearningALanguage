/*preprocessor -- commands for the compiler before compiling*/

//copies and pastes a file into the main file
//<file> refers to a system file/library, while "file" refers to a local file
#include <stdio.h>
//stdio.h contains input/output related functions
//std stands for standard library
#include <math.h>

#define bool _Bool
#define true 1
#define false 0


//function definition (what the function actually does)
bool doStuff(){
    return 1;
}
//function declartion (tells the compiler that a function exists so no errors occur. The definition can come later. A definition can function as a decleration but not the opposite)
void functionX (char * a, int x);

//function -- the compiler looks for the main function to call it in the start
int main (){

    //variable
    int xo = 0;
    /*  data types are:
            char - 1, unsigned char - 1, short - 2, int - 2/4, long - 4, long long - 8, 
            
            float - 4 / 6-digit precision, double - 8 / 15-digit precision, long double - 12 / 19-digit precision
            
            _Bool = 0 or 1 if more than 1 it become 1

            void

            //the signed and unsigned prefixes can be added to any integer type

    */

    /*  Format Specifier:
        %c - char, %d - signed int, %e %E - scientific notation, %f - float, %hi - signed short, %hu - unsigned short
        %i - unsigned int, %l %ld %li - long, %lf - double, %Lf - long double, %lu - unsigned long, %lli %lld - long long
        %llu - unsigned long long, %o - octal, %p - pointer, %s - string, %u - unsigned int, %x %X - hex, %n - nothing
        %% - percent ("%")
    */

    /*            print            */
    /*
    for scanf the format specifier consists of "%-5.3f" 
    "-" indicates left alignment (the extra spaces added after instead of before) while "0" indicates the extra spaces is to be filled with zeros, "5" is width (the minimum number of charecters), ".3" is precision (numbers after decimal)
    Ex:
    printf("%8.3f", 3.14159)
    >>   3.141|
    printf("%-8.3f", 3.14159)
    >>3.141   |
    printf("%08.3f", 3.14159)
    >>0003.141|
    */
    printf ("%-d \n", xo);
    puts("hello");
    putchar('h');
    putchar('\n');

    /*            input            */
    /*
    for scanf the format specifier consists of "%*5d" 
    "*" means this input is to be skipped, "5" is the max characters before starting to read the next input (if none then stops at a space)
    Ex:
    scanf("%2d %d %*f %5s", &x, &y, text)
    >>1234 5.7 elephant
    x = 12, y = 34, text = eleph
    */
    char ch[64];
    scanf ("%d %s", &xo, &ch);
    printf("%d, %s \n", xo+2, ch);
    char c = getchar();
    gets(ch);

    /* Operations
        ++, --, -               unary: adds or sub 1. x = 1; y = x++; / y=1, x=2  ||  y = ++x; / y=2, x=2 
        +, -, *, /, %           arithmetic: "/" works on float and int, "%" only work on int
        <, >, <=, >=, ==, !=    relational: compare
        &&, ||, !               logic: and, or, not
        &, |, ^, ~, <<, >>      bitwise: and, or, xor, not, left shift, right shift
        =, +=, -=, *=, /=, %=   assignment
        ? :                     ternary or conditional
    */
    /*
    type casting: 
    int a;
    float b = (float)a
    */

    char a[25] = "the function is called";
    int x = 0; 
    // this is how to call a function
    functionX(&a[0], x);

}

// a function with a void type does not return any value
//function definition (what the function actually does)
void functionX (char * a, int x) {
    printf("%s", a);
}

void conditions (long x)
{
    // a condition is false if the result is 0 or null otherwise it's true

    /* ?: operator
        (condition)? doTrue : doFalse;
    */
    int f = (true)? 5 : 7;
    (true)? printf("hello") : printf("not hallo");

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

    //regular if else with single line
    if (true)
        doStuff();
    else if (false)
        doStuff();
    else
        doStuff();

    //multiple lines
    if (false == true)
    {
        doStuff();
        doStuff();
    }else if (false)
    {
        doStuff();
    }else
    {
        doStuff();
    }

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
    int expression = 2;

    //switch statements:
    //compares the value of an expression and do stuff depending on the value
    switch (x)
    {
    case 0:
        //this will be executed if x = 0
        doStuff();
        break;
    case 1:
        //this will be executed if x = 1
        doStuff();
    case 2:
        //this will be executed if x = 2 or x = 1 since there was no "break" in the above case
        doStuff();
        break;
    case 3:
        //this will be executed if x = 3
        doStuff();
        break;
    default:
        //this will be executed if non of the above did (it's optional to have a default case)
        doStuff();
        break;
    }   

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
    //loops
    
    //while loop
    int i = 0;
    bool fuck = false;
    while (i < 11)
    {
        doStuff();
        i++;
        if(fuck)
            //exists the loop even if i is still less than 11
            break;
        
        //skips to the next iteration without executing the rest of the block
        continue;
        doStuff();
    }
    
    //executes once then check the expression instead of checking first
    do {
        doStuff();
    } while (expression);


    //for loop
    //the first statement is only executed once, the second is the condition it checks for each time, the third statement is executed everytime except the first (keep in mind it could be executed at the end without the loop being executed)
    //the first and last statements can be commited though the ";" must remain, they can also contain multiple expressions seperated by a comma
    for (int o = 0; o < 101; o++, i--){
        doStuff();
    }
    //break; and continue; works here too
}










