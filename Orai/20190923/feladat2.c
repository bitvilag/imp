#include <stdio.h>
#include <string.h>

int main() {
	char name[10] = "Zsolt";
	/* char name[10] = {'Z','s','o','l','t'}; */
	int i;
	for (i = strlen(name)-1; i >=0; --i) {
		printf("name[%d] == %c\n", i, name[i]);
	}
	printf("%s\n", name);
	printf("%c\n", name[1]);
	return 0;
}