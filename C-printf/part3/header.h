#ifndef HEADER_H
#define HEADER_H

/* C standard library header files */
#include <stdarg.h>
#include <unistd.h>

/* function prototypes */
int putchr(char z);
int  my_printf(const char *format, ...);
int put_s(char *string);
int put_int(int integer);

#endif /* HEADER_H */
