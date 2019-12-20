#ifndef VECTOR_H
#define VECTOR_H

struct vector {
	int * buf;
	int size;
	int max_size;
};
void init(struct vector * v);
void push_back(struct vector * v; int elem);

#endif