#include <stdio.h>
#include <stdlib.h>

char change_case(char x);
int main() {
	char i;
	printf("請輸入一個英文字母: ");
	scanf_s("%c", &i);
	printf("%c", change_case(i));
	return 0;
}
char change_case(char x) {
	if (x >= 'A' && x <= 'Z') {
		return x + 'a' - 'A';
	}
	else {
		return x + 'A' - 'a';
	}
}