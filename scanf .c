
// C program to demonstrate that
// we can ignore some string
// in scanf()
#include <stdio.h>
int main()
{
    int a;
    scanf("This is the value %d", &a);
    printf("Input value read : a = %d", a);
    return 0;
}
