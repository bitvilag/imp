#include <stdlib.h>
#include <stdio.h>

size_t len (const char * str) {
	size_t res = 0;
	while(* str != '\0') {
		res++;
		str++;
	}
	// char * p = str;
	// while (*p != '\0') ++p;
	// return p - str;
	return res;
}

void print_rev( int * a, size_t n) {
	// for (int i = n-1; i >= 0; --i) {
	// 	printf("%d\n",a[i] );
	// }
	while (n > 0) {
		--n;
		printf("%d", *(a + n));

	}
}

char * cat(char * dest, const char * src) {
	const char * p = str;
	//while(*p != '\0') ++p;
	while (*p) ++p;
	//while(*p != 0) ++p;
	//while(*src != '\0') {
		////*p = *src;
		////++p;
		////++src;
		//*p++ = *src++
	//}
	while ((*p++ = *src++));
	//*p = '\0';
	return dest;
}

int main() {

	char a[] = "abc";
	int is[] = {1,2,3,4};
	printf("len(a) = %lu\n", len(a));
	print_rev(is, sizeof(is)/sizeof(is[0]) );
	return 0;

}