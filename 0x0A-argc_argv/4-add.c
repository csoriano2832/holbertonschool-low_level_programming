#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int idx, result;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (idx = 1; idx < argc; idx++)
		{
			if (!isdigit(*argv[idx]))
			{
				printf("Error\n");
				return (1);
			}

			result += atoi(argv[idx]);
		}
		printf("%d\n", result);
	}
	return (0);
}
