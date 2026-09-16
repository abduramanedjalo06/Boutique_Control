# My Learning Notes

## What I Learned Yesterday

Yesterday, I learned some differences between C and Python.

In C, we use `#include <stdio.h>` for standard input and output.

In Python, I learned that `print()` is used to show something on the screen, and `input()` waits for me to type something.

I also learned about `float`. It is used for decimal numbers, like money and height.


## What I learned today 

I was trying to run my C code using "input", but it gave an error. After researching the reason for the error, I understood that "input" is not part of C. C uses "scanf", which also works like "input()" and expects me to type something, with the specifiers "%d" for integer, "%f" for decimal number, and "%s" for strings. I also learned about "&", the ampersand, which is used with "scanf" to indicate the address of the variable, but is sometimes not used with strings.

# Translation of Python code into C 

#include <stdio.h>

int main()
{
    printf("Boutique Control\n");

    float Starting_Balance;
    float Revenue;
    float Expenses;
    float Final_Balance;

    scanf("%f", &Starting_Balance);
    scanf("%f", &Revenue);
    scanf("%f", &Expenses);

    Final_Balance = Starting_Balance + Revenue - Expenses;

    if (Final_Balance > 0)
    {
        printf("Positive XOF ");
    }
    else if (Final_Balance < 0)
    {
        printf("Negative XOF ");
    }
    else
    {
        printf("Neutral XOF ");
    }

    return 0;
}


