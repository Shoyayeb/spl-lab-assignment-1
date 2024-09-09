#include<stdio.h>
void main(){
    int n,min = 0,max = 0,minIndex,maxIndex;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    min = array[0];
    for(int i=0;i<n;i++){
        if(array[i]<min){
            min = array[i];
            minIndex = i;
        }
        if(array[i]>max){
            max = array[i];
            maxIndex = i;
        }
    }
    printf("Max: %d, Index: %d \n",max,maxIndex);
    printf("Min: %d, Index: %d \n",min,minIndex);
}
