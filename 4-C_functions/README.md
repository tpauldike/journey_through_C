# Functions, `main.c` and `main,h`
In this class we wrote, in a single file `functions_pld.c` four different functions to perform the following tasks:
1. Add two integers
2. Perform subtraction on two integers
3. Multiply an integer by another integer
4. Perform division and print the remainder

We had to call all these functions in the same **main** function to test them and see whether they worked well. Well, it took some trial and error kind of learning as it was left for those who came to learn to put their heads together to get the task done. When they finally got it right, we went to compile it, using the command `gcc functions_pld.c -o oluwasegun`, that's how the executable came about. Oluwasegun was the name of the young man that shared his screen to get the task done with the support of his peers, so we used his name. That name is not appropriate for the program but we were just playing with codes in other to create a more friendly atmosphere of understanding.

After that stage we went ahead to separate what we have in the single file [functions_pld.c](./functions_pld.c) to be contained in different files; we had each function in a separate file, which made clearer to us the essence of `main.c` files (the test file) and `main.h` files (the header file). Although we chose to call our own header file `hdio.h`, a random name chosen by one of the peers present in the class.

You may want to take a careful look at the files and see what content exactly we took from `functions_pld.c` to create each of the other files and what we had to add, such as; `#include "hdio.h`, `#ifndef _HDIO_` and so on. We ended up compiling all the separated files, except `hdio.h` in a single command, producing another executable `func-segun`;
> We ran `gcc subtraction.c addition.c multiplication.c division.c main.c -o func-segun` and then ran the executable.

It was interesting to note that both executable files produced exactly the same result;
```
8 + 3 = 11
4 - 3 = 1
2 x 6 = 12
8 / 3 = 2, remainder 2
```
This shows that our function can work well in the same file but we can separate them in order not to have our file too crowded and to make the code look easier to understand.

## Assignment
Play with nested loops of any kind *(do anything with them)*

***Kindly send the screenshots of your source code and the output via WhatsApp to [Topman](https://wa.link/66ef36) directly.***

**The Journey through C** may have to be paused for a while for certain reasons, after this week, to be continued as soon as possible, but learning will continue, classes will hold that will be handled by capable hands that is not Topman; kindly cooporate.
Thank you so much

-----
###### Non-members of **CodeTrybe** can join this [WhatsApp group](https://chat.whatsapp.com/EIDan9CzMq7Ag6qJBTXh8F) to stay informed about when it will resume.
###### COME LET'S DO HARD THINGS!
-----
