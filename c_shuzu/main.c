#include <stdio.h>


//初始化*
//int main()
//{
//    int nums[5];
//    printf("%d\n", nums[0]);
//    printf("%d\n", nums[1]);
//    printf("%d\n", nums[2]);
//    printf("%d\n", nums[3]);
//    printf("%d\n", nums[4]);
//    return 0;

//}


//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//    int i = 0;
//    int tmp = 0;
//    for(i = 0;i < sz - 1;i++)
//    {
//        int j = 0;
//        for(j = 0;j < sz-1-i;j++)
//        {
//            if(arr[j] > arr[j+1])
//            tmp = arr[j];
//            arr[j] = arr[j+1];
//            arr[j+1] = tmp;
//        }
//    }
//}
//int main()
//{
//    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    bubble_sort(arr,sz);
//    for(int i = 0;i<10;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//初始化数组全为零init()，打印每个元素。数组元素逆置reverse

//void init(int arr[], int sz)
//{
//    int i=0;
//    for(i = 0;i <sz;i++)
//    {
//        arr[i] = 0;
//    }
//}
void print(int arr[], int sz)
{
    int i = 0;
    for(i = 0;i< sz;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int sz)
{
   int left = 0;
   int right = sz-1;
   while(left<right)
   {
       int tmp = arr[left];
       arr[left] = arr[right];
       arr[right] = tmp;
       left++;
       right--;
   }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof (arr[0]);
    reverse(arr, sz);
    print(arr, sz);
    init(arr, sz);
    print(arr, sz);

    return 0;
}


//交换数组内容

//void print(int arr1[], int sz)
//{
//    int i = 0;
//        for(i = 0;i< sz;i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//        printf("\n");
//}
//int main()
//{
//    int arr1[] = {1,2,3,4,5};
//    int arr2[] = {6,7,8,9,10};
//    int sz = sizeof (arr1)/sizeof (arr1[1]);
//    int i= 0;
//    for(i = 0;i<sz;i++)
//    {
//        int tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;

//    }
//     print(arr1,sz);
//    return 0;
//}






