#include "main.h"
/**
 * main - Positive or Negative - print sign of random number
 * @void: Empty parameter list for main.
 *
 * Description: this if/else statement delares the sign (positive
 * or negative) of a random number. It also states if the value
 * is zero.
 *
 * Return: 0 for success
*/
void positive_or_negative(int i)
{
  /**
   * variable n has been declared
   * coding then assigns the random value.
   */
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }

        
}
