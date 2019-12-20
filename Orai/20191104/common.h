#ifndef ELTE_COMMON_H
#define ELTE_COMMON_H

void swap(int * a, int *b);

static reverse (int * a, int len) {
	for (int i = 0; i < len/2; ++i)
	{
		swap(&a[i], &a[len-i-1]);
	}
}

#endif