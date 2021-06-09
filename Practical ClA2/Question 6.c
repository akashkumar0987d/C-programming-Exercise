#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        count++;
    }
    printf("No of negative number in array is %d\n",count);
    return 0;
}
