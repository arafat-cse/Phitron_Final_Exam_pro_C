#include<stdio.h>
int main()
{

    int N,M;
    scanf("%d%d",&N,&M);
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (N-1==i)
            {
                printf("%d ",arr[i][j]);
            }
            
        }
        
    }
    printf("\n");
        for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (M-1==j)
            {
                printf("%d ",arr[i][j]);
            }
            
        }
        
    }
    
    return 0;
}