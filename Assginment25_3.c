#include<stdio.h>

int CountCapital(char *str)
{
    int iCntCap = 0 , iCntSmall= 0;

    while(*str != '\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCntCap++;
        }
        else
        {
            iCntSmall++;
        }
        *str++;
    }
    return iCntSmall-iCntCap;
}
int main()
{
     char Arr[20];
     int iRet = 0;

     printf("Enter String : \n");
     scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("%d",iRet);

    return 0;
}