#include <stdio.h>

int main(){
	int num1 = 12;
	int num2 = 15;
	int sum;
	sum = num1 + num2;
	int minus;
	minus = num1 - num2;
	int multi;
	multi = num1 * num2;
	float divi;
	divi = (float) num1 / num2;
	printf("Tong cua %d va %d la: %d\n", num1, num2, sum);
	printf("Hieu cua %d va %d la: %d\n", num1, num2, minus);
	printf("Tich cua %d va %d la: %d\n", num1, num2, multi);
	printf("Thuong cua %d va %d la: %f", num1, num2, divi);
	return 0;
}
