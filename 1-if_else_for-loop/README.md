# `if`, `else` statements and `for loop` in C
This is the summary of a 2-hour peer learning where we tried to practically understand how `if`. `else` and `for loop` works in C programming. We established in the virtual class that `if` `else` is not a type of loop but simply conditional statements in programming.
There are many documents and videos out there that explain all of these in details, so this document is not for the purpose of giving detailed explanation, but to enable many of us (especially those who were in the class) to learn or recall what we know and be inspired to practice on our own.

## How we came about the files here
In this directory are the following files:
- the source codes:
  - if-else.c
  - for-loop.c
- the executables (compiled using `gcc`):
  - 0-welcome
  - 1-welcome
  - 2-welcome
  - loop

The file `if-else.c` went through 3 stages of editing to acheive different objectives as stated in line 1, 2, and 3, of the file:

```c
1 /* A program that outputs "Welcome to the PLD" */
2 /* A program that promtpts the user for his cohort and prints "Welcome to the PLD" */
3 /* Make it print "Access denied" if the participant is not from cohort 10*/
```
Firstly, the file looked like this:

```c
#include <stdio.h>

int main(void)
{
	printf("Welcome to the PLD");

	return (0);
}
```

If you're not sure what the output of this program will be, please download the executable `0-welcome` (if you're using a linux system) or copy the codes above and compile it by yourself (do `gcc if-else.c -o 0-welcome`) to see what it is, because *we learn by doing*.

Then the program took another form for us to acheive the second objective stated in line 2.
All we needed to do was to use a function known as `scanf()` to be able to receive from the computer keyboard what the user will type in when the program is running. So take a careful look at the block and the brief explanation that follows:
```c
#include <stdio.h>

int main(void)
{
	int cohort;

	printf("Enter your cohort: ");
	scanf("%i", &cohort);
	printf("Welcome to the PLD");

	return (0);
}
```
