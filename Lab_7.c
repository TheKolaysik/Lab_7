#include <stdio.h>
#include <locale.h>
#include <math.h>

void main() {
	setlocale(LC_ALL, "RUS");
	char c; /*
	scanf("%c", &c);
	switch (c) {
		case '0':
			printf("��� �����");
			break;
		case '1':
			printf("��� �����");
			break;
		case '2':
			printf("��� �����");
			break;
		case '3':
			printf("��� �����");
			break;
		case '4':
			printf("��� �����");
			break;
		case '5':
			printf("��� �����");
			break;
		case '6':
			printf("��� �����");
			break;
		case '7':
			printf("��� �����");
			break;
		case '8':
			printf("��� �����");
			break;
		case '9':
			printf("��� �����");
			break;
		default:
			printf("��� �����");
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