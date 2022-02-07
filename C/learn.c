/*
variable declaration
[mod] [type] [name];

variable definition
[modifier] [type] [name] = [value];
*/

//examples:
int x = 0;
short int y;
long long int w = -37;
unsigned long int k = 23;
const float AVariable = 2.3;
char ch = 'A';

//////////////////////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////////////////

/*
#arrays or lists
//list
{element, element, element, element, element, element, element}

//variable declaration
(type) (name) [(size)];
*/
char x[20];
int y[4] = {23, 53, 6, 9};
/*
to call an element
(name)[(element id)]
*/
int w = y[0];

//y[0] = 23, y[1] = 53, y[2] = 6, y[3] = 9
//trying to access an element outside the size limit will cause an error
//w = y[4] --> error

///////////////////////////////////////////////////////////////////////////////////////////

/*
#if-else

if (condition){

  //Code

}else if (condition){

  //Code

}else {

  //Code

}
*/

//////////////////////////////////////////////////////////////////////////////////////////////

/*
#While loops

while (condition) {
  //code
}
*/

//Example:
int x = 0;
while (x < 101){
  printf("%d\n", x);
  x++;
}

////////////////////////////////////////////////////////////////////////////////////////////

/*
#for loops

for (intialisation; condition; statement) {
  //code
}
//the intialisation is only executed the first time
//the condition is checked every time
//the statement is executed at  the end of every iteration
*/

//Example:
for (int x = 0; x < 101; x++) {
  printf("%d\n", x);
}

////Example:
int x = 0;
for (;x < 101;){
  printf("%d\n", x);
  x++;
}

/////////////////////////////////////////////////////////////////////////////////////////////////