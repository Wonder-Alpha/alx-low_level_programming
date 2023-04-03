0x04. C - More functions, more nested loops
 README.md


# More functions, more nested loops


 Project done during **Full Stack Software Engineering studies** at **ALX School**. It aims to learn about nested loops in **C language**.


## Technologies

 * C files are compiled using `gcc 4.8.4`
 *
 * * C files are written according to the C90 standard
 *
 * * Tested on Ubuntu 14.04 LTS
 *
 *
 * ## Files
 *
 * All of the following files are programs written in C:
 *
 *
 * | Filename | Description |
 *
 * | -------- | ----------- |
 *
 * | `0-isupper.c` | Checs for uppercase character |
 *
 * | `1-isdigit.c` | Checks for a digit (`0` through `9`) |
 *
 * | `2-mul.c` | Multiplies two integers |
 *
 * | `3-print_numbers.c` | Prints the numbers, from `0` to `9` |
 *
 * | `4-print_most_numbers.c` | Prints the numbers, from `0` to `9`, except `2` and `4` |
 *
 * | `5-more_numbers.c` | Prints 10 times the numbers, from `0` to `14` |
 *
 * | `6-print_line.c` | Draws a straight line in the terminal |
 *
 * | `7-print_diagonal.c` | Draws a diagonal line in the terminal |
 *
 * | `8-print_square.c` | Prints a sqaure |
 *
 * | `9-fizz_buzz.c` | Prints Fizz-Buzz test |
 *
 * | `10-print_triangle.c` | Prints a triangle |
 *
 * | `100-prime_factor.c` | Finds and prints the largest prime factor of the number `612852475143` |
 *
 * | `101-print_number.c` | Prints an integer |
 *
 *
 *
 * 0-isupper.c
 *
 *
 * #include "main.h"
 *
 *
 */**

  * _isupper - uppercase letters
  *
  *  * @c: char to check
  *
  *   *
  *
  *    * Return: 0 or 1
  *
  *     */


  int _isupper(int c)

{

	        if (c >= 'A' && c <= 'Z')

			                return (1);

		        else

				                return (0);

}



0-main.c

#include "main.h"

#include <stdio.h>


/**
 *
 *  * main - check the code.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    char c;


	        c = 'A';

		    printf("%c: %d\n", c, _isupper(c));

		        c = 'a';

			    printf("%c: %d\n", c, _isupper(c));

			        return (0);

}



1-isdigit.c


#include "main.h"


/**
 *
 *  * _isdigit - check if numbers are 0 - 9
 *
 *   * @c: char to be checked
 *
 *    *
 *
 *     * Return: 0 or 1
 *
 *      */


int _isdigit(int c)

{

	        if (c >= '0' && c <= '9')

			                return (1);

		        else

				                return (0);

}



1-main.c

#include "main.h"

#include <stdio.h>


/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    char c;


	        c = '0';

		    printf("%c: %d\n", c, _isdigit(c));

		        c = 'a';

			    printf("%c: %d\n", c, _isdigit(c));

			        return (0);

}



2-mul.c


#include "main.h"

/**
 *
 *  * mul - multiply 2 int
 *
 *   * @a: first int
 *
 *    * @b: second int
 *
 *     * Return: addition of the multiplicattion
 *
 *      */


int mul(int a, int b)

{

	        return (a * b);

}



2-main.c

#include "main.h"

#include <stdio.h>


/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    printf("%d\n", mul(98, 1024));

	        printf("%d\n", mul(-402, 4096));

		    return (0);

}



3-print_numbers.c


#include "main.h"


/**
 *
 *  * print_numbers - print 0-9
 *
 *   * return: void
 *
 *    */


void print_numbers(void)

{

	        char c;


		        for (c = '0'; c <= '9'; c++)

				        {

						                _putchar(c);

								        }

			        _putchar('\n');

}



3-main.c

#include "main.h"


/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */


int main(void)

{

	    print_numbers();

	        return (0);

}



4-print_most_numbers.c


#include "main.h"


/**
 *
 *  * print_most_numbers - print num except 2 and 4
 *
 *   *
 *
 *    * return: void
 *
 *     */


void print_most_numbers(void)

{

	        char c;


		        for (c = '0'; c <= '9'; c++)

				        {

						                if (!(c == '2' || c == '4'))

									                        _putchar(c);

								        }

			        _putchar('\n');

}



4-main.c

#include "main.h"


/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    print_most_numbers();

	        return (0);

}



5-more_numbers.c


#include "main.h"


/**
 *
 *  * more_numbers - print more numbers
 *
 *   */


void more_numbers(void)

{

	        int i, j;


		        for (i = 1; i <= 10; i++)

				        {

						                for (j = 0; j <= 14; j++)

									                {

												                        if (j >= 10)

																                                _putchar('1');

															                        _putchar (j % 10 + '0');

																		                }

								                _putchar('\n');

										        }

}



5-main.c

#include "main.h"


/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    more_numbers();

	        return (0);

}



6-print_line.c


#include "main.h"


/**
 *
 *  * print_line - draws a straight line in the terminal
 *
 *   * @n: number of times the character _ should be printed
 *
 *    */

void print_line(int n)

{

	        if (n <= 0)

			        {

					                _putchar('\n');

							        } else

									        {

											                int i;


													                for (i = 1; i <= n; i++)

																                {

																			                        _putchar('_');

																						                }

															                _putchar('\n');

																	        }


}



6-main.c

#include "main.h"


/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    print_line(0);

	        print_line(2);

		    print_line(10);

		        print_line(-4);

			    return (0);

}



7-print_diagonal.c


#include "main.h"


/**
 *
 *  * print_diagonal - draws a diagonal line on the terminal
 *
 *   * @n: number of times the character \ should be printed
 *
 *    */


void print_diagonal(int n)

{

	        if (n <= 0)

			        {

					                _putchar('\n');

							        } else

									        {

											                int i, j;


													                for (i = 0; i < n; i++)

																                {

																			                        for (j = 0; j < n; j++)

																							                        {

																											                                if (j == i)

																																                                        _putchar('\\');

																															                                else if (j < i)

																																				                                        _putchar(' ');

																																			                        }

																						                        _putchar('\n');

																									                }

															        }

}



7-main.c

#include "main.h"


/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    print_diagonal(0);

	        print_diagonal(2);

		    print_diagonal(10);

		        print_diagonal(-4);

			    return (0);

}




8-print_square.c


#include "main.h"


/**
 *
 *  * print_square - prints a square, followed by a new line;
 *
 *   * @size: size of the square
 *
 *    */

void print_square(int size)

{

	        if (size <= 0)

			        {

					                _putchar('\n');

							        } else

									        {

											                int i, j;


													                for (i = 0; i < size; i++)

																                {

																			                        for (j = 0; j < size; j++)

																							                        {

																											                                _putchar('#');

																															                        }

																						                        _putchar('\n');

																									                }

															        }

}
