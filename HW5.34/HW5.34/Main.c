#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent) {
	if (exponent == 1) {
		return base;
	}
	else {
		return base * power(base, exponent - 1);
	}
}
int main() {
	int base, exponent;
	printf("��J�n�p��X���X����");
	scanf_s("%d %d", &base, &exponent);
	printf("%d^%d= %d", base, exponent, power(base, exponent));
	return 0;
}