#include<stdio.h>
#include<string.h>
int main()
{
char str[1001];
int capital=0,smaill=0,space=0;
fgets(str,1001,stdin);
// printf("%s\n",str); //input for output
// printf("%zu\n",strlen(str)); //input lenth ber kra
for (int i = 0; i < strlen(str); i++)
{
    if (str[i]>='A' && str[i]<='Z')
    {
        capital ++;
    }
    else if (str[i]>='a' && str[i]<='z')
    {
        smaill ++;
    }else{
        space ++;
    }
    
}
printf(" Capital - %d\n",capital);
printf("Small - %d\n",smaill);
printf("Spaces - %d",space);

    return 0;
}