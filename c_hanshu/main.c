#include <stdio.h>
#include <windows.h>

//交换两个数
//void swap(int* pa, int* pb)
//{
//    int temp = *pa;
//    *pa = *pb;
//    *pa = temp;
//}
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int a = 12;
//    int b = 13;
//    printf ("交换前：a=%d, b=%d", a, b);
//    swap (&a, &b);
//    printf("交换后：a=%d, b=%d", a, b);
//    return 0;
//}

//判断闰年1000年到2000年

//int run_year(int n)
//{
//    for (n = 1000;n <= 2000;n++)
//    {
//        if (((n%4 == 0) && (n%100 != 1)) || (n%400 == 0))
//            printf ("%d\n", n);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    run_year(i);
//    return 0;
//}


//函数实现九九乘法表


//void printf_table(int n)
//{
//    int i = 0;
//    for (i = 1;i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1;j <= i; j++)
//        {
//            printf("%d*%d=%d  ",i, j, i * j);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf_table(n);

//    return 0;
//}




//打印数的每一位

//void print_num(int n)
//{
//    if(n > 9)
//    {
//        print_num(n/10);
//    }
//     printf("%d   ", n%10);
//}
//int main()
//{
//    int i = 123456;
//    print_num(i);
//    return 0;
//}


//计算字符串的长度

//int my_strlen(char* str)
//{
//  if(*str != '\0')
//  {
//      return 1+ my_strlen(str + 1);
//  }
//  else
//      return 0;
//}
//int main()
//{
//    char arr[] = "sunhaodong";
//    printf("%d", my_strlen(arr));
//    return 0;
//}


//逆序输出字符串
//**********************************************
int my_strlen(char* str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
void swap_str(char* str)
{
    char tmp = *str;
    int len = my_strlen(str);
    *str = *(str + len -1);
    *(str + len -1) = '\0';
    if(my_strlen(str+1)>=2)
    {
        swap_str(str+1);
    }
    *(str+len-1) = tmp;
}
int main()
{
    char arr[] = "abcdef";
    swap_str(arr);
    printf("%s",arr);
    return 0;
}



//计算一个数各个数位的和

//int num_sum(int n)
//{
//    if(n>9)
//    {
//        return num_sum(n/10) +n%10;
//    }
//    return n;
//}
//int main()
//{
//    int i = 2023;
//    int sum = num_sum(i);
//    printf("%d", sum);
//    return 0;
//}


//n的k次方

//int n_fang(int n, int k )
//{
//    if(k > 0)
//    {
//        return n * n_fang(n, k-1);
//    }
//    return 1;
//}
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d %d",&n, &k);
//    int ret = n_fang(n,k);
//    printf("%d", ret);
//    return 0;
//}


//斐波那契数


//int fib(int n)
//{
//    if(n>=2)
//    {
//        return fib(n-1) + fib(n-2);
//    }
//    return 1;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int num = fib(n);
//    printf("%d",num);
//    return 0;
//}



//用递归求n的阶乘

//int fac(int n)
//{
//    if(n>1)
//    {
//    return n * fac(n - 1);
//    }
//}
//int main()
//{
//    int n = 4;
//    int num = fac(n);
//    printf("%d", num);
//    return 0;
//}

























