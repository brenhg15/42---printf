*This project has been created as part of the 42 curriculum by bhernand*

# Description
This project is to replicate the printf function from libc with the following coversions:

• %c Prints a single character.

• %s Prints a string (as defined by the common C convention).

• %p The void * pointer argument has to be printed in hexadecimal format.

• %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign.

**Algorithm chosen**

The ft_printf function uses variadic arguments, allowing it to accept a variable number of arguments of different types, similar to the standard printf function.

The chosen algorithm was the result of extensive research and was selected because it provides a simple and effective way to handle all mandatory conversions required by the project.

The execution begins in ft_printf, which parses the format string character by character. When a % character is encountered, the next character is examined to determine the conversion type. At this point, ft_printf calls the ft_check function, which identifies the corresponding conversion specifier and dispatches the appropriate handler function.

Each handler processes its specific data type and updates the character count accordingly. Once all characters in the format string have been processed, ft_printf returns the total number of characters printed, which is tracked through a counter throughout the execution.

The Bonus part was not handled. 

# Instructions
Build the library
    make

Remove object files
    make clean

Remove object files and library
    make fclean

Rebuild everything
    make re
After compilation, you'll have libftprintf.a - a static library ready to link and use the ft_printf

# Resources

* Geeks for Geeks 
https://www.geeksforgeeks.org/c/printf-in-c/
* How to Write a Program That Prints All the Numbers of Base 16 in Lowercase in C 
https://gideonbature.hashnode.dev/how-to-write-a-program-that-prints-all-the-numbers-of-base-16-in-lowercase-in-c
* va_arg() – va_copy() – va_end() – va_start() — Handle Variable Argument List 
https://www.ibm.com/docs/en/i/7.5.0?topic=lf-va-arg-va-copy-va-end-va-start-handle-variable-argument-list

* Peers from 42 Berlin
Github repositories
https://github.com/AijaRe/42Porto_ft_printf

* Tester
https://github.com/Tripouille/printfTester/blob/master/README.md

* AI
To rewrite the Algorythm part with a better structure, additional to questions about concepts. However the implementation was not written by AI. 
