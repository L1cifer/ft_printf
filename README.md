# ft_printf
Third project in 1337

first of all should know what is it variadic arguments .

so Variadic arguments are : function that can take a variable number of arguments . in c programming , a variadic function adds flexibility to the program . it takes one fixed argument and then any number of arguments can be passed . the variadic function consists of at least one fixed variable and then an ellipsis (...) as the last parameter .

**syntax :**

```c
int function_name(data_type Variable_name, ...);
```

values of the passed arguments can be accessed through the header file named as :

```c
#include <stdarg.h>
```

**<stdarg.h> includes the following methods :**

va_start(va_list ap,  argN): this enables access to variadic function arguments .

Va_arg(va_list ap,type): this one accesses the next variadic function argument.

Va_copy(va_list dest , va_list src): this makes copy of the variadic function arguments .

Va_end(va_list ap) : this ends the traversal of the variadic function arguments .

here Va_List holds the information needed by va_start , va_arg,va_end and va_copy.

so by other words Variadic function are function (e.g.printf)which take a variable number of arguments the declaration of variadic function uses an ellipsis as the last parameter eg .

int printf(const char* format, ...);. see variadic arguments for additional detail on the syntax and automatic argument conversions .

accessing the variadic arguments from the function body uses the following library facilities :

Va_start ....

**Type Defined in header file <stdarg.h>**

**va_list (type)**

**holds the information needed by macros va_start, va_arg, va_end, and va_copy**

**Macros Defined in header file <stdarg.h>**

**va_start (macro)**

**start of iterations in the variadic function arguments**

**va_arg (macro)**

**get the next variadic function argument**

**va_copy (macro)**

**makes a copy of the variadic function arguments**

**(Available only in C99)**

**va_end (macro)**

**ends of iteration in the variadic function arguments**

so after knowing about this macros we’ll work on our own code .

## code :

so first of all we will create 5 file one of them will be our printf the other ‘ll be .h other one will contain the utils that ‘ll help us and a Makefile and one will have a function that check some things , so let get started : 

first of all we will define ft_printf.h on our file.h and define some functions it’s not a big deal it will be like : 

```c
#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char* , ...);
char	ft_putchar(char c);
void	ft_putnbr(int n);
char	ft_putstr(char *s);
void	ft_putnbr(int n);
char	check1(char *c, va_list ptr);

#endif
```

so back to our principal code so let’s skip the prototype we did know everything about him after we ‘re going to create a alist that the argument will be stored in it , 2 int one for the index and the other will store the count one thing about printf i guess a lot of people doesn’t know about it is that it return a integer it’s like a count about how many character she wrote it .

after we will use va_start u know to start of iterations in the variadic function arguments we will give it like arg the list that we did create and the first argument in our case will be ***f** we’re going to initialize the i in 0 after that we will create a loop that we will work on it with the codition of the string f doesn’t hit the ‘\0’ after that we should check if **f[i]** found the **‘%’ ,**so in this case we should know what is the flag that we’re dealing with it now we will call the check function and from her name u can know what it’s going to do so for the first part her code will be like the following :

 ****

```c
#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	va_start (ptr, f);
	i = 0;
	while (f[i])
	{
		if (f[i] == '%')
```

now if we did found the **‘%’** as i said we should know what it’s the flag we’re dealing with so we’ll increase the index and now we will call check function and put the count = count + check

```c
#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	va_start (ptr, f);
	i = 0;
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			count += check1(f[i],ptr);
		}
	}
}
```

so now let’s move to this check function what she’s really doing ?

nothing specially actually is just first take as parameter the list that we’re working in it and the string that we want to check 

so first we’ll declare a count that he will store how many character we wrote so now he will start checking if f[i] = ‘c’ or ‘d’ || ‘i’ ‘u’ ‘s’ 

so for this form our code will be like that : 

```c
#include "printf.h"

char	check1(char *c, va_list ptr)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar((char)va_arg(ptr,int));
	if (c == 's')
		count += ft_putstr(va_arg(ptr,char*));
	if (c == 'u')
		count += ft_unputnbr(va_arg(ptr,int));
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ptr,int));
	if (c == '%')
		count += ft_putchar('%');
}
```

so one more thing before we continuer for those who doesn’t know about this flags what they do:

A small description of the required conversion:
•

] %c print a single character.
• %s print a string of characters.
• %p The void * pointer argument is printed in hexadecimal.
• %d print a decimal (base 10) number.

•%i print an integer in base 10.
• %u print an unsigned decimal (base 10) number.
• %x print a number in hexadecimal (base 16), with lowercase.
• %X print a number in hexadecimal (base 16), with uppercase.
• %% print a percent sign.
