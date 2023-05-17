#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    char arr[20];
    system("shutdown -s -t 60");
    printf("请注意你的电脑在一分钟后就会关机，如果你想取消关机请输入;>woshizhu\n");
    while (1)
    {
        scanf("%s", arr);
        if (strcmp(arr, "woshizhu") == 0)
        {
             system("shutdown -a");
             printf("你已经成功取消了电脑的自动关机！\n");
             break;
        }
         else
        {
             printf("输入错误，请重新输入！\n");
         }
      }
      return 0;
}

