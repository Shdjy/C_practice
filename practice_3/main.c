#include <stdio.h>



//输出X
//int main()
//{
//    int n = 0;
//    while(scanf("%d", &n) != EOF)
//    {
//        int i =0;
//        for(i = 0;i < n;i++)
//        {
//            int j = 0;
//            for(j =0;j < n;j++)
//            {
//                if(i ==j)
//                    printf("*");
//                else if(i +j == n-1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//考试现场打分输入7个分数（0~100），去掉一个高分和最低分求平均值（小数点后保留两位）输出后换行。

//int main()
//{
//    int sum = 0;
//    int score = 0;
//    int i = 0;
//    int max = 0;
//    int min = 100;
//    for(i = 0;i<7;i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//        if(score >max)
//        {
//            max = score;
//        }
//        if(score < min)
//            min = score;
//    }
//    printf("%.2f\n", (sum-max-min)/5.0);
//    return 0;
//}

//输入年份月份，计算这一年这个月有多少天

//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//    while(scanf("%d %d", &y,&m) != EOF)
//    {
//        int day = days[m];
//        if(m == 2)
//            if((y%4==0 && y%100 != 0) || (y%400==0))
//                day+=1;
//        printf("%d", day);
//    }
//    return 0;
//}

//第一行输入一个整数你，第二行输入n（0，50）个升序整数，第三行输入一个想要插入的整数
//插入后依然有序


int main()
{
    int arr[51] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for(i = 0;i<n;i++)
    {
        scanf("%d ", &arr[i]);
    }
    int m = 0;
    scanf("%d", &m);
    for(i = n-1;i>=0;i--)
    {
        if(arr[i]>m)
            arr[i+1] = arr[i];
        else
        {
            arr[i+1] = m;
            break;
        }
    }
    if(i<0)
        arr[0] = m;
    for(i = 0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}
