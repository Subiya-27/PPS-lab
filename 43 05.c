#include<stdio.h>
int main()
{
    int i,j,N;
    printf("Enter the size of N:");
    scanf("%d",&N);
    printf("pattern upto %d rows in \n",N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

