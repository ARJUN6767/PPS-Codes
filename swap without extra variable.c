// Name:Arjun more PRN:24030331378012
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter value of A and B: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: A = %d, B = %d\n", a, b);

    return 0;
}
