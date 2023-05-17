#include <stdio.h>
#include<assert.h>




//模拟是实现my_strlen
//int my_strlen(const char* str)
//{
//    assert(str != NULL);
//    int count = 0;
//    while(*str != '\0')
//    {
//        count++;
//        str++;
//    }
//   return count;


//}
//int main()
//{
//    char arr[] = "sunhaodong";

//    printf("%d\n",my_strlen(arr));


//    return 0;
//}


//模拟实现my_strcpy
char* my_strcpy(char* dest, const char* src)
{
    assert(dest != NULL);
    assert(src != NULL);
    char* ret = dest;
    while((*dest++) = (*src++))
    {
        ;
    }
    return ret;
}

int main()
{
    char arr1[] = "*************";
    char arr2[] = "sunhoadong";


    printf("%s ",my_strcpy(arr1, arr2));
    return 0;
}
