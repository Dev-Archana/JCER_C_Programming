#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a values for a\n");
    scanf("%d",&a);
    printf("Enter a values for b\n");
    scanf("%d",&b);
    printf("sum of a and b is : %d",a-b);
    return 0;
}

// Another way with the help of 3rd variable
#include <stdio.h>
int main()
{
    int a,b,res;
    printf("Enter a values for a\n");
    scanf("%d",&a);
    printf("Enter a values for b\n");
    scanf("%d",&b);
    res=a-b;
    printf("sum of a and b is : %d",res);
    return 0;
}
