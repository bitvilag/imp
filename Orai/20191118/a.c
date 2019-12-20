#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INIT_SIZE 1

int main() {
	int num;
	int size = 0;
	int max_size = INIT_SIZE;
	int * buf = malloc(INIT_SIZE * sizeof(int));
	if(NULL == buf) {
		printf("malloc failed\n");
		exit(1);
	}
	while (EOF != scanf("%d", &num)) {
		if (size >= max_size) {
			//int * tmp_buf = malloc(2 * max_size * sizeof(int));
			int * tmp_buf = realloc(buf, 2 * max_size * sizeof(int));
			
			if(NULL == tmp_buf) {
				printf("malloc failed\n");
				exit(1);
			}
			memcpy(tmp_buf,buf,size * sizeof(int)); // nem kell ha van realloc
			free(buf); // nem kell ha van realloc
			buf = tmp_buf;
			max_size *=2;

		}
		buf[size] = num;
		size++;
	}
	for (int i = 0; i < size; ++i) {
		printf("%d", buf[i]);
	}
	printf("\n");
	free(buf);
}