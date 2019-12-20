#include <stdio.h>
#include "person.h"

void set_age(struct person * p, int a) {
	p->age = a;
}


int compare(person_t * person, int size) {
	//..
}
void print_person(struct person p) {
	printf("person { name: %s, age: %d } \n", p.name, p.age );
}

int main() {

	person_t ppl[10];
	//struct person ppl[10];
	compare(ppl, sizeof(ppl)/sizeof(person_t));
	struct person p;

	printf("name:");
	scanf("%63s", p.name);
		printf("age:");
	scanf("%d", &p.age);

	set_age(&p, 10);
}
