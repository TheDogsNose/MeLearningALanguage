/*preprocessor -- commands for the compiler before compiling*/

//copies and pastes a file into the main file
//<file> refers to a system file/library, while "file" refers to a local file
#include <stdio.h>
//#include <stdbool.h>

#define bool _Bool
#define true 1
#define false 0

//function -- the compiler looks for the main function to call it in the start
int main (){

    //variable
    int a = 0;
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
    printf ("%-d \n", a);
    puts("hello");
    putchar('h');

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
    scanf ("%d %s", &a, &ch);
    printf("%d, %s", a+2, ch);
    char c = getchar();
    gets(ch);




    
}