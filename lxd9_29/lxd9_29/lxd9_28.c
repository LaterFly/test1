#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void  printf_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		printf("%d",arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3 };
//	int arr2[] = { 4, 5, 6 };
//	int i = 0;
//	int t = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算个数
//	//for (i = 0; i < 3; i++)
//	//{
//	//	printf("%d  ",arr[i]);
//
//	//}
//	printf_arr(arr, sz);
//	printf("\n");
//	/*for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}*/
//	printf_arr(arr2, sz);
//
//	for (i = 0; i < 3;i++)
//	{
//		t = arr[i];
//		arr[i] = arr2[i];
//		arr2[i] = t;
//		
//	}
//	printf("\n");
//
//	/*for (i = 0; i < 3; i++)
//	{
//		printf("%d  ", arr[i]);
//     
//
//	 
//	 }*/
//	printf_arr(arr, sz);
//printf("\n");
//	/*for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr2[i]);
//
//	}*/
//	printf_arr(arr2, sz);
//	return 0;
//}
//int main(){
//	double sum = 0;
//	int i = 0;
//	int t = 1;
//	for (i = 1; i <= 100;i++){
//		sum = sum + t*(1.0 / i);
//		t = -t;
//	}
//	printf("%lf",sum);//注意浮点数
//	return 0;
//}
//
//
//#include<math.h>
//int main(){
//	int i = 0;
//	
//	for (i = 0; i <= 999; i++){
		//int t = i;
//		int count = 1;
//		int sum = 0;
//		while (t>9)//确定位数
//		{
//			count++;
//			t = t / 10;
//		}
//		t = i;
//		while (t)//计算
//		{
//			sum = sum + pow(t%10,count);
//			t = t / 10;
//		}
//		if (sum==i)
//		{
//			printf("%d\n",i);
//		}
//
//	}
//
//
//	return 0;
int main()
{
	int a = 0;
	int n = 0;
	int sun = 0;
	int t = 0;
	int i = 0;
	scanf("%d%d", &a, &n); 
	for (i = 0; i < n;i++){
		t = t * 10 + a;
		sun = sun + t;
	}
	printf("%d",sun);
	return 0;
}