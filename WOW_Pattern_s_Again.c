#include<stdio.h>
int main()
{

    int number, Space, ster;
    scanf("%d",&number);
    Space=number-1;
    ster=1;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < Space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < ster; j++)
        {
            if (i%2 ==0)
            {
                printf("^");
            }
            else{
                printf("*");
            }
            
        }
        Space--;
        ster=ster+2;
        printf("\n");
        
    }
    
    return 0;
}