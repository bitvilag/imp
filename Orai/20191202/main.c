#include <stdio.h>

struct real {
	int nom;
	int denom;
	
};
typedef struct real2 {
	int nom;
	int denom;
	
} real_t;


int main() {
	struct real r = {1, 2};
	printf("r= { %d, %d } \n",r.nom, r.denom );

	struct real r2 = { .denom = 2, .nom = 1 };

	real_t r3;

	return 0;
}