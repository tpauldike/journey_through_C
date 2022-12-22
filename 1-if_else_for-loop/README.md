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
All we needed to do was to use a function known as `scanf()` to be able to receive from the computer keyboard what the user will type in when the program is running. So take a careful look at the block of code and the brief explanation that follows:
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
The goal of these transitions is to get to the point where we'll use the `if` `else` clause in a way that makes sense, so we needed to show that a program can actually receive inputs from the user at runtime.
**In the program above**, `printf` was used to prompt the user to enter his cohort; it is the `scanf` that makes it possible for the user's input to enter the program and be stored in the variable `cohort` that was earlier declared, and then the next thing it does is to print `Welcome to the PLD`.
At this point, we did `gcc if-else.c -o 1-welcome`; so the file `1-welcome` is the executable for the program in the above block of code. You may run it and see the result.

If you understand up to this point, you'll find it easier to understand the current content of [if-else.c](./if-else.c), where we made the program to print `Welcome to the PLD` only if the user entered `10`, or `Access denied` if the user entered something else. If you do not understand up to this point please feel free to contact **Topman Paul-Dike**, using any of the contact details on his [github profile](https://github.com/tpauldike)

## What about loops?
Consider the popular poem:
> Twinkle twinkle little star

> How I wonder what you are

> Up above the world so high

> Like a diamond in the sky

Imagine you were playing this in your audio player (whether a DVD player, radio cassette, phone or any music player) and then you pressed a button that made it to start repeating only the first line, it will then be playing:
> Twinkle twinkle llittle star

> Twinkle twinkle llittle star

> Twinkle twinkle llittle star

> Twinkle twinkle llittle star

> Twinkle twinkle llittle star

> Twinkle twinkle llittle star

> Twinkle twinkle llittle star

> Twinkle twinkle llittle star

> ...

And it will most likely play forever except it runs out of power or you stop **the loop**, did I just call it **loop**? Yes, that's what loop is; looping is acheiving a repeated output or result without having to do again what you did to produce the very first result.
The point where the loop continues without stopping is what we call *infinite loop*

### Here is a brief explanation of how the loop in [for-loop.c](./for-loop.c) worked.
Note that the aim of the loop was to print times tables for `2` from 1 to 12, i.e; `2 x 1 = 2`, `2 x 2 = 4`, ... `2 x 12 = 24`.




## Assignment
Write a program that prints `Twinkle twinkle little star` 10 times without you having to type it 10 times.