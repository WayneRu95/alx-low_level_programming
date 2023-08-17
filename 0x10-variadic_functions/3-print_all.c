#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) 
{
	va_list args;
	va_start(args, format);

	int i = 0
	char c;
	float f;
	char *s;

	while (format[i] != '\0') {
        if (format[i] == 'c') {
            c = (char)va_arg(args, int);
            printf("%c", c);
        } else if (format[i] == 'i') {
            int num = va_arg(args, int);
            printf("%d", num);
        } else if (format[i] == 'f') {
            f = (float)va_arg(args, double);
            printf("%f", f);
        } else if (format[i] == 's') {
		s = va_arg(args, char *);
		if (s == NULL)
		printf("(nil)");
		else
		printf("%s", s);
	}
	i++;
	if (format[i] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		printf(", ");
	}

	printf("\n");
	va_end(args);
}

int main() {
	char c = 'A';
	int num = 42;
	float f = 3.14;
	char *str = "Hello, World!";

	print_all("cifs", c, num, f, str);
	print_all("si", num, str);

	return 0;
}
