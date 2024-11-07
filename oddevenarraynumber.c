#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n] ,arre[n/2],arro[n/2],e=0,o=0;
    for(int i=0;i<=n;i++)
    {
        arr[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arre[e]=arr[i];
            e++;
        }
        else
        {
           arro[o]=arr[i];
            o++; 
        }
    }
    for(int i=0;i<n/2;i++){
        printf("%d",arro[i]);
        
    }
     for(int i=(n/2)-1;i>=0;i--){
         printf("%d",arre[i]);
     }
}
