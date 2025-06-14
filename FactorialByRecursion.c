// Name:Arjun more PRN:24030331378012

#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter The Number");
    scanf("%d",&num);
    result=fact(num);
    printf("%d",result);
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        n=n*fact(n-1);
        return n;
    }
}
