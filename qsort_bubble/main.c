#include <stdio.h>
//定义一个比较函数，用于比较两个整数的大小，返回它们的差值
int int_cmp(const void * p1, const void * p2)
{
    return (*( int *)p1 - *(int *) p2);
}
//定义一个交换函数，用于交换两个指针所指向的内存区域，size为交换的字节数
void _swap(void *p1, void * p2, int size)
{
    int i = 0;
    for (i = 0; i< size; i++)
    {
         char tmp = *((char *)p1 + i); //用tmp保存p1所指向的第i个字节
        *(( char *)p1 + i) = *((char *) p2 + i); //将p2所指向的第i个字节赋值给p1所指向的第i个字节
        *(( char *)p2 + i) = tmp; //将tmp赋值给p2所指向的第i个字节
    }
}
//定义一个冒泡排序函数，用于对任意类型的数组进行排序，base为数组首地址，count为元素个数，size为元素大小，cmp为比较函数
void bubble(void *base, int count , int size, int(*cmp )(void *, void *))
{
    int i = 0;
     int j = 0;
    //外层循环控制排序趟数
    for (i = 0; i < count - 1; i++)
    {
         //内层循环控制每趟比较次数
        for (j = 0; j < count - 1 - i; j++)
         {
            //如果前一个元素大于后一个元素，则交换它们
            if (cmp((char *)base + j * size, (char *)base + (j + 1) * size) > 0)
            {
                _swap((char *)base + j * size, (char *)base + (j + 1) * size, size);
            }
         }
     }
}
int main()
{
    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
    int i = 0;
    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
    for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
   {
       printf( "%d ", arr[i]);
   }
    printf("\n");
    return 0;
}

