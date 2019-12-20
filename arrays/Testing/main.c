#include "helper.h"
#include <stdio.h>

int main (int argc, char const *argv[]) {
    int a[] = {1,2,3}
    swap(&a[0],&a[1]);
    printf("1. = %d 2.=  %d",a[0], a[1]);
}