# Function in C
## What About Functions?
A function is a piece of instructions enclosed within curly braces, that can be called in a program or another function to perform a specific task.
By this definition, I mean to say that function usually looks like this:
```
<some_name>
{
    <some_instruction>    
}
```
This class was an opportunity to learn this practically with peers. We were able, by the end of the session, to appreciate the fact that functions:
- reduce the number of lines in a program and make it look simple
- make it easier to repeat a particular task without re-writing the code that gets the task done
- are reusable

Firstly, we began by writing a simple program that adds two intergers `20` and `50` and that's the content of the file named `add.c`; you may want to take a look at it. The file `add` is the executable file that resulted from running the command `gcc add.c -o add`, so you may simply copy the source code, have it saved on your local and run the gcc command by yourself and run the executable file to see how it works. It's very important that you do that before reading further, especially if you can not confidently write a program that can add two integers by now.

### [add.c](./add.c) explained (line-by-line)
**Line 1** contains the header file where the `printf` function is defined. If you don't understand what I mean, just know that the only reason we have `#include <stdio.h>` is simply because we used `printf` in the program as you can see on *line 10*.

There are more information about functions that you may want to have and there are enumerable resourceful materials at your disposal but my target audience consist of at least one total novice, and this is why I will keep this explanation as simple as I could. You can do some [Google Search](https://google.com) or see some tutorial video to learn some more.

**Line 2** is what we call *function declaaration*; it's as good as informing the compiler that such a function exist and the syntax is `<return_value> <function_name>(<parameters>)`. The return value in this case is `int`, you can see that the program returns an integer `0` in *line 12*; the name of the function is `main` and it does not have any defined parameters, which is why we have `void` within the brackets. `void` means `nothing` and we could as well leave the brackets blank `()` and the program will still work perfectly well.

**Line 4** and **Line 13** are the open curly brace and close curly brace within which the the instructions that the `main` program should carry out when it is run.

In **Line 5**, **Line 6** and **Line 7**, the variables `a`, `b` and `result` of type `int` were declared. What does it mean to declare a variable?
> *Declaring a variable means informing the compiler that you have some container, stating the type of data that it can contain*

Line 7 is a perfect example of variable declaration in `C`; there, we were saying;
> *"hello compiler, beware that in this program is a container named `result` that can only hold or contain a value that is an integer (a whole number that has no decimal point)"*

But in line 5 and 6, we went ahead to store something inside the containers `a` and `b`; this might be referred to as assigning value to the variables or initializing the variable. We assigned `20` to `a` and `50` to `b`.

Later on, in **line 9**, we went ahead to assign a value to the variable `result`. What we said there was;
> *hey compiler! Add whatever you see inside the container `a` to whatever you see in the container `b` and store the sum in the variable `result`*

If the value of `a` or `b` changes, it will certainly affect the value of `result` because the compiler will accurately add the contents of `a` and `b` to get the content of `result`.

**Line 11** indicates the end of the program. **Line 10** is probably the line you want to pay more attention to: `printf("The sum of %d + %d = %d\n", a, b, result);`. Below is my explanation of what happened in that line of code.
```c
/* The code is */
printf("The sum of %d + %d = %d\n", a, b, result);

/* You may take each %d to mean dash (__) */
printf("The sum of __ + __ = __")
```
Everything within those double quotes `" ... "` is very ordinary and doing nothing special, including the + and =, except the `%d` and the `\n`. It is not that plus sign there that performed the addition but the instruction on line 9. What then is the plus and equality signs doing there? Well, they are just what will want to be printed out to the screen when we run the program. If you clear everything else within the double quotes in the `printf` statement, the three `%d`s will still print out the correct values.

Talking about me referring to `%d` as `__` (dash), I mean to say that they do not have value, neither are they printed that way; they rather get their value from the variables that are listed within the `printf` brackets after the string, separated by comma; the first dash gets its value from the first variable `a`, which is `20`; the second `__` is replaced by the content of the second variable `b`, which is `50`; the third `__` will go for the content of the third variable `result`, which is the result of the arithmetics `a + b` as contained in line 9. That will make us get the output that follows:
```
The sum of 20 + 50 = 70
```
To ensure that this is clearly understood, the names of the variables used in the program were changed to see whether the program will still produce the same result, as seen below:
```c
#include <stdio.h>

int main(void)
{
    int ant = 20;
    int bat = 50;
    int answer;

    answer = ant + bat;
    printf("The sum of %d + %d = %d\n", ant, bat, answer);

    return (0);
}
```

And the output was exactly the same. This shows that your variable can bear any name that you chose to give it, nonetheless, it is good practice to choose a name that makes sense and reflect what the variable represents.

Try changing the printf line to `printf("%d and %d will give us %d", a, b, result);` in [add.c](./add.c) and see how ordinary the + and = sign were, they did not affect the addition at all; whether or not they were there, the `%d`s will still print the correct values assigned to the variables, like I said earlier.

### Why Use Functions?
Consider what we did as we made progress in the class; we wanted to also add `10` and `5` in the same program, and we had to do that buy adding some more lines of code as follows:
```c
#include <stdio.h>

int main(void)
{
        int a = 20;
        int b = 50;
        int result;
        int g = 10, f = 5, result2 = g + f;

        result = a + b;
        printf("The sum of %d + %d = %d\n", a, b, result);
        printf("The sum of %d + %d = %d\n", g, f, result2);

        return 0;
}
```
And the output was
```
The sum of 20 + 50 = 70
The sum of 10 + 5 = 15
```
Note the following
```c
/* This very line of code... */
int g = 10, f = 5, result2 = g + f;

/* ...would have be written in four lines like the ones for a, b & result */
int g = 10;
int f = 5;
int result2;

result2 = g + f;

/* so, it's the same thing, written in just one line */
```
By this time, we wanted the program to add more sets of two integers without having us declaring more variables or reassigning values to the variables. So we came up with the file [function.c](./function.c), where we wrote a simple function that could handle that for us, and all we needed to do was to call the function in the `main` program and pass any two integers to it as arguments separated with a comma. The file `function` is the executable we had when we compiled `function.c` with the command `gcc function.c -o function`.

### What Actually Happened in function.c?
You may open the file in another tab as you read through this portion:

In *line 3* was the function declaration; the return type was `void` because we were not going to use the `return` keyword within the curly braces at *line 4* and *line 6* where the function was defined. So, the statement at *line 3* is actually:
> *hey compiler, I want you to beware that a function named `add2num` exist in this program, it does not return anything but it can take two things inside the bracket that must be integers.*

Note that it didn't matter to the compiler the name you chose to call the function or the variables that are inside the brackets, which was why I used the names of two persons who were in the class, `Blessing` and `John`, but these were not good choices anyway, we could have used something like `num1` and `num2` to show that we are expecting two numbers to be put in the bracket, separated by a comma.

In *line 5*, I told the compiler;
> *when ever this function is called, let the first number given to it (taking the place of `Blessing`) be printed out by the first `%d` and second number that is taking the position of `John` be printed out by the second `%d`; the third `%d` should print whatever comes out from `Blessing + John`, in other words, add the number taking the place of `Blessing` in the bracket to the number taking the place of `John` in the bracket and let the third `%d` print out the answer*

That function was set and ready to work, so we started the `main` program from *line 9*, and all we had to do to add six different sets of two integers was just to type the name of the function `add2num` and put the two numbers that we want to add inside the bracket, separated by a comma, and of course ending the line with a semi-colon `;`

Feel free to practice these in your locale, you may reachout to us if you have any question.

## In Summary
1. Firstly, we wrote a program that will add 20 and 50 and print it out the way we wanted it to be printed
2. Then we tried to also add 10 and 5 in the same program and we had to add some lines of code
3. We went ahead to make it easier to repeat the process for any two whole numbers by writing a function (a block of code that performs a specific task), whose task is to add any two integers and print the result the same way the first program printed it.
4. We called the function in the main program and gave it different values each time, and it performed the tasks that we wrote about 13 lines of code to acheive the first time
5. We demonstrated and practically saw how function makes it easier to perform certain tasks repeatedly, and how functions can be reused.

### Note the following
- A function can be **standard**, such as; `printf` (not defined by us) or **user defined**, such as; `add2num` (defined by us)
- **Function declaration** is the point where we are informing the compiler of the return type, name and parameters of the function
- **Function definition** is all of the codes you write within the curly braces to determine how your function will behave or what exactly it will do when it is called
- **Function call** is the point where you invoke the function in another function or in the `main` program to come and perform its duty, and it is done by typing the name of the function, followed by brackets containing the type of arguments that the function has been defined to take. e.g; `add2num(20, 50)`

## Assignment
Write a function that multiplies any two integers and gives the results, call the function in a `main` program to have it perform the task that it was defined to do.

***Kindly send the screenshots of your source code and the output via WhatsApp to [Topman](https://wa.link/66ef36) directly.***

**The Journey through C** continues. Beware that not all our codes are pushed to git and it is very much better and interesting to be part of the class. This particular series is as well not recorded.

### Class Schedule
```
Mondays and Fridays

6:00 - 8:00 (GMT)
7:00 - 9:00 (WAT)
9:00 - 11:00 (EAT)
```
**Live on** [***Google meet***](http://meet.google.com/qii-wjoz-tte)

-----
###### Non-members of **CodeTrybe** can join this [WhatsApp group](https://chat.whatsapp.com/EIDan9CzMq7Ag6qJBTXh8F) to get reminders. You may click [here](http://meet.google.com/qii-wjoz-tte) to attend the meeting on Monday or Friday by the time.
###### COME LET'S DO HARD THINGS!
-----
