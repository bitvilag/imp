#include <stdlib.h>
#include "sort"

double median(int * a, int len) {

	int * copy = malloc(len * sizeof(int));
	if(NULL == copy) {
		printf("malloc failed\n");
		exit(1);
	}
	for (int i = 0; i < len; ++i) {
		copy[i] = a[i];
	}
	//todo memcpy
	sort(copy, len);
	double result;
	if (len % 2 != 0) {
		result = copy[len/2];
	} else {
		result = (copy[len/2-1] + copy[len/2]) 
	}
	free(copy);
}

#define LEN 5

int main() {

	int n;
	printf("size: ");
	scanf("%d", &n); // input olvasas


	int * arr = malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	int arr[LEN] = {1,2,3,4,5};
	double n = median(arr, LEN);
	printf("%f\n", n);
	free(arr);
	return 0;
}