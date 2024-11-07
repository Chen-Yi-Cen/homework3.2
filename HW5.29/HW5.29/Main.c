#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2;
	printf("Enter two integers: ");
	scanf_s("%d %d", &num1, &num2);
	printf("The LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
}
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int lcm(int a, int b) {
	return abs(a * b) / gcd(a, b);
}