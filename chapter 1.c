#include <stdio.h>
#include <stdlib.h>
//
// Created by daemonhunter on 6/7/26.
//

void swap(int *pa,int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
    printf("a=%d b=%d\n",*pa,*pb);
}

int main() {
    int a = 21;
    int b = 65;
    swap(&a,&b);

    return EXIT_SUCCESS;
}