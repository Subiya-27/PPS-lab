#include<stdio.h>
int main()
{
    int values[5];
    printf("Enter 5 integers:");
    for(int i=0;i<5;i++){
        scanf("%d",&values[i]);
    }
    printf("Display integers: ");
    for(int i=0;i<5;i++){
        printf("%d\t", values[i]);
    }
}
