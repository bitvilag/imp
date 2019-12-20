#include "helper.h"
#include <stdio.h>

int main (void) {
    int a[] = {1,2,3};
    swap(&a[0],&a[1]);
    printf("1. = %d 2.=  %d ",a[0], a[1]);
    for (int i =0; i < (sizeof(a)/sizeof(a[0])); i++) {
        printf("%d ",a[i]);
    }
    printf("%d\n",017);
printf("%d\n",0100);printf("%d\n",01);printf("%d\n",01);printf("%d\n",01);
    return 0;
}