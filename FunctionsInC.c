#include <stdio.h>
void printArray();
void printEvenIndex();
int main()
{
    printEvenIndex();
    return 0;
}
void printArray()
{
    int n=0;
    int a[n];
    printf("Enter array length\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Given array elements are \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void printEvenIndex()
{
    int size;
    printf("Enter size an array\n");
    scanf("%d",&size);
    int b[size];
    printf("Enter array elements \n");
    for(int j=0;j<size;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("Even index from given array\n");
    for(int j=0;j<size;j++)
    {
        if(j%2==0)
        printf("%d\n",j);
    }
}
