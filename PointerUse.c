/*A way to print an array elements of a 3-D array and find the sum of diagonal elements*/
#include<stdio.h>
#include<conio.h>
void main() 
{ 
    int i,j,arr[3][3],sum=0;
    int (*ptr)[3]=arr;
    printf("Enter the 9 elements:\n");             //Entering elements in the 2-D array.
    for(i=0;i<3;i++) 
    { 
        for(j=0;j<3;j++)
        { 
            printf("Element-[%d],[%d] : ",i,j); 
            scanf("%d",&*(*(ptr+i)+j));            // pointer expression *(*(ptr + i) + j) is equivalent to subscript expression ptr[i][j].
            printf("\n");
        } 
    }
    printf("The matrix is: \n");                   //Displaying the 2-D array(matrix).
    for(i=0;i<3;i++)
    { 
        for(j=0;j<3;j++)
        { 
            printf("%d\t",*(*(ptr+i)+j));
        }
        printf("\n");
    }
    printf("The sum the diagonal elements of the matrix= ");
    for(i=0;i<3;i++) 
    { 
        for(j=0;j<3;j++)
        { 
            if(i==j)
              sum=sum+*(*(ptr+i)+j);            //Sum of the diagonal elements of the matrix.
            else
              continue;
        }
    }
    printf("%d",sum);
    getch();
}
