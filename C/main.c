/*preprocessor -- commands for the compiler before compiling*/

//copies and pastes a file into the main file
//<file> refers to a system file/library, while "file" refers to a local file
#include <stdio.h>
//stdio.h contains input/output related functions
//std stands for standard library
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define bool _Bool
#define true 1
#define false 0

//function definition (what the function actually does)
bool doStuff(){
    return 1;
}
//function declartion (tells the compiler that a function exists so no errors occur. The definition can come later. A definition can function as a decleration but not the opposite)
void functionX (char * a, int x);
void files ();
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
    fgets(ch, 64, stdin);

    /*More input and output:
    //stderr, stdin, and stdout are the standard file objects concerning the console.

    //It stops when either (limit-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.
    fgets(string, limit, File);
    fputs(string, File);
    */
    /*String functions
        sprintf (string, format, args)  //same as printf but puts the output into an string pointer
        sscanf (string, format, args)   //same as scanf but puts the output into an string pointer
        
        #include <string.h>
        strcpy(s1, s2)      //Copies s2 into s1.
        strcat(s1, s2)      //appends s2 onto the end of s1.
        strncat(s1, s2, n)  //same thing but appends the first n charecters of s2 onto s1
        strlen(s1)          //Returns the length of s1.
        strcmp(s1, s2)      //Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
        strncmp(s1, s2, n)  //same thing but compares the first n charecters
        strchr(s1, ch)      //Returns a pointer to the first occurrence of ch in s1.
        strrchr(s1, ch)     //same but reverse
        strstr(s1, s2)      //Returns a pointer to the first occurrence of s2 in s1.
        Strrev(str)         //reverse a string
        atoi(str)           //converts a string to an integer
        atof(str)           //converts a string to a float
        atol(str)           //converts a string to a long integer
    */


    /* Operations
        ++, --, -               unary: adds or sub 1. x = 1; y = x++; / y=1, x=2  ||  y = ++x; / y=2, x=2 
        +, -, *, /, %           arithmetic: "/" works on float and int, "%" only work on int
        <, >, <=, >=, ==, !=    relational: compare
        &&, ||, !               logic: and, or, not
        &, |, ^, ~, <<, >>      bitwise: and, or, xor, not, left shift, right shift
        =, +=, -=, *=, /=, %=   assignment
        ? :                     ternary or conditional
    */
    /*Operator Precedence
        1: l2r
            x++, x--, func(), a[x], y.x, y->x, (type){a}
        2: r2l
            ++x, --x, +x, -x, !x, ~x, (type)x, *x, &x, sizeof(x), _Alignof(x)
        3: l2r
            x*y, x/y, x%y
        4: l2r
            x+y, x-y
        5: l2r
            x>>y, x<<y
        6: l2r
            x<y, x>y, x<=y, x>=y
        7: l2r
            x!=y, x==y
        8: l2r
            x&y
        9: l2r
            x^y
        10: l2r
            x|y
        11: l2r
            x&&y
        12: l2r
            x||y
        13: r2l
            x? y : z
        14: r2l
            x=y, x+=y, x-=y, x*=y, x/=y, x%=y, x<<=y, x>>=y, x&=y, x^=y, x|=y
        15: l2r
            ,
    */
    /*type casting: 
    int a;
    float b = (float)a
    */

    char a[26] = "the function is called\n";
    int x = 0; 
    // this is how to call a function
    functionX(&a[0], x);

//jumb command (be aware of infinite loops) - has to be in the same function
label:
    if (!true)
        goto label;


    //Array:
    int list[45] = {23, 43, 65, 3, 76, 8};
    //this list has 45 elements, the remaining elements are equal to 0.
    //An array declaration reserves a block of contiguous memory addresses for its elements.
    //accessing an element:
    list[1] = 43;

    //two dimensional arrays:
    int twoDArray[3][3] = {
        {3, 4, 5},
        {5, 6, 7},
        {6, 6, 7}
    };
    twoDArray[0][1] = 4;



    //referencing:
    //putting an "&" before a variable name refers to its memory address.
    int yo = 0;
    //yo = 0;
    //&yo = 0061FDDC;
    
    //pointers:
    //A pointer is a variable that contains the address of another variable.
    //
    int *p = &yo;
    //p = 0061FDDC;
    //derefrencing (see what a pointer is pointing to):
    //*p = 0;

    //it's possible to have a pointer to a pointer using "**" instead of "*".
    //when you use an array's name it returns the address of the first element using "&" with arrays is unnecessary.
    //(p = list) --> (p = &list[0])
    //pointers can be used as function arguments. function types can also be pointers.
    //Pointers can point to a function
    //      return_type (*func_name)(parameters) 
    //A function name points to the start of executable code so like arrays referencing and dereferencing is unnecessary
    //pointer type can be void, but you must type cast it before derefrencing, and you cannot perform pointer arithmetic with void pointers.
    void *ptr = &xo;
    yo = *((int *)ptr);

    //strings:
    //strings are an array of chars that ends with null ('\0').
    char string[6] = "hello";
    //"hello" = {'h', 'e', 'l', 'l', 'o', '\0'}

    files();



    return 0;
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
    
    //executes once then check the expression at the end of every iteration instead of checking first
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

// a function with a void type does not return any value
//function definition (what the function actually does)
void functionX (char * a, int x) {
    printf("%s", a);
    //a static variable is a one that does not terminate when the scoop ends. the initiation is only done once and the same variable is used every time the function is called.
    static int v = 0;
}

int moreData () {

    /*Structures
        the good ol' struct (user-defined data type that groups related variables of different data types.)
        A struct variable is stored in a contiguous block of memory.
        functions can have structs as arguments
    */
    struct student
    {
        char name[50];
        unsigned int age;
        unsigned int class;
        float grades;
    };
    
    struct student Ahmed = {"Ahmed", 22, 10, 98.5};
    //the statement has to be type casted excpet in intialisation
    struct student Ali;
    Ali = (struct student) {"Ali", 19, 3, 89.3};
    struct student Khalid = {.name = "Khalid", .grades = 78};

    //you can access a member (variable) using a dot
    Khalid.age = 17;

    //structs of the same type can be assigned to each other
    struct student s;
    s = Khalid;
    
    //typedef defines a user created data type
    typedef struct student student;
    student popo;

    typedef struct
    {
        int x;
    } data;
    
    data lala;


    //pointers to structs:
    struct student *sp;
    sp = &Ahmed;
    //to access a member through a pointer you can either dereference it or use the -> operator
    (*sp).age = 18;
    sp->age = 19;

    //a union allows you store different data types in the same memory location
    //when assignment is performed, the union memory location will be used for that member until another member assignment is performed
    //trying to access a member that isn't occupying the memory location gives unexpected results
    union NameU
    {
        int id;
        char name[50];
    };
    
    union NameU AhmedU;

    AhmedU.id = 23;
    strcpy(AhmedU.name, "Ahmed");
    //only AhmedU.name has value, trying to access AhmedU.id will return unexpected value unless you're assigning value.
    //only the last member that was assigned value has value
    //unions are often used within structures since a structure can have a member to keep track of which union member stores a value    

    //Enumeration (enum) assigns names to integer constants
    //unlike #define, enum follows the scoop

    enum state {working = 0, failed = 1}; 

    enum state evar;
    evar = failed;

    //two names can have the same value
    //every name has to be unique in the scoop
    //if we don't assign values to enum names, the compiler by default assign values starting from 0
    //all unassigned names get value as value of previous name plus one


    return working;
}

void memory () {
    //sizeof() operator returns the size of a variable in bytes
    
    //#include <stdlib.h>
    
    //the memory used by a programme is made of 5 parts: heap, stack, static, literal, instruction
    //dynamic memory is managed with pointers that point to newly allocated blocks of memory in an area called the heap
    
    int *fourB = NULL;
    fourB = malloc(4);
    //malloc returns a pointer to a contiguous block of memory that is the size of the given bytes

    int *fourBArray = NULL;
    fourBArray = calloc(10, 4);
    //calloc returns a pointer to a contiguous block og memory that has N items each is n bytes in size. the new memory initialized to 0

    fourBArray = realloc(fourBArray, 4*12);
    //realloc resizes the block of emory pointed to by ptr to n bytes. it returns a pointer to the new memory address. the new memory is not intialized

    free(fourB);
    free(fourBArray);
    //free releases the block of memory pointed to by pt
    //it's important to free unused memory to avoid any problems
}

void files () {

   int x;
   FILE * fp = NULL;
   fp = fopen ("ourFile", "r+");

    if (fp == NULL){
        printf("error opening the file\n");
    }
    
    /*
    - r open for reading (file must exist)
    - w open for writing (file need not exist)
    - a open for append (file need not exist)
    - r+ open for reading and writing from beginning
    - w+ open for reading and writing, overwriting file
    - a+ open for reading and writing, appending to file
    */

    /* reading
        - fgetc(fp) Returns the next character from the file pointed to by fp.
            If the end of the file has been reached, then EOF is returned.
        - fgets(buff, n, fp) Reads n-1 characters from the file pointed to by fp and stores the string in buff. A NULL character '\0' is appended as the last character in buff.
            If fgets encounters a newline character or the end of file before n-1 characters is reached, then only the characters up to that point are stored in buff.
        - fscanf(fp, conversion_specifiers, vars) Reads characters from the file pointed to by fp and assigns input to a list of variable pointers vars using conversion_specifiers.
            As with scanf, fscanf stops reading a string when a space or newline is encountered.
    */
    /* writing
        - fputc(char, fp) Writes character char to the file pointed to by fp.
        - fputs(str, fp) Writes string str to the file pointed to by fp.
        - fprintf(fp, str, vars) Prints string str to the file pointed to by fp.
        str can optionally include format specifiers and a list of variables vars.
    */

   //rewind returns to the start of the file
   rewind(fp);
   
   fscanf(fp, "%d", &x);
   printf("this code was used: \"%d\" times\n", ++x);
   //closing the file is important
   fclose(fp);

   fp = fopen ("ourFile", "w+");
   
   rewind(fp);
   fprintf(fp, "%d\n", x);
   fclose(fp);


    //files can be opened in binary mode
    //this is useful when trying to store variables, arrays, or even structs
    /*
        - rb open for reading (file must exist)
        - wb open for writing (file need not exist)
        - ab open for append (file need not exist)
        - rb+ open for reading and writing from beginning
        - wb+ open for reading and writing, overwriting file
        - ab+ open for reading and writing, appending to file
    */
    /*
        fwrite(ptr, item_size, num_items, fp) Writes num_items items of item_size size 
        from pointer ptr to the file pointed to by file pointer fp.

        fread(ptr, item_size, num_items, fp) Writes num_items items of item_size size 
        from pointer fp file to the buffer pointed to by pointer pointer ptr.

        ftell(fp) Returns a long int value corresponding to the fp file pointer position in
        number of bytes from the start of the file.

        fseek(fp, num_bytes, from_pos) Moves the fp file pointer position by num_bytes bytes or charecters relative to
        position from_pos, which can be one of the following constants:
        SEEK_SET -- start of file
        SEEK_CUR -- current position
        SEEK_END -- end of file
    */

    //usually a .txt extension indicates a text file, 
    //.bin is for binary data, 
    //.csv indicates comma separated values, 
    //and .dat is a data file.

    /*
        x       	    Forces the function to fail if filename already exists. Can only be used with the "w" or "w+" specifiers.
        c           	Enable the commit flag for the associated filename so that the contents of the file buffer are written directly to disk if either fflush or _flushall is called.
        n           	Reset the commit flag for the associated filename to "no-commit." This is the default. It also overrides the global commit flag if you link your program with COMMODE.OBJ. The global commit flag default is "no-commit" unless you explicitly link your program with COMMODE.OBJ (see Link Options).
        N           	Specifies that the file is not inherited by child processes.
        S           	Specifies that caching is optimized for, but not restricted to, sequential access from disk.
        R	            Specifies that caching is optimized for, but not restricted to, random access from disk.
        T	            Specifies a file as temporary. If possible, it is not flushed to disk.
        D	            Specifies a file as temporary. It is deleted when the last file pointer is closed.
        ccs=encoding	Specifies the encoded character set to use (one of UTF-8, UTF-16LE, or UNICODE) for this file. Leave unspecified if you want ANSI encoding.
    */

    
}




