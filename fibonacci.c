#include<stdio.h>
int main()
{
    int fn=0,sn=1,tn,num,i=2;  //Here i=2 because 0 & 1 is already declared in 'fn' and 'sn'
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

//TO DO IT IN FOR..LOOP
   for(int i=2;i<num;++i){
        tn = fn +sn;
        printf("\n%d",tn);
        fn=sn;
        sn=tn;
    }

//TO DO IT IN WHILE LOOP
while(i<number){
    tn=fn+sn;
    printf("%d\n",tn);
    fn=sn;
    sn-=tn;
    ++i;
}
