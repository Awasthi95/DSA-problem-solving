#include <stdio.h>
void main()
{
    int n, i, a[50], val, count = 0;
    printf("enter the number of elements in array");
    scanf("%d", &n);
    printf("enter the array elements");

    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
    }
    printf("enter the value you wanted to search");
    scanf("%d", &val);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)

        {
            printf("the array element %d found at %d position", val, i + 1);
            break;
        }
        else 
        {
            printf("element not found");
        }
    }
}