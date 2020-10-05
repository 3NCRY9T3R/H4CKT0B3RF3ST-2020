#include <stdio.h>

int main()
{
    int i, j, rows;

    // Input rows from user 
    printf("Enter number of rows : ");
    scanf("%d", &rows);

   // Right angle triangle Logic :
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
           
            if(i==rows || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
Output
Enter number of rows: 5
    *
   **
  * *
 *  *
*****