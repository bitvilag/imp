include "vector.h"

#define INIT_SIZE 1



// struct vector {
// 	int * buf;
// 	int size;
// 	int max_size;
// };

void init(struct vector * v) {
	v->buf = malloc(INIT_SIZE * sizeof(int));
	v->size = 0;
	v->max_size = INIT_SIZE;
}

void push_back(struct vector * v; int elem) {
	if (v->size >= v->max_size) {
		int * tmp_buf = realloc(v->buf, 2 * v->max_size * sizeof(int));
		if(NULL == tmp_buf) {
			printf("malloc failed\n");
			exit(1);
		}
		v->buf = tmp_buf;
		v->max_size *=2;
	}
	v->buf[size] = elem;
	v->size++;
}