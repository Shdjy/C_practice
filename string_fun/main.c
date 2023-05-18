#include <stdio.h>

//char* strcpy(char * destination, const char * source );1源字符串的\0也会拷贝，2目标空间足够大。3目标空间可更改

//定义一个模拟strcpy函数，用于复制字符串
//char *my_strcpy(char *dest, const char *src)
//{
//    //定义一个指针变量保存目标字符串的地址
//    char *ret = dest;
//    //循环复制源字符串的每个字符到目标字符串，直到遇到'\0'结束符
//    while (*src != '\0')
//    {
//        *dest = *src;
//        dest++;
//        src++;
//    }
//    //在目标字符串末尾加上'\0'结束符
//    *dest = '\0';
//    //返回目标字符串的地址
//    return ret;
//}

//int main()
//{
//    char arr1[20] = "sun ";
//    char arr2[] = "haodong";
//    printf("%s", my_strcpy(arr1, arr2));
//    return 0;
//}

//char * strncpy ( char * destination, const char * source, size_t num );num拷贝字符串的字符个数
//size_t strlen ( const char * str );
//char * strcat ( char * destination, const char * source );字符串追加。1源字符串末尾要有\0。2目标空间足够大。3目标空间可更改
//不能追加自己，\0被覆盖死循环
//char* my_strcat(char* dest, char* src)
//{
//    char* ret = dest;
//      while(*dest)
//      {
//          dest++;
//      }
// //      while(*src !='\0')
// //      {
// //         *dest = *src;
// //          dest++;
// //          src++;
// //      }
//      while(*dest++ = *src++)
//      {
//          ;
//      }
//      return ret;
//}

//int main()
//{
//    char arr1[20] = "sun ";
//    char arr2[] = "haodong";
//    printf("%s", my_strcat(arr1, arr2));
//    return 0;
//}

//int strcmp ( const char * str1, const char * str2 );
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字

//int  my_strcmp(char* s1, char* s2)
//{
//    while(*s1 == *s2)
//    {
//        if(*s1 == '\0')
//        {
//            return 0;
//        }
//        s1++;
//        s2++;
//    }
//    return *s1 - *s2;
//}
//int main()
//{
//    char* p = "abcde";
//    char* q = "abdef";
//    int ret = my_strcmp(p, q);
//    if(ret >0)
//    {
//        printf("p>q\n");
//    }
//   else if(ret <0)
//    {
//        printf("p<q\n");
//    }
//    else
//    {
//        printf("p ==q");
//    }
//    return 0;
//}

//char * strstr ( const char *str1, const char * str2);在str1中查找str2,返回第一次出现的位置
#include <windows.h>
//char* my_strstr(char* str1, char* str2)
//{
//    if(*str2 == '\0')
//    {
//        return str1;
//    }
//    char* s1 = NULL;
//    char* s2 = NULL;
//    char* cp = str1;
//    while(*cp)
//    {
//        s1 = cp;
//        s2 = str2;
//        while(*s1 && *s2 && (*s1 == *s2))
//        {
//            s1++;
//            s2++;
//        }
//        if(*s2 == '\0')
//        {
//            return cp;
//        }
//        cp++;
//    }
//}
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    char arr1[] = "sunhaodong";
//    char arr2[] = "haodong";
//    char* ret = my_strstr(arr1, arr2);
//    if(ret ==NULL)
//    {
//        printf("未找到\n");
//    }
//    else
//    {
//        printf("找到了：%s", ret);
//    }

//    return 0;
//}


//char * strtok ( char * str, const char * sep );sep参数是个字符串，定义了用作分隔符的字符集合


//char * strerror ( int errnum );返回错误码，所对应的错误信息。#include <errno.h>//必须包含的头文件

//void * memcpy ( void * destination, const void * source, size_t num );内存拷贝，复制num个字节

//void* my_memcpy(void* dest, void* src, size_t num)
//{
//    void* ret = dest;
//   while(num--)
//   {
//       *(char*)dest = *(char*)src;
//       dest = (char*)dest + 1;
//       src = (char*)src + 1;
//   }
//   return ret;
//}
//int main()
//{
//    int arr1[] = {1,2,3,4,5,6,7,8,9,};
//    int arr2[] = {5,6,7,8,9};
//    my_memcpy(arr1, arr2, 20);
//    int i = 0;
//    for(i = 0;i< 9;i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}


//void * memmove ( void * destination, const void * source, size_t num );
//和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。
void my_memove(void* dest, void* src, size_t num)
{
    if(dest < src)
    {
        while(num--)
        {
            *(char*)dest = *(char*)src;
            dest = (char*)dest +1;
            src = (char*)src + 1;
        }
    }
    else
    {
        while(num--)
        {
            *((char*)dest + num) = *((char*)src + num);
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    my_memove(arr +2, arr, 20 );
    int i =0;
    for(i = 0;i<9;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

//memset
//#include <stdio.h>
//#include <string.h>

//int main ()
//{
//  char str[] = "almost every programmer should know memset!";
//  memset (str,'-',6);
//  puts (str);
//  return 0;
//}


