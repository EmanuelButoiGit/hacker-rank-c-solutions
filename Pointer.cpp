#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function 
    int a2,b2;
    a2 = abs(*a + *b);
    b2 = abs(*a - *b);
    *a = a2;
    *b = b2;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
