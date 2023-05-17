#include <stdio.h>

//int main()
//{
// char c = 1;
// printf("%llu\n", sizeof(c));
// printf("%llu\n", sizeof(+c));
// printf("%llu\n", sizeof(-c));
// printf("%llu\n", sizeof(!c));
// return 0;
//}



//int fun()
//{
//     static int count = 1;
//     return ++count;
//}
//int main()
//{
//     int answer;
//     answer = fun() - fun() * fun();//调用顺序不停结果不同
//     printf( "%d\n", answer);//输出多少？
//     return 0;
//}


//计算某数二进制补码1的个数
//写一个代码判断是不是2的n次方（只有一个1）
//n&（n-1）

//int Numberof1(int n)

//{
//    int count = 0;
//    while(n != 0)
//    {
//        n = n&(n-1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int n = 10;
//    printf("%d ",Numberof1(n));
//    return 0;
//}

//求两个数二进制数位不同的的个数（1，一一比较。2，异或）
//int main()
//{
//    int a = 15;
//    int b = 14;
//    int i = 0;
//    int count = 0;
//    for(i = 0;i<32;i++)
//    {
//        if(((a>>i) & 1) != ((b>>i) & 1))
//        {
//            count++;
//        }
//    }
//    printf("%d ",count);
//    return 0;
//}

//int main()
//{
//    int a = 15;
//    int b = 14;
//    int count =0;
//    int c = a^b;
//    int i = 0;
//    for(i = 0; i<32; i++)
//    {
//        if(((c>>i) & 1) ==1)
//        {
//            count++;
//        }
//    }
//    printf("%d ",count);
//    return 0;
//}


//获取一个数二进制之中奇数位和偶数位
//int main()
//{
//    int n= 0;
//    scanf("%d",&n);
//    int i = 0;
//    //打印偶数
//    for(i=31;i>=1;i-=2)
//    {
//        printf("%d ", ((n>>i) & 1));
//    }
//    printf("\n");
//    //打印奇数
//    for(i = 30;i >= 0;i-=2)
//    {
//        printf("%d ",((n>>i) & 1));
//    }
//    printf("\n");
//    return 0;
//}


//交换两个数不用的三个变量
int main()
{
    int a = 2;
    int b = 3;
    printf("%d %d\n", a, b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d %d ", a, b);
    return 0;
}











