# `C` struct, typedef
In this class, we learned about:
- primitive data types
- derived data types
- data structures
- abstract data types (ADT)

We tried to appreciate the real world applications of these, we talked about stack and how that it is the technique behind *undo* and *redo* in computer systems.
We compared arrays and linked list a bit and deviated a little to highlight the main difference between singly linked lists, doubly linked lists and circular linked lists.

## What is struct and typedef?
We established that struct is the data structure in `c` that allows one to group data of different types as one data type, *a bit similar to creating an objects with attributes in `python`*.
And that, `typedef` is simply used to provide an alias for the `struct` created.

We resolved to build a simple struct for each contact in a phonebook and the last thing we did before the end of the class was [this file](./2-contact.c).

## Programs written in the class
### 1. struct.c
In the file [struct.c](./struct.c), we were trying to prove whether (or not) an array was needed to store the user's number.
You may get the file, compile it, run it and type in a contact to see the result for yourself.

The other **.c** files are our work with `struct` and `typedef` in their order of increasing complexity, with their executables named after them.

### 2. [0-contact.c](./0-contact.c)
In this file, we created a struct for *phonebook* that looks like this:
```c
struct phonebook{
       char name[100]; //contact's name
       char code[5]; //country code
       unsigned int no; //number
}
```
And we found out, as we made progress, that the right way to give this struct an alias was to add the `typedef` keyword before `struct` and add the alias after the closing curly brace, and then a semi colon, which leaves us with what we have below:
```c
typedef struct phonebook{
        char name[100]; //contact's name
        char code[5]; //country code
        unsigned int no; //number
} contact;
```

By the above block of code, we had a new datatype `contact`, so we declared in the main block of code, a new variable `Maro` of type `contact`
```c
        /*We did this*/
	contact Maro;
	/*Just like we do...*/
	int var;
```
We initialized the variable `Maro` (i.e; we gave the 3 fields - name, code & no - some values), and compiled it with the command `gcc 0-contact.c -o 0-contact` and ran the executable file (`./0-contact`) and our newly created contact was:
```
Peter Obi
+124 12341234

Madam Amaka
+234 43214321

```

### 3. [1-contact.c](./1-contact.c)
This file was an improvement on the previous one, where we created a function `print` that handles the printing, so that we will not have to print each field like we did in the main block of code of the previous file. And the output of the program, after compilation, was the same, as expected

Note that `Maro` and `Amaka` were just the names we chose to give our variables, they could have been something else.

## Assignment
Copy the content of the file, [**2-contact.c**](./2-contact.c), and get the task done.

***Kindly send the screenshots of your source code and the output [via WhatsApp to Topman](https://wa.link/66ef36) directly.***

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
###### Non-members of **CodeTrybe** can join this [WhatsApp group](https://chat.whatsapp.com/EIDan9CzMq7Ag6qJBTXh8F) to get reminders. You may click [here](http://meet.google.com/qii-wjoz-tte) to attend the meeting on Monday or Friday by **the right time**.
###### COME LET'S DO HARD THINGS!