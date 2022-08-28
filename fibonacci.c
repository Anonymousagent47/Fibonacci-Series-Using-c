#include<stdio.h>
int main()
{
    int fn=0,sn=1,tn,num,i=2;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("%d\n%d\n",fn,sn);

    do
{
    tn=fn+sn;
    printf("%d\n",tn);
    fn=sn;
    sn=tn;
    ++i;
} while (i<num);
    return 0;
}