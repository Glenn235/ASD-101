
// Basic Arithmetic Operations

#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 3;
    int output;
    int minOutput;
    int multOutput;
    float divOutput;
    float remOutput;


    output = num1 + num2;
    minOutput = num2 - num1;
    multOutput = num1 * num2;
    divOutput = num2 / num1;    // Returns whole number since inuts are integers
    remOutput = (num2 / num1);    // if divOutput  = 3.0/2.0 the outpur would be 1.5


    printf(" The output of the sum is : %d, and the output of the difference is : %d\n", output, minOutput);
    printf("The output of the multiplication is : %d, and the the output for the division is: %f\n", multOutput, divOutput);
    printf("and the reaminder is %f\n", remOutput);

    return 0;
   }
