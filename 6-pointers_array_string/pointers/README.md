# `C` Pointers: Live Learning Session

## About
The current sub-directory contain the codes we wrote while leaening pointers and some brief information about what we were trying to demonstrate in the `c` programs while we were learning pointers.

The whole idea for this session was to get the practical knowledge and understanding of *pointers* beyond being able to define terminologies and concepts.

The session eventually turned into a 4-day series of peer learning sessions on pointers, with the *all-female* cohort 14 (of **ALX SWE**) and other interested students from the earlier cohorts.

The sessions were taken by [**Topman Paul-Dike**](https://github.com/tpauldike) himself, these 4 days *(nights actually)*.

## Programs written on Day-0
### 0. [int.c](./int.c)
This was the first program we wrote while trying to show that, although 0-9 are integers, integers do not mean a unit value (i.e, a single number);
so, we stored 213 in an integer variable `number` and stored the same figures as three elements in an array `num` and printed out the size of the variables, knowing that the size of an integer variable in a 64 bit architecture is supposed to be 4.

The result was that:
- `number` remained 4, even though it had more than a “single number”
- `num` was 4x3 in size, because there were 3 elements in the array, each of which were 4 bytes (the size of an integer here).

You may want to run the executable or compile the [source code](./int.c) by yourself and run it.

### 1. [pointer.c](./pointer.c)
In this file, we did some demo, progressively, as we learned about pointers and their unique roles of storing the address of variables of same datatype (i.e, `int pointer` for `int variable`).

To prove that the pointer can bear any name and not necessarily `*ptr`, we called our pointer `*fowl`
and with this code, we showed that:
- `fowl == &num`
> *i.e; the value of the pointer `fowl` is the 'address of num (`&num`)'*

- `*fowl == num`
> *when asterisk (or star) is added before the name of the pointer, its value will be the value of the variable `num` that it is pointing to.*

By “...pointing to”, I mean “...holding the address”; the variable that a pointer is pointing to is the variable whose memory address is stored in the pointer.

You may take a look at [pointer.c](./pointer.c) to see the program, then compile it and run the executable to see the result.

### 2. [format_specifier.c](./format_specifier.c)
The executable file `diff_formats` was produced from this very file. The program was written to answer the question; **“why not %i?”**
So we demonstrated that different format speciers are used to either print different datatypes or print same datatype in different formats,
such as;
- %i for integers
- %c for characters
- %p for memory address
- %x for hexadecimals
- %o for octadecimals
- %d for decimals
- %s for strings *and more...*

Talking about printing same datatype in different formats, we had line 11 of the program as;
```c
printf("%i\n", letter);
```

Note that line 7 had a character variable declared and not an integer variable:
```c
char letter = 'z';
```

At that point some error was expected by some of us, but there was no error; %i printed the content of `letter` but it rather printed the ASCII value `122`.

## Assignment
The assignment given is contained in the file [format_specifier.c](./format_specifier.c), the comments made the task clear.


You may want to try it out, especially if you've never printed a floating value in `c` or determine the decimal place precisely.

----
###### CodeTrybe Cares