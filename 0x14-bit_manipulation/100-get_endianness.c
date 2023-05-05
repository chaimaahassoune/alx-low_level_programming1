#include "main.h"
#include <stdint.h>

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;

	char *c = (char*)&i;
	return (*c == 1);
}
