#include <stdio.h>

#include<string.h>

#include <windows.h>

//#include <stdio.h>
//int main()
//{
//    char a= -1;
//    signed char b=-1;
//    unsigned char c=-1;
//    printf("a=%d,b=%d,c=%d",a,b,c);
//    return 0;
//}


//int main()
//{
//    int i= -20;
//    unsigned  int  j = 10;
//    printf("%d\n", i+j);
//    return 0;
//}
//int main()
//{
//    char a[1000];
//    int i;
//    for(i=0; i<1000; i++)
//   {
//        a[i] = -1-i;
//   }
//    printf("%d",strlen(a));
//    return 0;
//}

//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int n = 9;
//    float *pFloat = (float *)&n;
//    printf("n的值为：%d\n",n);
//     printf("*pFloat的值为：%f\n",*pFloat);
//    *pFloat = 9.0;
//    printf("num的值为：%d\n",n);
//    printf("*pFloat的值为：%f\n",*pFloat);
//    return 0;
//}





//写代码判断字节序
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int a = 0;
    char*p = (char*)&a;
    if(*p ==1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }

    return 0;
}
