#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Binary numbr
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int m, n;

	if (!b)
		return (0);

	 i = 0;

	 for (m = 0; b[m] != '\0'; m++)
		 ;
	 for (m--, n = 1; m >= 0; m--, n *= 2)
	 {
		 if (b[m] != '0' && b[m] != '1')
		 {
			 return (0);
		 }

		 if (b[m] & 1)
		 {
			 i += n;
		 }
	 }
	 return (i);
}
