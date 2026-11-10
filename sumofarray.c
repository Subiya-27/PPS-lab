//write a c program to find sum of all the elements of an array.
#include<stdio.h>
int main()
{
    int s[5],sum=0;
    printf("Enter 5 integers:");
    for(int i=0;i<5;i++){
        scanf("%d",&s[i]);
    }
    for(int i=0;i<5;i++)
        sum=sum+s[i];
        printf("sum=%d",sum);
    }


