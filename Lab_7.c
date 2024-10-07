#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "RUS");
	char c; /*
	scanf("%c", &c);
	switch (c) {
		case '0':
			printf("это цифра");
			break;
		case '1':
			printf("это цифра");
			break;
		case '2':
			printf("это цифра");
			break;
		case '3':
			printf("это цифра");
			break;
		case '4':
			printf("это цифра");
			break;
		case '5':
			printf("это цифра");
			break;
		case '6':
			printf("это цифра");
			break;
		case '7':
			printf("это цифра");
			break;
		case '8':
			printf("это цифра");
			break;
		case '9':
			printf("это цифра");
			break;
		default:
			printf("это буква");
			break;
	} */
	float x, y;
	scanf("%f%c%f", &x, &c, &y);
	switch (c) {
		case '+':
			printf("%f", x + y);
			break;
		case '-':
			printf("%f", x - y);
			break;
		case '/':
			printf("%f", x / y);
			break;
		case '*':
			printf("%f", x * y);
			break;
		case '^':
			printf("%f", pow(x, y));
			break;
	}
}