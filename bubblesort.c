#include<stdio.h>
void main(){
    int n,a[20],i,j,temp;
    printf("enter the number of array element");
    scanf("%d",&n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);}
    //sorting process 
    for(i=1;i<=n-1;i++)
    {
for(j=0;j<=n-i-1;j++)
{
    if(a[j]>a[j+1]){
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}
}}
printf("the array element after sorting");
for(i=0;i<=n-1;i++)
printf("%d\n",a[i]);
}