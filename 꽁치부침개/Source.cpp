#include "Header.h"
int main() {
	char getChar[100];
	printf("안녕? 너의 이름은 뭐니? : ");
	fseek(stdin, 0, SEEK_END);
	scanf("%s", getChar);
	printf("%s? 참 예쁜 이름이구나.", getChar);
	return 0;
}
