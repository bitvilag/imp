#include <stdio.h>
#include <ctype.h>

int main() {
	char name[] = "Zsolt Tabi";

	printf ("sizeof(name) = %lu\n",
	sizeof(name));

	int first_len = 0;
	int len = sizeof(name)-1;

	int i;
	for (i = 0; i < len; ++i ) {
		/* if (name[i] == ' ') { */
		if (isspace(name[i])) {
			first_len = i;
			break;
		}
		printf("%c\n", name[i]);
	}
	printf("%d\n", first_len);

	int last_len = len - first_len-1;

	printf("%d\n", last_len);
	
	if (first_len > last_len) {
		for(int i=0; i< first_len; ++i) {
			printf("%c", name[i]);
		}
	} else if (first_len < last_len) {
		for(int i=first_len+1; i< len; ++i) {
			printf("%c", name[i]);
		}
	} else {
		for (int i = 0; i < len; ++i) {
			printf("%c", name[i]);
		}
	}

	return 0;
}