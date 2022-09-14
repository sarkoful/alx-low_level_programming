#include "main.h"

/**
 *  * print_alphabeti_x10 - Prints all the alphabets, a-z ten times
 *   *
 *    * Return: always 0 success
	*/
void print_alphabet_x10(void)
{
	 char alpha;
	  int index;

	   alpha = 'a';

	    for (index = 0; index < 10; index++)
		     {
			       while (alpha <= 'z')
				         {
						    _putchar((int) alpha);
						       alpha++;
						         }

			        }
	     _putchar((char) 10);
}
