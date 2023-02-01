# Playing with Pointers, Arrays and Strings
In this session, we tried to be very practical with the definitions of the above concepts that we can already recite very well:
- A pointer is a variable that stores the address of another variable, such that the content and the location of the variable whose address is stored can be accessed via the pointer
- An array is a collection of values of the same data type
- A string is an array of charaters

In the file `array.c`, we had a pointer `point` (declared on line 7) pointing to an integer variable (declared and initialized on line 5) on line 8, and an array named `array` of size 5 having five elements, `1, 2, 3, 4, 5`. What we tried to do in this program is to prove that the name of any array in `C` points to the first element of the array *which in this case is `1`*, i.e, it holds the address of what ever is found at index 0.
So, we tried to print the content of `array` using the format specifier that prints an address in memory `%p` on line 11, and just to check whether it is really printing the memory address, we also tried to print what `point` is holding, to compare both results. Do you want to know the outcome? Kindly copy the code, compile it and run it to see.

The file `trial.c` resulted from a trial actually. Since we knew that any **single** thing enclosed within single quotes is a character (e.g; `'c'`, `'x'`, `'9'`, `'-'` ...) and anything enlosed within double quotes is a string (e.g; `"abc"`, `"123"`. `"?#!"` ...), we wanted to see what will happen if we had a single character enclosed in double quotes, whether the compiler will recognize it as a string or trear it as a character. Do you want to know the outcome? Copy the code and try it as well.

**The Journey through `C`** continues and you are welcome to join us. Beware that not all our codes are pushed to git and it is very much better and interesting to be part of the class. This particular series is as well not recorded.

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
