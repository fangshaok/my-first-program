#include <stdio.h>
#include<math.h>
void main()/*
{
	int n=1,i,y=2,t;
	double sum=0,x;
	printf("这是一个计算分数序列2/1,3/2,5/3,8/5,13/8,21/13...前二十项和的程序\n");
   for(i=1;i<=20;i=i+1)
   {
	   x=y/n;
	   t=n;
	   n=y;
	   y=t+y;
	   sum=sum+x;
   }
   printf("分数序列2/1,3/2,5/3,8/5,13/8,21/13...前二十项和为%g\n",sum);
}*///10
/*
{
	int n,i;
	double y=100,s=0;
	printf("这是个可以判断球第n次下落时反弹高度，共经过多少米的程序\n");
	printf("请输入次数\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i++)
	{
		s=s+y;
		y=y/2;
	}
	printf("球第%d次下落时反弹高度%g米，共经过%g米\n",n,y,s);
}*///11
/*
{
	int x=1,i;
	printf("这是一个计算猴子第一天摘了多少桃子的程序\n");
   for(i=2;i<=10;i=i++)
      x=2*(x+1);
   printf("第一天摘了%d个桃子\n",x);
}*///12


/*


{
	double a,x1,x2,y;
	printf("请输入a\n");
	scanf("%lf",&a);                                //输入想求的数
	x1=a/2;                                         //根的近似值
	do                                              //循环开始
	{
	    x2=(x1+a/x1)/2;                             //迭代法公式
		y=x1;                                       //替换第一个根后面做比较
	    x1=x2;                                      //替换方便下一步
	}
	while(fabs(y-x2)<0.00001);                      //判断前后两个根差的精度
		printf("%lf\n",x1);                         //输出后一个根
}
*///13
/*

{
	double x1,x2,y1,y2,t;
	x1=1.5;                                                           //近似根
	printf("这个程序是求方程2x^3-4x^2+3x-6=0在x=1.5附近的根\n");           
	do
	{
		y1=2*(x1*x1*x1)-4*(x1*x1)+3*x1;                               //原函数值
		y2=6*(x1*x1)-8*x1+3;                                          //原函数导函数值
		x2=x1-y1/y2;                                                  //牛顿迭代法求根公式
		t=x1;                                                          //替换变量
		x1=x2;                                                         //交换前后求得的根
	}while(fabs(t-x1)<0.000000001);                                    //结束条件
		printf("该方程在x=1.5附近的根为%lf\n",x1);                     //输出
}

	   *///14

{
	double a,b,x,a1,b1,y1;
	a=-10;
	b=10;
	printf("这个程序是用二分法求该方程在(-10,10)区间的根\n");
	do
	{
		x=(a+b)/2;
		a1=2*a*a*a-4*a*a+3*a-6;
		b1=2*b*b*b-4*b*b+3*b-6;
		y1=2*x*x*x-4*x*x+3*x-6;
		if(a1*y1<0)
		{
			b=x;
		}
	   else if(b1*y1<0)
		{
			a=x;
		}
	}while((fabs(a-b))<0.000001);
	printf("该方程在(-10,10)区间的根为(%lf,%lf)\n",a,b);
}