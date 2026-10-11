# My Learning Notes

## What I Learned Yesterday

Yesterday, I learned some differences between C and Python.

In C, we use #include <stdio.h> for standard input and output.

In Python, I learned that print() is used to show something on the screen, and input() waits for me to type something.

I also learned about float. It is used for decimal numbers, like money and height.


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

# What I learned 
It seems that the understanding has become a little clearer. I learned to create my own function that is now recognized as a function.
Because before, I would suddenly put a word and the compiler would show me an undeclared function and I wouldn't understand that.
I learned to create a function in both C and Python. In C, I create it before int main and the complete definition can come after, and I define within the parentheses () what it should receive...
In Python I use def (define). Just like in C, I show within the parentheses what it should do and call it afterward.
I also learned something important: functions in Python end with a colon : and use spaces (indentation) to indicate that this belongs to this function. Unlike C, which uses a semicolon ; at the end of variable lines and curly braces {...} to open and close a function's code block.

And I realized that with f-string I can directly use the variable name inside the curly braces in Python print statements without needing to specify %d, %f, %c, %s...

# bug
I've encountered a bug that I don't know why! My Python code in VS Code (Codespace) shows "Name not defined".

## Study the reason for the error.  
I don't know, but I'm not very familiar with declaring functions yet. Yes, I learned how to create functions and declared Final_Balance above, but in the terminal I see that it wasn't declared, and I still don't know exactly what's happening.

## I am beginning to learn the Loops For/while and array:
Today I am learning the loops for/while, and array.

## What I learned today 

Not bad! Although I thought about giving up on learning C several times because I constantly saw errors in the terminal. But my AI tutor gave me the courage and motivation to continue.

I also learned about other libraries, such as <ctype.h> for toupper() and tolower(), <stdbool.h> for bool, true, and false, and <math.h> for powers and square roots.

Before, I thought there was only one library, <stdio.h>, for data input and output. I would write all the lines of code, review everything, and think it was all right. I believed the program would work, but when I ran it, I saw many errors in the terminal!

In mathematics, like the formula for electrostatic force, which uses the electrostatic constant K = 9.0 × 10⁹ N·m²/C², and the quadratic formula, where I had problems with the square root of delta without specifying the <math.h> library above.

An array is like drawers that hold values ​​under the same variable name.

I'm still learning about for and while loops little by little. They're still difficult for me, and what tires me is remembering the [i]. I need to put it after the array name, like name[i], but I always forget.

Sometimes, the way I write my code makes the program work differently than I expect. For example, putting else inside a for loop, or using return 1; inside the loop, which causes the program to stop before checking the other elements of the array.
