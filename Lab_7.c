#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");
	char c;
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
	}
}