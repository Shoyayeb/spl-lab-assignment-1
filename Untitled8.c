#include<stdio.h>
void main()
{
    int n,target;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
        scanf("%d", &array[i]);
    scanf("%d",&target);
    int found = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == target){
            if (!found)
                printf("FOUND at index position: ");
            printf("%d, ", i);
            found = 1;
        }
    }

    if (!found)
        printf("NOT FOUND");
    printf("\n");
}

