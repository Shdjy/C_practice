#include <stdio.h>
#include <windows.h>
#include"game.h"

void menu()
{
   printf("*************************\n");
   printf("*******  1.play   *******\n");
   printf("*******  0.exit   *******\n");
   printf("*************************\n");
}

void game()
{
    char board[ROW][COL];
    InitBoard(board, ROW, COL);//初始化棋盘
    //打印棋盘
    DisplayBoard(board, ROW,COL);
    char ret = 0;
    while(1)
    {
       PlayerMove(board, ROW, COL);//玩家下
       DisplayBoard(board, ROW,COL);
       ret = IsWin(board, ROW, COL);//判断输赢
       if(ret != 'c')
           break;

       ComputerMove(board, ROW, COL);//电脑下
       DisplayBoard(board, ROW,COL);
       ret = IsWin(board, ROW, COL);//判断输赢
       if(ret != 'c')
           break;
    }
    if(ret == '*')
    {
        printf("玩家赢\n");
    }
    else if (ret == '#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
    DisplayBoard(board, ROW,COL);
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            //printf("三子棋游戏\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，重新选择\n");
            break;

        }
    }while(input);

    return 0;
}
