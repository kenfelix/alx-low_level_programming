0x02. C - Functions, nested loops
 Foundations > Low-level programming & Algorithm > Hatching out
 By Julien Barbier, co-founder & CEO at Holberton School
 Weight: 1
 Ongoing second chance project - started 06-22-2021, must end by 06-24-2021 (in about 6 hours) - you're done with 42% of tasks.
 QA review fully automated.
In a nutshell…
Auto QA review: 0.0/106 mandatory & 0.0/36 optional
Altogether:  0.0%
Mandatory: 0.0%
Optional: 0.0%
Calculation:  0.0% + (0.0% * 0.0%)  == 0.0%
Resources
Read or watch:

Nested while loops
C - Functions
Learning to Program in C (Part 06) (stop at 14:00)
What is the purpose of a function prototype?
C - Header Files (stop before the “Once-Only Headers” paragraph)
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are nested loops and how to use them
What is a function and how do you use functions
What is the difference between a declaration and a definition of a function
What is a prototype
Scope of variables
What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
What are header files and how to to use them with #include
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
Don’t forget to push your header file
More Info
You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

Quiz questions
Show

Tasks
0. _putchar
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a program that prints Holberton, followed by a new line.

The program should return 0
julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-holberton.c -o 0-holberton
julien@ubuntu:~/0x02$ ./0-holberton 
Holberton
julien@ubuntu:~/0x02$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x02-functions_nested_loops
File: 0-holberton.c
    
1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a function that prints the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet(void);
You can only use _putchar twice in your code
julien@ubuntu:~/0x02$ cat 1-main.c
#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x02-functions_nested_loops
File: 1-alphabet.c
    
2. 10 x alphabet
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet_x10(void);
You can only use _putchar twice in your code
julien@ubuntu:~/0x02$ cat 2-main.c
#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x02-functions_nested_loops
File: 2-print_alphabet_x10.c
    
3. islower
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a function that checks for lowercase character.

Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise
FYI: The standard library provides a similar function: islower. Run man islower to learn more.

julien@ubuntu:~/0x02$ cat 3-main.c 
#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower 
011
julien@ubuntu:~/0x02$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x02-functions_nested_loops
File: 3-islower.c
    
4. isalpha
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a function that checks for alphabetic character.

Prototype: int _isalpha(int c);
Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise
FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.

julien@ubuntu:~/0x02$ cat 4-main.c 
#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/0x02$ ./4-isalpha 
1110
julien@ubuntu:~/0x02$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x02-functions_nested_loops
File: 4-isalpha.c
    
5. Sign
mandatory
Score: 0.00% (Checks completed: 0.00%)
Write a function that prints the sign of a number.

Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero
julien@ubuntu:~/0x02$ cat 5-main.c
#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
