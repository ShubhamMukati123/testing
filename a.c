#include<stdio.h>
void main()
{
    int matrix[3][3];
    printf("please enter values in matrix");
     
     for(int r=0;r<3;r++)
        for(int c=0;c<3;c++)
        {
            scanf("%d",&matrix[r][c]);       
        }
        printf("\n");

        printf("your matrix is");


 for(int r=0;r<3;r++)
        for(int c=0;c<3;c++)
        {
            printf("%d",matrix[r][c]);       
        }
        printf("\t  \n");



}