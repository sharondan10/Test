#include <stdio.h>
 
int main() {
    printf("Hello, world!\n");
    int x =5;
    int y = bla(x);
    printf("y %d\n", y);
    return 0;    
}   

int bla(int x){
printf("X %d\n", x);
return ram(x) + 1;
}

int ram(int x){
    return x*3;
}
