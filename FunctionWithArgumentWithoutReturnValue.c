// Name:Arjun more PRN:24030331378012

#include<stdio.h>
int addition(a,b)
{
    int c;
    c=a+b;
    printf("Addition is %d",c);
}
int main()
{
    int n1,n2;
    printf("Enter First Number \t");
    scanf("%d",&n1);
    printf("Enter Second Number \t");
    scanf("%d",&n2);
    addition(n1,n2);
    return 0;
}
