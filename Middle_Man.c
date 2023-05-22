#include<stdio.h>
#include<string.h>
int main()
{

    int count,i;
    scanf("%d",&count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d ",&arr[i]);
    }
    for (int i = 0; i < count ; i++)
    {
        for (int j = 0; j < count ; j++)
        {
            // printf("%d %d \n",arr[i] ,arr[j]);
            if (  arr[i] < arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }            
        }
   
    
    }   
    
        int vlue= count -1;
        if (count % 2==0)
        {   
            
            printf("%d %d ",arr[vlue/2],arr[vlue/2+1]);
        }else{
            printf("%d ",arr[(vlue+1)/2]);
        }
        

    return 0;
}