#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("Elements of the new array is  ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
