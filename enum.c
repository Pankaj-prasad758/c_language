#include <stdio.h>

enum week {Sunday, Monday, Tuesday};

int main(){
    enum week today = Monday;
    printf("%d", today);
}