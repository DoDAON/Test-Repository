#include "Header.h"
int main() {
	char getChar[100];
	printf("�ȳ�? ���� �̸��� ����? : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%s", getChar);
	printf("%s? �� ���� �̸��̱���.", getChar);
	return 0;
}
