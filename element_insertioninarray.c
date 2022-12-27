#include<stdio.h>
int main(){
//    bool swap;
    int arr[6];
    printf("he");
        for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    int N=5;
    int max=6;
    for(int i=0;i<N;i++){
        for (int j = 1; i <N; j++){
         if(arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            //swap=true;
         }
        }
        }
    printf("SORTED ARRAYS \n");
    for(int i=0;i<N;i++){
        printf("%d \n",arr[i]);
    }    
        
    
    if (max==N)
    {
    return -1;
    }
    else{
        arr[3]=76;
        arr[5]=69;
        N++;
    }
    printf("MODIFIED ARRAY\n");
for(int i=0;i<N;i++){
        printf("%d \n",arr[i]);
    }
}

