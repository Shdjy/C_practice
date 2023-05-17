#include <stdio.h>
#include <string.h>
#include <windows.h>
//求Sn=a+aa+aaa+aaaa
//int main()
//{
//    int a = 0;
//    int n = 0;
//    scanf("%d %d", &a, &n);
//    int sum =0;
//    int i = 0;
//    int ret = 0;
//    for(i = 0;i<n;i++)
//    {
//        ret = ret*10 +a;
//        sum +=ret;
//    }
//    printf("%d", sum);
//    return 0;
//}


//使用指针打印数组内容
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int* parr = arr;
//    int i = 0;
//    for(i = 0;i <10;i++)
//    {
//        printf("%d ", *(parr+i));
//    }

//    return 0;
//}


//打印水仙花数1~100000
//#include <math.h>
//int main()
//{
//    int i = 0;
//    for(i = 0;i<100000;i++)
//    {
//        int n = 1;
//        int tmp = i;
//        while(tmp/10)
//        {
//            n++;
//            tmp = tmp / 10;
//        }
//        tmp = i;
//        int sum = 0;
//        while(tmp)
//        {
//            sum += pow(tmp%10, n);
//            tmp = tmp/10;
//        }
//        if(sum ==i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//写一个函数，逆置字符串（使用指针）
//void reverse (char* str, int len)
//{
//    char *left, *right;
//     left = str;
//     right = str + len -1;
//    while(left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }

//}
//int main()
//{
//    char arr[] = "sunhaodong";
//    int len = strlen(arr);
//    reverse(arr, len);
//    printf("%s ", arr);
//    return 0;
//}
//打印菱形

//int main()
//{

//    int line = 7;
//    scanf("%d", &line);
//    int i = 0;

//    for(i = 0;i < line;i++)
//    {
//        int j = 0;
//        for(j = 0;j< line-1-i;j++)
//        {
//            printf(" ");
//        }
//        for(j = 0;j<2*i+1;j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for(i = 0;i<line-1;i++)
//    {
//        int j = 0;
//        for(j = 0;j<=i;j++)
//        {
//            printf(" ");
//        }
//        for(j = 0;j<2*(line-1-i)-1;j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//喝汽水，一瓶一元，两个空瓶换一瓶汽水，20元喝多少

//int main()
//{
//    int money = 0;
//    scanf("%d", &money);
//    int drink = money;
//    int empty = money;
//    while(empty>=2)
//    {
//        drink += empty /2;
//        empty = empty / 2 +empty %2;
//    }
//    printf("%d",drink);
//    return 0;
//}
//函数实现，将数组的奇数放在偶数前

//void print(int arr[], int sz)
//{
//    int i = 0;
//    int a = sz;
//    for(i =0;i<a;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//void move(int arr[], int sz )
//{
//    int left = 0;
//    int right =sz -1;
//    while(left<right)
//    {
//        while((left < right) && (arr[left]%2 == 1))
//        {
//              left++;
//        }
//        while((left < right) && (arr[right]%2 == 0))
//        {
//              right--;
//        }
//              if(left <right)
//        {
//              int tmp = arr[left];
//              arr[left] = arr[right];
//              arr[right] = tmp;
//        }
//    }
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/ sizeof(arr[0]);
//    move(arr, sz);
//    print(arr, sz);
//    return 0;
//}
//打印杨辉三角

//void print(int arr[10][10])
//{
//    int i=0;
//    int j = 0;
//    for(i=0;i<10;i++)
//    {
//        for(j=0;j<=i;j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[10][10]= { 0 };
//    int i = 0;
//    int j = 0;
//    for(i = 0;i<10;i++)
//    {
//        arr[i][j] = 1;
//    }
//    for(i =0;i<10;i++)
//    {
//        for(j = 0;j<=i;j++)
//        {
//            if(i==j)
//            {
//                arr[i][j] = 1;
//            }
//            if((i>=2) && (j>=1))
//            {
//                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//            }
//        }
//    }
//    print(arr);
//    return 0;
//}
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
//以下为4个嫌疑犯的供词:
//A说:不是我。
//B说:是C。
//C说:是D。
//D说: C在胡说
//已知3个人说了真话，1个人说的是假话
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//int main()
//{
//    char killer = 0;
//    for(killer ='A'; killer <='D'; killer++)
//    {
//        if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//        {
//            printf("%c", killer);
//        }
//    }

//    return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果:
//A选手说:B第二，我第三;
//B选手说:我第二，E第四;
//C选手说我第一，D第二;
//D选手说:C最后，我第三;
//E选手说:我第四，A第一;
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次


#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    for(a=1;a<=5;a++)
        for(b=1;b<=5;b++)
            for(c=1;c<=5;c++)
                for(d=1;d<=5;d++)
                    for(e=1;e<=5;e++)
                        if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
                            if(((b==2)+(a==3)==1)&&((b==2)+(e==4)==1)&&((c==1)+(d==2)==1)&&((c==5)+(d==3)==1)&&((e==4)+(a==1)==1))
                                printf("A:%d B:%d C:%d D:%d E:%d\n",a,b,c,d,e);
    return 0;
}
