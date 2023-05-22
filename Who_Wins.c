#include<stdio.h>
int main()
{
    int cont,tiger=0,pathan=0;
    scanf("%d",&cont);
    
    for (int i = 0; i < cont; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if (a>b)
        {
            tiger++;
        }
        else if(b>a){
            pathan++;
        }        
    }
     if (tiger > pathan)
        {
            printf("Tiger");
        }
    else if (tiger < pathan)
        {
            printf("Pathan");
        }
    else
        {
             printf("Draw");
        }
    return 0;
}