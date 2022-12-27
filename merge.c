#include<stdio.h>

    int main() {
    int arr[3];
    int arr1[3];
    int final[6];
    printf("enetr the elements odf array one \n");
    for(int i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++){
        for(int j=1;j<3;j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        printf("%d\n",arr[i]);
    }
    printf("enetr the elements odf array two \n");
    for(int i=0;i<3;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<3;i++){
        for(int j=1;j<3;j++){
            if(arr1[j]<arr1[j-1]){
                int temp=arr1[j];
                arr1[j]=arr1[j-1];
                arr1[j-1]=temp;
            }
        }
    }
    
    for(int i=0;i<3;i++){
        printf("%d\n",arr1[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        final[i]=arr[i];
    }
    for (int i = 3; i < 6; i++)
    {
        final[i]=arr1[i];
    }
    for(int i=0;i<3;i++){
        for(int j=1;j<3;j++){
            if(final[j]<final[j-1]){
                int temp=final[j];
                final[j]=final[j-1];
                final[j-1]=temp;
            }
        }
    }
    printf("final array\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d \n",final[i]);
    }
    
return 0;
}