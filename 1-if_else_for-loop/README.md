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
> Twinkle twinkle little star

> Twinkle twinkle little star

> Twinkle twinkle little star

> Twinkle twinkle little star

> Twinkle twinkle little star

> Twinkle twinkle little star

> Twinkle twinkle little star

> Twinkle twinkle little star

> ...

And it will most likely play forever except it runs out of power or you stop **the loop**, did I just call it **loop**? Yes, that's what loop is; looping is acheiving a repeated output or result without having to do again what you did to produce the very first result.
The point where the loop continues without stopping is what we call *infinite loop*

### Let's try to figure out what happened in the [for-loop.c](./for-loop.c).
Note that the aim of the loop was to print a ***times table*** for `2` from 1 to 12, i.e; `2 x 1 = 2`, `2 x 2 = 4`, ... `2 x 12 = 24`.

Here is a line-by-line analysis of what happend in (line 5 - 12 of) the block of code contained in the file `for-loop.c`, you may want to open [the source code](./for-loop.c) in another tab to look at each line of the code as you read the following:

On line 5, a variable `times` was declared but was not initialized. On line 6, the variable `number` was declared and initialized, it was assigned the value of `2`.
> I define *initialization* as giving an initial value to a variable.

The for loop was used in line 8, and the line of code on line 10 is the instruction that should be carried out as long as the condition stated in the for loop is met. Let's now break into segements and explain the for loop:
```c
for (times = 1; times < 13; times++)
{
	. . .
}
```
Above is the structure of the for loop. I'll break it into four parts:
1. for ( . . . )
2. times = 1
3. times < 13
4. times++

**Here is what I was telling the compiler**; I said I was telling the compiler because the computer will not understand my code until the compiler, which in our case is `gcc`, translates my written instructions into the type of codes that the computer understands)
### 1. `for` (a keyword in C)
"Hey! I am using a for loop"
### 2. times = 1
"Assign the value of `1` to the variable `times`"
### 3. times < 13
"Make sure that the value of times is less than 13 before you carry out the instruction that follows"
### 4. times++ (same as `times = times + 1`)
"After carrying out the instruction, increase the value of `times` by adding `1`"

Let me put all of that in one sentence:
> *"hey compiler, with a for loop, assign `1` to `times` and check whether `times` is less than `13`, if it is, do what is contained in the block of code and add `1` to `times`"*.

The compiler will keep doing what I have instructed it to do until `times` is no more less than `13`

Note the instruction that will be executed in the loop is what we have on line 10:
```c
printf("%d x %d = %d\n", number, times, number*times);
```
which reads:	`print __ x __ = __ and start a new line or 'paragragh'`

I referred to `%d` as the dash (__) and of course `\n` is the character that represents a new line, that may be described as 'a fresh paragragh'.
What then is the part `..., number, times, number*times);` doing? Let me explain.
Here, I was telling the compiler; "fill the first dash with the content of the variable `number`, which is `2`; fill the second dash with the content of `times` (which will vary because of the loop) and fill the third dash with the result of `number` multiplied by `times`, asterisk (*) stands for multiply in C programming.

## What actually happened in the for loop?
Look at it this way `for (times = 1; times < 13; times++)` changed to `(1 ; 1 < 13)` and the instruction executed. Let me take that again. In the block of code;
```c
for (times = 1; times < 13; times++)
{
	printf("%d x %d = %d\n", number, times, number*times);
}
```
the variables got replaced by their actual value, such that `number = 2`, `times = 1` and `number*times = 2*1`. So, we had something like this under the hood:
```
for (times = 1 and if "1 less than 13" is true)
{
	printf("%d x %d = %d\n", 2, 1, 2*1);
	times = times + 1
}
```
Note that the first line of code in the above block of code is not a valid syntax in C but I wrote it that way to explain what happened in the loop; firstly, the condition `times < 13` will be checked whether it is `true` and the `printf` instruction will be executed and then `times++` which is the same thing as `times = times + 1` that you see in the code above will execute lastly, so that `times` is by now equal to `2` (1 + 1).
At this point, the output will be:
```
2 x 1 = 2
```
Next, the new value will be checked again to see whether it's still less than 13, as shown below:
```
for (times = 2 and if 2 < 13 is true)
{
	printf("%d x %d = %d\n", 2, 2, 2*2);
	times = times + 1
}
```
And the output by this time will be:
```
2 x 1 = 2
2 x 2 = 4
```
Now observe how the value of `times` keeps changing because of the instruction that `1` should be added to its value each time the code in the loop runs. At this point, `times = times + 1` will mean `times = 2 + 1`, which is `3`, so, the loop continues:
```
for (times = 3 and if 3 < 13 is true)
{
	printf("%d x %d = %d\n", 2, 3, 2*3);
	times = times + 1
}
```
And the output progresses to:
```
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
```
Let's fast forward now until it gets to the point where `times` is equal to `12`; we'll have:
```
for (times = 12 and if 12 < 13 is true)
{
	printf("%d x %d = %d\n", 2, 12, 2*12);
	times = times + 1
}
```
And the final output will be:
```
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
2 x 12 = 24
```
Now, interestingly, here is what happens before the loop will stop; the value of `times` will still increase to 13 because `times + 1` will mean `12 + 1`:
```
for (times = 13 and if 13 < 13 is true)
{
	printf("%d x %d = %d\n", 2, 12, 2*12);
}
```
But, when `times` is equal to `13`, `times < 13` will mean `13 < 13`, which is not `true`, and because the condition is now `false`, the `printf` code will no more execute and the program will break out of the loop, and that's the end.

## Assignment
1. Write a program that prints `Twinkle twinkle little star` 10 times without you having to type it 10 times.
2. What will happen if the loop didn't have the `times++`?

*Kindly send the screenshots of your source code and the output to [Topman](https://wa.link/66ef36) directly, via WhatsApp. And send share your thoughts about question 2. in the WhatsApp group*

**The Journey through C** continues. Beware that not all our codes are pushed to git and it is very much better and interesting to be part of the class.

### Class Schedule
```
Mondays and Fridays

6:00 - 8:00 (GMT)
7:00 - 9:00 (WAT)
9:00 - 11:00 (EAT)
```
**Live on** [***Google meet***](http://meet.google.com/qii-wjoz-tte)

-----
###### Non-members of **CodeTrybe** can join this [WhatsApp group](https://chat.whatsapp.com/EIDan9CzMq7Ag6qJBTXh8F) to get reminders. You may click [here](http://meet.google.com/qii-wjoz-tte) to attend the meeting on Monday or Friday by the times.
###### COME LET'S DO HARD THINGS!
-----