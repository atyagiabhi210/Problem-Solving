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
    printf("array arr \n");
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    printf("repeated\n");
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1]){
            printf(" repeated indexes %d \n",i+1);
        }
        else{

            printf("not repeated %d \n",i);
        }
    }
    
return 0;
}