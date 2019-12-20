#include <stdio.h>

unsigned fact(unsigned n);

int main()
{
	unsigned num;

	printf("Give me a number: ");
	scanf("%u", &num);
	printf("%u\n", fact(num));
	return 0;
}

unsigned fact(unsigned n) {
	if (n <= 1) {
		return 1;
	}
	//printf("%d",n);
	return n*fact(n-1);
	// return n<= 1 ? 1 : n * fact(n-1);
}