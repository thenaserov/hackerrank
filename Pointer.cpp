#include <stdio.h>

void update(int *a,int *b) {
        int sum, abs;
        sum = *a + *b;
        
        if (*a > *b)
            abs = *a - *b;
        else if (*b > *a)
            abs = *b - *a;
        
        *a = sum;
        *b = abs;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
