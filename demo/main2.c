#include<stdio.h>
#include "math.h"

////    ʹ�ú�������������ֵ
//int swap(double *a, double *b){
//    double temp = 0;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//}


////     �ݹ鷨��쳲���������
//int fei(int n){
//    if(n==1)
//        return 1;
//    else if(n==2)
//        return 1;
//    else
//        return fei(n-1)+fei(n-2);
//}

//
////   �ݹ鷨��׳�
//int mul(int n)
//{
//    int num = 0;
//    if(n>0){
//        if(n==1)
//            num = 1;
//        else
//            num = n*mul(n-1);
//    }
//    else
//        num = -1;
//    return num;
//}
//

////    ����������

int main()
{
    double b;
    b = sqrt(15);
    printf("%d\n", b);
    ////    �� 1��2��3��4 �ĸ����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
    //    for(int i=1;i<5;i++)
    //        for(int j=1;j<5;j++)
    //            for(int k=1;k<5;k++)
    //                if(i!=k && j!=k && i!=j)
    //                    printf("%d %d %d\n",i,j,k);

    ////    ����������ֵ  �ֱ��������ʱ����������ʱ�����Լ��Ӻ�������
    ////    ����ʱ����������
    //    double a=3.7,b=4.9,temp;
    //    printf("%.2lf %.2lf\n",a,b);
    //    temp = a;
    //    a = b;
    //    b = temp;
    //    printf("%.2lf %.2lf\n",a,b);
    ////    ����ʱ����
    //    a = a+b;
    //    b = a-b;// b=a+b-b=a
    //    a = a-b;// a=a+b-a=b
    //    printf("%.2lf %.2lf",a,b);
    //    return 0;
    //     ��������
    //    swap(&a,&b);
    //    printf("%.2lf %.2lf",a,b);

    ////    �ж�����ż��
    //    int num = 6;
    //    if(num&1)//if(num%2==0��
    ////        ����num = 5  ->  (00000101)B  1  ->  (00000001)B  &λ�����  ���ֻ�����һλ��ͬ λ��֮�����1
    ////        ����λ��| λ���^ �Լ�������ȡ��~   ������������<< >>������2 a<<2
    //
    //        printf("����\n");
    //    else
    //        printf("ż��\n");
    //    printf("%d\n",~-4);//ȡ��4��-5  ȡ��-4��3

    ////    �ж������������ֵ
    //    double n1,n2,n3,max;
    //    scanf("%lf %lf %lf",&n1,&n2,&n3);
    //    max = n1;
    //    if(n2 > max)
    //        max = n2;
    //    if(n3>max)
    //        max = n3;
    //    printf("%lf",max);
    ////    ��Ԫ���ʽ   max =  a > b ? ( a > c ? a : c ) : ( b  > c ? b : c);  ���a>b ��ִ��( a > c ? a : c )  ��ִ֮�к�һ��
    ////    �궨��   #define MAX(x,y) ((x>y)?(x):(y))  Ƕ��ʹ��MAX(a, MAX(b, c))  ������bc���� ֮����a�Ƚ�

    ////    ����ʮλ쳲���������
    ////    ˳��
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
    //    �ݹ鷨��쳲���������
    //    int f = fei(10);
    //    printf("%d",f);

    ////�����Լ��
    //    int a=24,b=6;
    //    int num;
    ////    for(int i=1;i <= a && i <= b; ++i){
    ////        if(a%i==0&&b%i==0)
    ////            num = i;
    ////    }
    ////շת��������Լ������ʵ�ֺͳ�ʵ��
    //    num = a%b;
    //    while (num!=0)
    //    {
    //        a = b;
    //        b = num;
    //        num = a%b;
    //    }
    //    printf("%d",b);

    ////    �ڶ���д��
    //    while (num!=0)
    //    {
    //        num = a%b;
    //        a = b;
    //        b = num;
    //    }
    //    printf("%d",a);

    ////     ����С������   �����˻��������Լ��
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

    //// ��׳�  �ݹ鷨
    //    int n = 3,x;
    //    x = mul(n);
    //    printf("%d",x);

    ////    �ж�������Ϊ��λ��
    //    int num;
    //    int count=0;
    //    scanf("%d",&num);
    //    while(num!=0){
    //        num = num/10;
    //        ++count;
    //    }
    //    printf("%d",count);

    ////  ��x^n    math.h ->pow(n,e)
    //    double num = 2.15,result=1;
    //    int exponent=2;
    //
    //    for(int i=0;i<exponent;i++){
    //         result=num*result;
    //    }
    //    printf("%f",result);

    ////   �ж��Ƿ�������
    //    int num=59,prim=1;
    ////    for (int i = 2; i < num/2; i++) {
    ////    for (int i = 2; i < num; i++) {
    //    for (int i = 2; i < sqrt(num); i+=2) {   //
    //        if(num%i==0){
    //            prim=0;
    //            break;
    //        }
    //    }
    //    printf("%d",prim);

    ////    ������֮�����������
    //
    //    int a =2,b=60,prim,count;
    //    int i,j;
    //    for (i=a;i<=b;i++)
    ////    for(int i=a;count<15;i++)   //    ��ǰn������
    //    {
    ////        prim = 1;
    //        //    for (int i = 2; i < num/2 +1; i++) {
    //        for (j = 2; j < i; j++) {
    //    //    for (int i = 2; i < sqrt(i)+1; i++) {
    //            if(i%j==0){
    //                prim=0;
    //                break;
    //            }
    //            else
    //                prim=1;
    //        }
    //        if(j>=i)//�ϲ������ѭ����j=i��ִ�д˲�
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

    ////   �������飬������ƽ��ֵ
    //    int i;
    //    int a[10]={0};
    //    for (i=0;i<10;i++) {
    //        scanf("%d",&a[i]);
    //    }
    //    for (i=0;i<10;i++) {
    //        printf("%d\t",a[i]);
    //    }

    ////      ��������Լ�ƽ��ֵ
    //    int a[10]={10,10,5,1,5,5,5,1,1,1};
    //    int sum=0;
    //    double Average=0;
    //    for(int i=0;i<10;i++)
    //    {
    //        sum+=a[i];
    //    }
    //    Average=sum/10.0;//�����10  ��ᱻǿ������ת��
    //    printf("%d  %lf",sum,Average);

    ////      ˮ�ɻ���
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

    ////    ��1+2!+3!+...+20!�ĺ͡�
    //    int i;
    //    long long sum,mix;
    //    sum=0,mix=1;
    //    for(i=1;i<=20;i++)
    //    {
    //        mix=mix*i;
    //        sum=sum+mix;
    //    }
    //    printf("%d\n",sum);

    return 0;
}