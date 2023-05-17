#include <stdio.h>
#include <string.h>

//最小公倍数


//int main()
//{
//    int a = 8;
//    int b = 12;
//    int c = 0;
//    if(a>b)
//    {
//        c = a;
//    }
//    else
//        c = b;
//    while(1)
//    {
//        if((c%a ==0) && (c%b == 0))
//        {
//            printf("%d", c);
//            break;
//        }
//        else
//            c++;
//    }
//    return 0;
//}

//倒置字符串
//？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？？
int main()
{
    char arr[10] = "sunhaodong";
    int sz = sizeof(arr) / sizeof(arr[0]);
    //int len = strlen(arr);
    int left = 0;
    int right = sz -1;
    //int right = len -1;
    while(left<right)
    {
        char tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;

        left++;
        right--;
    }
    printf("%s", arr);
    return 0;
}


//一句话的单词逆置


//void reverse(char* left, char*right)
//{
//    while(left<right)
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
//    char arr[100] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    reverse(arr, arr+len-1);
//    char* start = arr;
//    while(*start)
//    {
//        char* end = start;
//        while(*end != ' ' && *end != '\0')
//        {
//            end++;
//        }
//        reverse(start, end - 1);
//        if(*end == ' ')
//        {
//            start = end + 1;
//        }
//        else
//            start = end;
//    }
//    printf("%s",arr);
//    return 0;
//}




























