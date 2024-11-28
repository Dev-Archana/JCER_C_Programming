#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter one integer Value\n");
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("number is not a prime\n");
    }
    else{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("given number is prime %d",n);
    }
    else{
        printf("given number is not prime %d",n);
    }}
    return 0;
}
