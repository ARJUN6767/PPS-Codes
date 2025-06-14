// Name:Arjun more PRN:24030331378012
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter value of A and B: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("After swapping: A = %d, B = %d\n", a, b);

    return 0;
}
