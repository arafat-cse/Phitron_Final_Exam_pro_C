#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
     int s,a,b,c;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d",&s,&a,&b,&c);
        int sum=a+b+c;
        int sametion=s-sum;
        printf("%d\n",sametion);
   
    
    }
    
   
   
   
    return 0;
}