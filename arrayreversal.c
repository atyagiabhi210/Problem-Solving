#include<stdio.h>

    int main() {
    int n;    
    printf("size \n");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    for (int i = 0; i < n/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
    }
    printf("reversal \n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

return 0;
}