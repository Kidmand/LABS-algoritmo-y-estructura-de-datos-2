#include <stdlib.h>
#include <stdio.h>

void absolute(int x, int y) {
    if (x >= 0) {
     y = x;
    } 
    else {
     y = -x;
    }
}

int main(void) {
    int a=0, res=0;
    a = -10;
    
    absolute(a,res);
    printf("%d",res);
    
    return EXIT_SUCCESS;
}

// El valor de retorno es 0;