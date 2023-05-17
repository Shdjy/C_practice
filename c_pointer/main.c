#include <stdio.h>

//指针数组练习
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址
//思考输出结果
//int main()
//{
//    int a[] = {1,2,3,4};
//    printf("%d\n",sizeof(a));    //16
//    printf("%d\n",sizeof(a+0));  //4/8
//    printf("%d\n",sizeof(*a));   //4
//    printf("%d\n",sizeof(a+1));  //4/8
//    printf("%d\n",sizeof(a[1])); //4
//    printf("%d\n",sizeof(&a));   //4/8
//    printf("%d\n",sizeof(*&a));  //16
//    printf("%d\n",sizeof(&a+1)); //4/8
//    printf("%d\n",sizeof(&a[0]));//4/8
//    printf("%d\n",sizeof(&a[0]+1));//4/8
//    return 0;
//}

//int main()
//{
//    char arr[] = {'a','b','c','d','e','f'};
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(arr+0));
//    printf("%d\n", sizeof(*arr));
//    printf("%d\n", sizeof(arr[1]));
//    printf("%d\n", sizeof(&arr));
//    printf("%d\n", sizeof(&arr+1));
//    printf("%d\n", sizeof(&arr[0]+1));

//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(arr+0));
//    printf("%d\n", strlen(*arr));
//    printf("%d\n", strlen(arr[1]));
//    printf("%d\n", strlen(&arr));
//    printf("%d\n", strlen(&arr+1));
//    printf("%d\n", strlen(&arr[0]+1));

//    char arr[] = "abcdef";
//    printf("%d\n", sizeof(arr));
//    printf("%d\n", sizeof(arr+0));
//    printf("%d\n", sizeof(*arr));
//    printf("%d\n", sizeof(arr[1]));
//    printf("%d\n", sizeof(&arr));
//    printf("%d\n", sizeof(&arr+1));
//    printf("%d\n", sizeof(&arr[0]+1));
//    printf("%d\n", strlen(arr));
//    printf("%d\n", strlen(arr+0));
//    printf("%d\n", strlen(*arr));
//    printf("%d\n", strlen(arr[1]));
//    printf("%d\n", strlen(&arr));
//    printf("%d\n", strlen(&arr+1));
//    printf("%d\n", strlen(&arr[0]+1));


//    char *p = "abcdef";
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p+1));
//    printf("%d\n", sizeof(*p));
//    printf("%d\n", sizeof(p[0]));
//    printf("%d\n", sizeof(&p));
//    printf("%d\n", sizeof(&p+1));
//    printf("%d\n", sizeof(&p[0]+1));
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p+1));
//    printf("%d\n", strlen(*p));
//    printf("%d\n", strlen(p[0]));
//    printf("%d\n", strlen(&p));
//    printf("%d\n", strlen(&p+1));
//    printf("%d\n", strlen(&p[0]+1));


//    int a[3][4] = {0};
//    printf("%d\n",sizeof(a));
//    printf("%d\n",sizeof(a[0][0]));
//    printf("%d\n",sizeof(a[0]));
//    printf("%d\n",sizeof(a[0]+1));
//    printf("%d\n",sizeof(*(a[0]+1)));
//    printf("%d\n",sizeof(a+1));
//    printf("%d\n",sizeof(*(a+1)));
//    printf("%d\n",sizeof(&a[0]+1));
//    printf("%d\n",sizeof(*(&a[0]+1)));
//    printf("%d\n",sizeof(*a));
//    printf("%d\n",sizeof(a[3]));
//    return 0;
//}




//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//指针类型决定了指针运算；
//struct Test
//{
// int Num;
// char *pcName;
// short sDate;
// char cha[2];
// short sBa[4];
//}*p;

//int main()
//{
// printf("%p\n", p + 0x1);
// printf("%p\n", (unsigned long)p + 0x1);
// printf("%p\n", (unsigned int*)p + 0x1);
// return 0;
//}


//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int *ptr1 = (int *)(&a + 1);
//    int *ptr2 = (int *)((int)a + 1);
//    printf( "%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}

//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//！！！！初始化用的都好表达式
//    int *p;
//    p = a[0];
//    printf( "%d", p[0]);
// return 0;
//}


//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;        //int(*)[5];//有类型差异但是会赋过去
//    printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;         //*(*(p+4)+2)
//}


//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int *ptr1 = (int *)(&aa + 1);
//    int *ptr2 = (int *)(*(aa + 1));
//    printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

//int main()
//{
// char *a[] = {"work","at","alibaba"};
// char**pa = a;
// pa++;
// printf("%s\n", *pa);
// return 0;
//}


//int main()
//{
// char *c[] = {"ENTER","NEW","POINT","FIRST"};
// char**cp[] = {c+3,c+2,c+1,c};
// char***cpp = cp;
// printf("%s\n", **++cpp);
// printf("%s\n", *--*++cpp+3);
// printf("%s\n", *cpp[-2]+3);   //**(cpp-2)+3
// printf("%s\n", cpp[-1][-1]+1);  //*(*(cpp-1)-1)+1
// return 0;
//}

//指针编程题
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在.
//小于O（n）
//123
//456
//789

#include <windows.h>
//int find_num (int arr[3][3], int* r, int* c, int k)
//{
//    int x = 0;
//    int y = *c -1;
//    while(x<*r && y >= 0)
//    {
//        if(arr[x][y] < k)
//        {
//            x++;
//        }
//        else if(arr[x][y] > k)
//        {
//            y--;
//        }
//        else
//        {
//            *r = x;
//            *c = y;
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//    int k = 7;
//    int x = 3;
//    int y = 3;
//    int ret = find_num(arr, &x, &y, k);
//    if(ret == 1)
//    {
//        printf("找到了\n");
//        printf("下标为：%d %d",x, y);
//    }
//    else
//    {
//        printf("未找到");
//    }
//    return 0;
//}


//实现一个函数，可以左旋字符患史的k企字符。例如:ABCD左旋一个字符得到BCDA,ABCD左旋两个字符得到cDAB
#include <string.h>
//void left_rortate(char* str, int k)
//{
//    int i = 0;
//    int j = 0;
//    int len = strlen(str);
//    for(i= 0;i<k;i++)
//    {
//        char tmp = *str;
//        for(j=0;j<len-1;j++)
//        {
//            *(str+j) = *(str+j+1);
//        }
//        *(str+len-1) = tmp;
//    }
//}
//int main()
//{
//    char arr[] = "ABCDEF";
//    int k = 2;
//    left_rortate(arr, k);
//    printf("%s", arr);
//    return 0;
//}

//三步旋转
//void reverse(char* left, char* right)
//{
//    while(left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }

//}
//void left_rortate(char* str, int k)
//{
//    int len = strlen(str);
//    reverse(str, str+k-1);
//    reverse(str+k, str+len-1);
//    reverse(str, str+len-1);
//}
//int main()
//{
//    char arr[] = "ABCDEF";
//    int k = 2;
//    left_rortate(arr, k);
//    printf("%s", arr);
//    return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//int is_left_rortate(char* str1, char* str2)
//{
//    int i = 0;
//        int j = 0;
//        int len = strlen(str1);
//        for(i= 0;i<len;i++)
//        {
//            char tmp = *str1;
//            for(j=0;j<len-1;j++)
//            {
//                *(str1+j) = *(str1+j+1);
//            }
//            *(str1+len-1) = tmp;
//            if(strcmp(str1, str2) ==0)
//            {
//                return 1;
//            }
//        }
//        return 0;
//}

//用库函数
int is_left_rortate(char* str1, char* str2)
{
    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }
    int len = strlen(str1);
    strncat(str1,str1,len);
    char* ret = strstr(str1,str2);
    if(ret == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    char arr1[20] = "ABCDEF";
    char arr2[] = "DEFABC";
    int ret = is_left_rortate(arr1,arr2);
    if(ret ==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
