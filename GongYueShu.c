#include <stdio.h>

int main()
{
    int m,n,GCD;   //声明需要输入的两个变量m，n，由于0<m,n<2^31,可以用int类型表示
                   //声明一个变量GCD作为最大公约数(Greatest Common Divisor)来进行后面的运算
    while(1)       //使用 while 循环验证用户的输入是否满足要求，满足要求则进入运算
    {
    printf("Please enter two positive integers:\n");  //提示用户输入两个正整数
    scanf("%d %d",&m,&n); //读取用户输入
        if (m > 0 && m < 2147483648 && n > 0 && n < 2147483648) //m，n要同时满足>0且<2^31
        {
            break; //满足条件则跳出循环
        }
        else
        {
            printf("Wrong numbers,try again\n");  //不满足条件则提示用户重新输入，再次进入循环
        }
    }

    for(GCD=(m<n?m:n);GCD>=1;GCD--) //将GCD初始化为用户输入的两数中较小的一个
    {                               //利用 for循环 逐个验证，当某数可以同时被两数整除时，该数字则为两数的最大公约数
        if(m % GCD==0 && n % GCD==0)
        {
            printf("The greatest common divisor is %d",GCD);  //打印出求得的最大公约数
            return 0;
        }
    }
return 0;
}