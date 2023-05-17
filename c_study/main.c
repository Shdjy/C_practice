#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
 #include <windows.h>
//int main () {
//    SetConsoleOutputCP(CP_UTF8);

//   int guess, num, tries = 0;
//   srand (time (0));
//   num = rand () % 100 + 1;
//   printf ("猜数字游戏！\n");
//   printf ("猜一个1到100之间的数字：\n");
//   do {
//      scanf ("%d", &guess);
//      tries++;
//      if (guess > num) {
//         printf ("太大了！再试一次：\n");
//      } else if (guess < num) {
//         printf ("太小了！再试一次：\n");
//      } else {
//         printf ("\n恭喜你，你猜对了！你用了%d次机会。\n", tries);
//      }
//   } while (guess != num);
//   return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
// #include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int player;
//    int computer;
//    int result;

//    printf("欢迎来到石头剪刀布游戏！\n");
//    printf("请输入你的选择：\n");
//    printf("0 - 石头\n");
//    printf("1 - 剪刀\n");
//    printf("2 - 布\n");

//    scanf("%d", &player);

//    srand(time(NULL));
//    computer = rand() % 3;

//    printf("你的选择是：%d\n", player);
//    printf("电脑的选择是：%d\n", computer);

//    result = (player - computer + 3) % 3;

//    if (result == 0)
//        printf("平局！\n");
//    else if (result == 1)
//        printf("你输了！\n");
//    else
//        printf("你赢了！\n");

//    return 0;
//}



//折半查找
//int main()
//{
//     SetConsoleOutputCP(CP_UTF8);
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 5;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int left = 0;
//     int right = sz - 1;
//     int mid = (left = right)/2;
//     while (left <= right)
//     {
//         if (k < arr[mid])
//         {
//             right = mid - 1;
//         }
//         if (k > arr[mid])
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             printf("找到了，下标啊是：%d",mid);
//             break;
//         }
//     }
//     if (left > right)
//     {
//         printf ("未找到");
//     }
//    return 0;

//}


//求1到100带9的数字个数
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int i = 0;
//    int count = 0;
//    for (i = 0;i <= 100; i++)
//    {
//        if (i%10 == 9)
//            count++;
//        if (i/10 == 9)
//                count++;
//    }
//                printf("%d",count);
//    return 0;
//}


//1/1-1/2+1/3.............-1/100的结果

//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int i = 0;
//    double sum = 0.0;
//    int flag = 1;
//    for (i = 1; i <= 100;i++)
//    {
//        sum += flag*1.0/i;
//        flag = -flag;
//    }
//    printf ("%lf",sum);
//    return 0;
//}



//求10个整数 的最大值


//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int max = arr[0];
//    int i = 0;
//    for (i = 1; i <10; i++)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    printf ("最大数是：%d", max);
//    return 0;
//}


//输九九乘法表

//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int i = 0;
//    for (i=1; i <=9; i++)
//    {
//        int j = 0;
//        for (j = 1;j <= i; j++)
//        {
//            printf ("%d*%d=%-2d ",i,j,i * j);
//        }
//        printf ("\n");
//    }
//    return 0;
//}


//汉诺塔
//#include <stdio.h>
//void hanoi(int n,char a,char b,char c)
//{
//    if(n==1)
//        printf("%c-->%c\n",a,c); // 如果只有一个盘子，直接从a移动到c
//    else
//    {
//        hanoi(n-1,a,c,b); // 将n-1个盘子从a移动到b
//        printf("%c-->%c\n",a,c); // 将第n个盘子从a移动到c
//        hanoi(n-1,b,a,c); // 将n-1个盘子从b移动到c
//    }
//}
//int main()
//{
//    int n;
//    printf("请输入汉诺塔的层数：");
//    scanf("%d",&n);
//    hanoi(n,'A','B','C');
//    return 0;
//


int main()
{
    char arr1[] = "Happy birthday to Jiaqi";
    char arr2[] = "***********************";
    int left = 0;
    int right = strlen(arr1) - 1;
    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(1000);
        system("cls");
        left++;
        right--;
    }
    printf("%s\n",arr2);
    return 0;
}



