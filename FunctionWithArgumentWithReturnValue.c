// Name:Arjun more PRN:24030331378012

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 1 number \t");
    scanf("%d",&a);
    printf("Enter the 2 number \t");
    scanf("%d",&b);
    printf("Addition Of a and b is %d",sum(a,b));
    return 0;
}
int sum(n1,n2)
{
    int c;
    c=n1+n2;
    return c;
}