#include <stdio.h>
#include "stdlib.h"
#include "math.h"
////    普通查找
int Sequential_Search1(int *a,int n, int k){
   a[n]=k;
   int i=0;
   while(a[i]!=k)
       i++;
   return i;
}

 ////  二分查找函数
int Binary_Search(int arr[], int len, int key) // 折半查找法（二分法）
{
    int low = 0;        // 定义初始最小
    int high = len - 1; // 定义初始最大
    int mid;            // 定义中间值
    while (low <= high)
    {
        // mid=(low+high)/2;//可能会溢出
        mid = low + (high - low) / 2; // 找中间值
        if (key == arr[mid])          // 判断min与key是否相等
            return mid;
        else if (key > arr[mid]) // 如果key>mid  则新区间为[mid+1,high]
            low = mid + 1;
        else // 如果key<mid  则新区间为[low,mid-1]
            high = mid - 1;
    }
    return -1; // 如果数组中无目标值key，则返回 -1 ；
}

// ////    插值查找

int InsertValue_Search(int arr[], int len, int key) // 折半查找法（二分法）
{
   int low = 0;        // 定义初始最小
   int high = len - 1; // 定义初始最大
   int mid;            // 定义中间值
   while (low <= high)
   {
           // mid=(low+high)/2;//可能会溢出
           mid = low + (high - low) * (key - arr[low]) / (arr[high] - arr[low]); // 找中间值
           if (key == arr[mid])          // 判断min与key是否相等
           return mid;
           else if (key > arr[mid]) // 如果key>mid  则新区间为[mid+1,high]
           low = mid + 1;
           else // 如果key<mid  则新区间为[low,mid-1]
           high = mid - 1;
   }
   return -1; // 如果数组中无目标值key，则返回 -1 ；
}
////     函数指针
//int max(int x, int y)
//{
//    return x > y ? x : y;
//}



//// 回调函数
//void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
//{
//    for (size_t i=0; i<arraySize; i++)
//        array[i] = getNextValue();
//}


//// 获取随机值
//int getNextRandomValue(void)
//{
//    return rand();
//}


//  冒泡排序
// void Bubble_Sort(int a[],int len)
// {
//    int i,j,temp;
//    for ( i = 0; i < len-1; i++) {
// //        int min=i;
//        for (j = 0; j < len-1-i; j++) {
//            if(a[j]>a[j+1]){
//                temp = a[j+1];
//                a[j+1]=a[j];
//                a[j]=temp;
//            }
//        }
//    }
// }


//   选择排序
// void Selection_Sort(int a[], int len)
// {
//    int i, j, temp;

//    for (i = 0; i < len - 1; i++)
//    {
//        int min = i;                  // 记录最小值，第一个元素默认最小
//        for (j = i + 1; j < len; j++) // 访问未排序的元素
//        {
//            if (a[j] > a[min]) // 找到目前最小值
//            {
//                min = j; // 记录最小值
//            }
//        }
//        if (min != i)
//        {
//            temp = a[min]; // 交换两个变量
//            a[min] = a[i];
//            a[i] = temp;
//        }
//        /* swap(&a[min], &a[i]);  */ // 使用自定义函数交換
//    }
// }
//

////     插入排序
// void Insertion_Sort(int a[], int len){
//    int i,j,temp;
//    for (i=1;i<len;i++){
//        temp = a[i];
//        for (j=i;j>0 && a[j-1]<temp;j--)
//            a[j] = a[j-1];
//        a[j] = temp;
//    }
// }
//
//

////  希尔排序
// void Shell_Sort(int arr[], int len) {
//    int gap, i, j;
//    int temp;
//    for (gap = len >> 1; gap > 0; gap = gap >> 1){
//        for (i = gap; i < len; i++) {
//            temp = arr[i];
//            for (j = i - gap; j >= 0 && arr[j] < temp; j -= gap){
//                arr[j + gap] = arr[j];
//            }
//            arr[j + gap] = temp;
//        }
//    }
// }
int main()
{
//        训练排序查找插入删除等

//    顺序表查找
//    int a[]={23,5,3,2,24,6,76,34,21,65,0};//  a[10]为哨兵位
////    printf("%d\n",a[0]);
////    printf("%d\n",*a);
////    printf("%d",*a+1);
//    int k;
//    scanf("%d",&k);
//    a[10]=k;
//    int i,n;
//    i=0;
//    while (a[i]!=k){
//        i++;
////        break;
//    }
//    printf("%d",i);


int a[]={23,5,3,2,24,6,76,34,21,65};
// ////    int k=0;
// ////    scanf("%d",&k);
// ////    for (int i = 0; i < 11; i++) {
// ////        if(a[i]==k)
// ////            printf("%d",i);
// ////    }
int b;
//    b = BinSearch(a, 10, 24);
b = Binary_Search(a, 10, 2);
// b = InsertValue_Search(a, 10, 24);
   //    // b=Sequential_Search1(a,10,65);
if (b == -1)
    printf("not found");
else
    printf("%d\n", b);
   //    printf("%d\n",a);// 与&a相同
   //    printf("%d",&a);

   ////   有序顺序表查找  二分查找or折半查找and插值查找
   //    int array[10]={0,18,26,35,44,52,61,71,81,91};
   //    int k=0;
   //    scanf("%d",&k);
   //    int l = 1;
   //    int h = 10;
   //    int mid ;
   //    while(l<=h){
   //        mid=(l+h)/2;
   //        if(k<array[mid])
   //            h=mid-1;  //迭代
   //        else if(k>array[mid])
   //            l=mid+1;
   //        else
   //            break;
   //    }
   //    printf("%d",mid);
   ////    函数调用
   //    mid= Binary_Search(array,10,44);
   //    printf("%d",mid);
   //    mid= Chazhi_Search(array,10,18);
   //    printf("%d",mid);

   ////       函数指针的调用
   //    /* p 是函数指针 */
   //    int (* p)(int, int) = & max; // &可以省略
   //    int a, b, c, d;
   //    printf("请输入三个数字:");
   //    scanf("%d %d %d", & a, & b, & c);
   //    /* 与直接调用函数等价，d = max(max(a, b), c) */
   //    d = p(p(a, b), c);
   //    printf("最大的数字是: %d\n", d);

   ////    回调函数   即将函数指针作为某函数的参数
   //    int myarray[10];
   //    int  a=1;
   //    /* getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
   //    populate_array(myarray, 10, getNextRandomValue);//  函数名和变量相同  是一个代号，但可以视为一个地址
   //    printf("%d\n",getNextRandomValue);//与&get地址相同
   //    printf("%d\n",getNextRandomValue());
   //    printf("%d\n",&getNextRandomValue);
   //    printf("%d\n",*getNextRandomValue);//与get相同
   //    for(int i = 0; i < 10; i++) {
   //        printf("%d\t ", myarray[i]);
   //    }
   //    printf("%d\n",myarray[0]);//与*myarray相同  均为首个元素
   //    printf("%d\n",myarray);//与&myarray相同  为首元素地址
   //    printf("%d\n",*myarray);
   //    printf("%d\n",&myarray);
   //    printf("\n");

   ////    指向指针的指针
   //    int  V;
   //    int  *Pt1;
   //    int  **Pt2;
   //    V = 100;
   //    /* 获取 V 的地址 */
   //    Pt1 = &V;
   //    /* 使用运算符 & 获取 Pt1 的地址 */
   //    Pt2 = &Pt1;
   //
   //    /* 使用 pptr 获取值 */
   //    printf("var = %d\n", V );//100
   //    printf("Pt1 = %p\n", Pt1 );//0061FF18
   //    printf("*Pt1 = %d\n", *Pt1 );//100
   //    printf("Pt2 = %p\n", Pt2 );//0061FF14
   //    printf("**Pt2 = %d\n", **Pt2);//100

   ////    排序算法
    //   int a[]={3,4,6,2,1,6,8,9,0,7};
    //   int len = (int) sizeof(a) / sizeof(*a);
    //   printf("%d\n",len);
    // //   Bubble_Sort(a, len);
    // //   Selection_Sort(a,len);
    // // Insertion_Sort(a,len);
    //   Shell_Sort(a,len);
    
    //   for (int i = 0; i < len; i++)
    //       printf("%d ", a[i]);
   return 0;
}