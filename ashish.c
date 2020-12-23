#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iDigit=0;          //to store the single digit
    int iRev=0;            //to store the reverse number

    while(iNo !=0)
    {
        iDigit = iNo %10;
        iRev= iRev * 10 + iDigit;
        iNo = iNo /10;

    }    

       return iRev;

}

//entry point function
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number\n");
    scanf("%d",&iValue);

    iRet=ReverseNumber(iValue);

    printf("ReverseNumber is :%d\n",iRet);

    return 0;         //sucess to OS



}
