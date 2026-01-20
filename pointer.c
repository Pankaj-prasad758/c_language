#include <stdio.h>

int main(){
    int x = 10;
    int *y = &x;

    printf("value of x %d \n",x);
    printf("address of x %u \n",&x);
    printf("value of y %u \n",y);
    printf("value access by y %u \n",*y);
    printf("address of y %u \n",&y);
    return 0;
}