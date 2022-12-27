#include<stdio.h>

 int main() {
    int n;
    
    printf("ENTER THE SIZE OF ARRAY \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    int p;
    printf("ENTER THE POSITION YOU WANT TO BE DELELETED \n");
    scanf("%d",&p);
    if(p>=n){
        printf("SIZE OF ARRAY EXCEEEDED \n");
    }
    else{
        for(int i=p-1;i<n;i++){
            arr[i]=arr[i+1];
        }
    }
    printf("updated array \n");
        for(int i=0;i<n;i++){
            printf("%d \n",arr[i]);

        }
return 0;
}