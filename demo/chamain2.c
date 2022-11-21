#include <stdio.h>
#include "stdlib.h"
#include "math.h"
////    使用函数交换变量的值
// int swap(double *a, double *b){
//     double temp = 0;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

////     递归法求斐波那契数列
// int fei(int n){
//     if(n==1)
//         return 1;
//     else if(n==2)
//         return 1;
//     else
//         return fei(n-1)+fei(n-2);
// }

//
////   递归法求阶乘
// int mul(int n)
//{
//     int num = 0;
//     if(n>0){
//         if(n==1)
//             num = 1;
//         else
//             num = n*mul(n-1);
//     }
//     else
//         num = -1;
//     return num;
// }
//

////    求素数函数

int main()
{
    ////    有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
    //    for(int i=1;i<5;i++)
    //        for(int j=1;j<5;j++)
    //            for(int k=1;k<5;k++)
    //                if(i!=k && j!=k && i!=j)
    //                    printf("%d %d %d\n",i,j,k);

    ////    交换两数的值  分别包括有临时变量和无临时变量以及子函数交换
    ////    有临时变量交换。
    //    double a=3.7,b=4.9,temp;
    //    printf("%lf %.2lf\n",a,b);
    //    temp = a;
    //    a = b;
    //    b = temp;
    //    printf("%.2lf %.2lf\n",a,b);
    ////    无临时变量
    //    a = a+b;
    //    b = a-b;// b=a+b-b=a
    //    a = a-b;// a=a+b-a=b
    //    printf("%.2lf %.2lf",a,b);
    //    return 0;
    //     函数交换
    //    swap(&a,&b);
    //    printf("%.2lf %.2lf",a,b);

    ////    判断奇数偶数
    //    int num = 6;
    //    if(num&1)//if(num%2==0）
    ////        假设num = 5  ->  (00000101)B  1  ->  (00000001)B  &位与符号  最多只有最后一位相同 位与之后输出1
    ////        还有位或| 位异或^ 以及二进制取反~   还有左翼右翼<< >>如左移2 a<<2
    //
    //        printf("奇数\n");
    //    else
    //        printf("偶数\n");
    //    printf("%d\n",~-4);//取反4是-5  取反-4是3

    ////    判断三个数的最大值
    //    double n1,n2,n3,max;
    //    scanf("%lf %lf %lf",&n1,&n2,&n3);
    //    max = n1;
    //    if(n2 > max)
    //        max = n2;
    //    if(n3>max)
    //        max = n3;
    //    printf("%lf",max);
    ////    三元表达式   max =  a > b ? ( a > c ? a : c ) : ( b  > c ? b : c);  如果a>b 则执行( a > c ? a : c )  反之执行后一句
    ////    宏定义   #define MAX(x,y) ((x>y)?(x):(y))  嵌套使用MAX(a, MAX(b, c))  即先求bc大者 之后与a比较

    ////    计算十位斐波那契数列
    ////    顺推
    //    int f[10]={0};
    //    f[0]=1;
    //    f[1]=1;
    //    int i=10;
    //    for (int j = 2; j < i; j++) {
    //        f[j] = f[j-1]+f[j-2];
    //    }
    //    for (int j = 0; j <10 ; j++) {
    //        printf("%d\t",f[j]);
    //    }
    //    递归法求斐波那契数列
    //    int f = fei(10);
    //    printf("%d",f);

    ///求最大公约数
    //    int a=24,b=6;
    //    int num;
    ////    for(int i=1;i <= a && i <= b; ++i){
    ////        if(a%i==0&&b%i==0)
    ////            num = i;
    ////    }
    ////辗转相除求最大公约数减法实现和除实现
    //    num = a%b;
    //    while (num!=0)
    //    {
    //        a = b;
    //        b = num;
    //        num = a%b;
    //    }
    //    printf("%d",b);

    ///    第二种写法
    //    while (num!=0)
    //    {
    //        num = a%b;
    //        a = b;
    //        b = num;
    //    }
    //    printf("%d",a);

    ///     求最小公倍数   两数乘积除以最大公约数
    //    int a = 18,b = 25;
    //    int mul = a*b;
    //    int num = 0,x=0;
    //    num = a%b;
    //    while(num!=0){
    //        a=b;
    //        b=num;
    //        num=a%b;
    //    }
    //    x = mul/b;
    //    printf("%d",x);

    /// 求阶乘  递归法
    //    int n = 3,x;
    //    x = mul(n);
    //    printf("%d",x);

    ///    判断输入数为几位数
    //    int num;
    //    int count=0;
    //    scanf("%d",&num);
    //    while(num!=0){
    //        num = num/10;
    //        ++count;
    //    }
    //    printf("%d",count);

    ///  求x^n    math.h ->pow(n,e)
    //    double num = 2.15,result=1;
    //    int exponent=2;
    //
    //    for(int i=0;i<exponent;i++){
    //         result=num*result;
    //    }
    //    printf("%f",result);

    //    判断是否是素数
    //    int num=6,prim=0;
    // //    for (int i = 2; i < num/2; i++) {
    //    for (int i = 2; i < num; i++) {
    // //    for (int i = 2; i < sqrt(num); i+=2) { 
    //     // sqrt返回的是double类型  
    //        if(num%i==0){
    //            prim=1;
    //            break;
    //        }
    //    }
    //    printf("%d", prim);

    ////    求两数之间的所有素数
    //
    //    int a =2,b=60,prim=0,count;
    //    int i,j;
    //    for (i=a;i<=b;i++)
    ////    for(int i=a;count<15;i++)   //    求前n个素数
    //    {
    ////        prim = 1;
    //        //    for (int i = 2; i < num/2 +1; i++) {
    //        for (j = 2; j < i; j++) {
    //    //    for (int i = 2; i < sqrt(i)+1; i++) {
    //            if(i%j==0){
    //                prim=1;
    //                break;
    //            }
    //            else
    //                prim=0;
    //        }
    //        if(j>=i)//上步骤如果循环到j=i则执行此步
    //        {
    //            count++;
    //            printf("%d\t",i);
    //            if (count % 5 == 0)
    //                printf("\n");
    //
    //        }
    ////        if(prim==1)
    ////            printf("%d \t",i);
    //    }

    ////   输入数组，求数组平均值
    //    int i;
    //    int a[10]={0};
    //    for (i=0;i<10;i++) {
    //        scanf("%d",&a[i]);
    //    }
    //    for (i=0;i<10;i++) {
    //        printf("%d\t",a[i]);
    //    }

    ////      求数组和以及平均值
    //    int a[10]={10,10,5,1,5,5,5,1,1,1};
    //    int sum=0;
    //    double Average=0;
    //    for(int i=0;i<10;i++)
    //    {
    //        sum+=a[i];
    //    }
    //    Average=sum/10.0;//如果是10  则会被强制类型转换
    //    printf("%d  %lf",sum,Average);

    ////      水仙花数
    //    int i,bai,shi,ge,de,be;
    //    for (i = 100; i < 999; i++) {
    //        bai=i/100%10;
    //        de=i/100;
    //        shi=i/10%10;
    //        be=i/10;
    //        ge=i%10;
    //        if(i==(ge*ge*ge+shi*shi*shi+bai*bai*bai))
    //            printf("%d\n",i);
    ////        printf("%d %d %d %d %d\n",bai,shi,ge,de,be);
    //    }

    //// 2/1,3/2,5/3,13/8,21/13
    //    int a[22]={0};
    //    a[0]=1;
    //    a[1]=2;
    //    for (int i = 2; i < 22; i++) {
    //        a[i]=(a[i-1]+a[i-2]);
    //    }
    //    for (int i = 2; i < 22; i++) {
    //        printf("%d\t",a[i]);
    //    }

    ////    求1+2!+3!+...+20!的和。
    //    int i;
    //    long long sum,mix;
    //    sum=0,mix=1;
    //    for(i=1;i<=3;i++)
    //    {
    //        mix=mix*i;
    //        sum=sum+mix;
    //    }
    //    printf("%d\n",sum);

    return 0;
}