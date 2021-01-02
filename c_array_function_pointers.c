//program to demonstrate array of function pointers.
#include <stdio.h>

int print_one()
{
    printf ("1-");
}

int print_two()
{
    printf ("2-");
}

int print_three()
{
    printf ("3-");
}

int print_four()
{
    printf ("4-");
}

int (*stcon[4])() = {print_one, print_two, print_three, print_four};

int main(void)
{
    int result = 0;
    printf ("Hello World \r\n");
    result = (*stcon[1])();
}

Output
Hello World                                                                                                           
2-
