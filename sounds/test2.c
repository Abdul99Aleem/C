#include<stdio.h>
int main ()
{
    int d,m,y;
    printf("\nEnter Date");
    scanf("%d%d%d",&d,&m,&y);
    if ((d==29)&&(m==2)&&(y%4==0))
    {
        d=1;
        m=3;
    }
    else if ((d == 28) && (m == 2) && (y % 4 != 0))
    {
        d = 1;
        m = 3;
    }
    else if((d==31)&&(m==12))
    {
        d=1;
        m=1;
        y++;
    }
    else if((d==31)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
    {
        d=1;
        m++;
    }
    else if ((d == 30) && ((m == 4) || (m == 6) || (m == 9) || (m == 11)))
    {
        d = 1;
        m++;
    }
    else 
        d++;
    printf("\n%d-%d-%d",d,m,y);


return 0;
}
