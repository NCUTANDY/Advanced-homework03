#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	double money;
    double profit , profit1 , profit3 , profit4 , profit5 , profit7 ;
    printf ("您的利潤為：" ) ; 
    scanf ( "%lf",& money ) ;
    profit = 100000 * 0.1 ;
    profit1 = profit+100000 * 0.075 ;
    profit3 = profit1 + 200000 * 0.05 ;
    profit4 = profit3 + 200000 * 0.03 ;
    profit5 = profit4 + 400000 * 0.015 ;
    if ( money <= 100000 )
    {
	profit7=money*0.1;
	printf("您的獎金為：%1f\n",profit7);
	}
	else if ( money <= 200000 )
    {
	profit7=profit3+(money-200000)*0.075;
	printf("您的獎金為：%1f\n",profit7);
	}
	else if ( money <= 600000 )
    {
	profit7=profit3+(money-400000)*0.03;
	printf("您的獎金為：%1f\n",profit7);
	}
	else if ( money <= 1000000 )
    {
	profit7=profit4+(money-600000)*0.015;
	printf("您的獎金為：%1f\n",profit7);
	}
	else if ( money > 1000000 )
    {
	profit7=profit5+(money-1000000)*0.01;
	printf("您的獎金為：%1f\n",profit7);
	}
    system("pause");
    return 0;
	
} 
