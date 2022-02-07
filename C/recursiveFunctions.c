#include <stdio.h>

//function declaration
double factorial(double num);

int main () {

    double x = 123;
    printf("The factorial of %.0lf is %e\n", x, factorial(x));
    return 0;
}

//function definition
double factorial(double num) {

    if (num == 1)  /* base case */
        return (1);
    else
        return (num * factorial(num - 1));

}



