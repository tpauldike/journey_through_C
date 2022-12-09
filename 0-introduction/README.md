# The Very Beginning
This directory holds the work that we did on the first day that the journey through the basics of C-programming began and, its content will make more sense to especially those who were present in the class.
We had an overview of what Computer is and what Computer Programming is all about and more, and then we treated:
- What is C?
- What the compiler does and how it works
- Bash script writing
- How to create environment variables on bash
- The stages of compilation
      1. Preprocessing
      2. Compilation
      3. Assembly
      4. Linking
- Understanding and following the *example box* provided in the intranet

## The Files Contained Here
In no particular order, these are the files that are in this directory and its sub directory, with some brief description, and how we came about them:

`main.c` is a C program that prints *Hello Cohort 10* and a new line.
We wrote it to see what happens when we run the command `gcc main.c` and the result was the file, `a.out`, the executable file.
We went ahead to establish that a.out is the default name given to the executable file when you do `gcc` without defining the name of the file *(let's not sound too professional with what `-o` does)*, so we did gcc again but this time we gave the executable file the name `hello` by using the command `gcc main.c -o hello`

Trying to have a perfect understanding of what we actually did in the task 0 of *C - Hello World* project and some earlier projects where we wrote scripts without actually knowing that we where writing scripts, we wrote a script `print` that does the work of `pwd` and `ls -l` when it is runned, and of course we runned it by doing `./print`. Note that this file has to be made executable before you can run it and the command to do that is `chmod u+x print`

We proceeded to practicalize running the C file (main.c)  through the prepocessor stage only and the command we used was `gcc -E main.c` and the result printed on the terminal without being saved anywhere, so we tried it again, saving the result of the process in a file `Topman` by using `gcc -E main.c -o Topman`

We had some environment variables in which we stored some values. For example;
- we stored the string `Hello Cohort 10` in the variable `Alonge`
- we stored the file `main.c` inside `EXAMPLE`

We did these by the command `export Alonge='Hello Cohort 10'` and `export EXAMPLE=main.c`, respectively.
And then, to display the content of the variables, we ran the command `echo $Alonge` and `echo $EXAMPLE` *(we used **echo** and added $ before the variable)*. You may want to try these out on your own to see how it works.

The next thing we did was to run our main.c file through the preprocessor stage again, but this time, we did not use the main.c directly, we used the variable EXAMPLE which had the main.c file saved inside it, and we stored the result of the process inside the file named `b`, we did this using the command `gcc -E $EXAMPLE -o b`

The essence of this README is to give you the opportunity to practice these things on your own, that's how we truly learn; if you cannot do it (no matter how well you understood the lesson in the class), you have not learned. So, please do, practice, play around with them.
This whole thing that we did gave us a perfect understanding of what task 0 of our C - Hello World project required of us. You may take a look at it in the [sub directory](./hello_world) contained here, with the eyes of your understanding enlightened. Note that the `main.c` in the sub directory here was copied from the example box provided for the task.

## Assignment
Produce the same result that is displayed in the example box in your intranet for `0-preprocessor`, I may not display it here for certain reasons. You have the file already, use that one or write another one if you wish.
***Send a screenshot of your work to [Topman](https://wa.link/66ef36) directly, via WhatsApp***

*If you like, revisit that project; go through your codes with understanding*

### Class Schedule
```
Mondays and Fridays

6:00 - 8:00 (GMT)
7:00 - 9:00 (WAT)
9:00 - 11:00 (EAT)
```
**Live on** [***Google meet***](http://meet.google.com/qii-wjoz-tte)

-----
###### Non-members of **CodeTrybe** can join this [WhatsApp group](https://chat.whatsapp.com/EIDan9CzMq7Ag6qJBTXh8F) to get reminders. You may click [here](http://meet.google.com/qii-wjoz-tte) to attend the meeting.
###### COME LET'S DO HARD THINGS!

-----
