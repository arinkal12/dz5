#include <stdio.h>
int main() {
	float c, r, s;
	printf("Enter the circumference ");
	scanf_s("%f", &c);
	r = c / (2 * 3.14);
	s = 3.14 * r*r;
	printf("\n Area of the circle =%f", s);
	return 0;
}