/*pattern program - 13*/
#include <stdio.h>
int main()
{   
    int i,j,k = 1;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
           if(i>=j)
           {
               printf("%d ",k);
           }
        }
        printf("\n");
        k++;
    }
}