#include<stdio.h>
#include<stdlib.h>
void fun(int a, char b)
{
    printf("do nothing");
}
int function(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    char ch;
    a=2,b=3,c=4;
    while(b--)
    {
        fun(a,ch);        
        while(a--)
        {
            if(a>2)
            {
                for(int i=0;i<c;i++)
                {
                    switch(i)
                    {
                        case 0: b = function(a,b);
                                break;
                        case 1: fun(b,ch);
                                break;
                        default :  break;
                    }
                }
            }
        }
    }
}