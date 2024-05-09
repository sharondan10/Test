#include <stdio.h>
 
int main() {
    printf("Hello, world!\n");
    int x =5;
    bla(x);
    return 0;    
}   

int bla(int x){
printf("X %d\n", x);
return x + 1;
}
