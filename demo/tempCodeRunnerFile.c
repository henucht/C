
// int BinSearch(int arr[],int len,int key)                          //折半查找法（二分法）
// {
// 	int low=0;                         //定义初始最小
// 	int high=len-1;                 //定义初始最大
// 	int mid;                            //定义中间值
// 	while(low<=high)
// 	{
// 		//mid=(low+high)/2;//可能会溢出
// 		mid=low+（high-low)/2;              //找中间值
// 		if(key==arr[mid])               //判断min与key是否相等
// 			return mid;    
// 		else if(key>arr[mid])             //如果key>mid  则新区间为[mid+1,high]
// 			low=mid+1;
// 		else                                       //如果key<mid  则新区间为[low,mid-1]
// 			high=mid-1;
// 	}
// 	return -1;                             //如果数组中无目标值key，则返回 -1 ；
// }