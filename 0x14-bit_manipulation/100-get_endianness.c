#include "main.h"

/**
 * get_endianness - Checks the endianness -
 *
 * Return: if big endian returns - 0,
 * if little endian will return - 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}