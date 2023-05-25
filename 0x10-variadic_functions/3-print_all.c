#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
/**
 * print_all - Function that prints anything
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list at;
	char *string;
	int i;

	i = 0;
	va_start(at, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(at, int));
				break;
			case 'f':
				printf("%f", va_arg(at, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(at, int));
				break;
			case 's':
				string = va_arg(at, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(at);
}
