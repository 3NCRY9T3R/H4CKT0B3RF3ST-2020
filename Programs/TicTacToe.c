#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int playBox[10] = {2,2,2,2,2,2,2,2,2,2};
int turn = 1,flag = 0;
int player,computer;

void menu();
void go(int n);
void startGame();
void check_draw();
void draw_playBox();
void player_first();
void put_X_O(char ch,int pos);
COORD cordinates= {0,0}; 
void gotoxy(int x,int y)
{
    cordinates.X=x;
    cordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cordinates);
}

void main()
{
    system("cls");
    menu();
    getch();

}

void menu()
{
    int myChoice;
    system("cls");
    printf("\n--------MENU--------");
    printf("\n1 : Play with X");
    printf("\n2 : Play with O");
    printf("\n3 : Exit");
    printf("\nEnter your Choice:>");
    scanf("%d",&myChoice);
    turn = 1;
    switch (myChoice)
    {
    case 1:
        player = 1;
        computer = 0;
        player_first();
        break;
    case 2:
        player = 0;
        computer = 1;
        startGame();
        break;
    case 3:
        exit(1);
    default:
        menu();
    }
}

int make2()
{
    if(playBox[5] == 2)
        return 5;
    if(playBox[2] == 2)
        return 2;
    if(playBox[4] == 2)
        return 4;
    if(playBox[6] == 2)
        return 6;
    if(playBox[8] == 2)
        return 8;
    return 0;
}

int make4()
{
    if(playBox[1] == 2)
        return 1;
    if(playBox[3] == 2)
        return 3;
    if(playBox[7] == 2)
        return 7;
    if(playBox[9] == 2)
        return 9;
    return 0;
}

int posswin(int p)
{

    int i;
    int check_val,pos;

    if(p == 1)
        check_val = 18;
    else
        check_val = 50;

    i = 1;
    while(i<=9)
    {
        if(playBox[i] * playBox[i+1] * playBox[i+2] == check_val)
        {
            if(playBox[i] == 2)
                return i;
            if(playBox[i+1] == 2)
                return i+1;
            if(playBox[i+2] == 2)
                return i+2;
        }
        i+=3;
    }

    i = 1;
    while(i<=3)
    {
        if(playBox[i] * playBox[i+3] * playBox[i+6] == check_val)
        {
            if(playBox[i] == 2)
                return i;
            if(playBox[i+3] == 2)
                return i+3;
            if(playBox[i+6] == 2)
                return i+6;
        }
        i++;
    }

    if(playBox[1] * playBox[5] * playBox[9] == check_val)
    {
        if(playBox[1] == 2)
            return 1;
        if(playBox[5] == 2)
            return 5;
        if(playBox[9] == 2)
            return 9;
    }

    if(playBox[3] * playBox[5] * playBox[7] == check_val)
    {
        if(playBox[3] == 2)
            return 3;
        if(playBox[5] == 2)
            return 5;
        if(playBox[7] == 2)
            return 7;
    }
    return 0;
}

void go(int n)
{
    if(turn % 2)
        playBox[n] = 3;
    else
        playBox[n] = 5;
    turn++;
}

void player_first()
{
    int pos;

    check_draw();
    draw_playBox();
    gotoxy(30,18);
    printf("Your Turn :> ");
    scanf("%d",&pos);

    if(playBox[pos] != 2)
        player_first();

    if(pos == posswin(player))
    {
        go(pos);
        draw_playBox();
        gotoxy(30,20);
        printf("Player Wins");
        getch();
        exit(0);
    }

    go(pos);
    draw_playBox();
    startGame();
}

void startGame()
{
    if(posswin(computer))
    {
        go(posswin(computer));
        flag = 1;
    }
    else if(posswin(player))
        go(posswin(player));
    else if(make2())
        go(make2());
    else
        go(make4());
    draw_playBox();

    if(flag)
    {
        gotoxy(30,20);
        printf("Computer wins");
        getch();
    }
    else
        player_first();
}

void check_draw()
{
    if(turn > 9)
    {
        gotoxy(30,20);
        printf("Game Draw");
        getch();
        exit(0);
    }
}

void draw_playBox()
{
    int j;

    for(j=9; j<17; j++)
    {
        gotoxy(35,j);
        printf("|       |");
    }
    gotoxy(28,11);
    printf("-----------------------");
    gotoxy(28,14);
    printf("-----------------------");

    for(j=1; j<10; j++)
    {
        if(playBox[j] == 3)
            put_X_O('X',j);
        else if(playBox[j] == 5)
            put_X_O('O',j);
    }
}

void put_X_O(char ch,int pos)
{
    int m;
    int x = 31, y = 10;

    m = pos;

    if(m > 3)
    {
        while(m > 3)
        {
            y += 3;
            m -= 3;
        }
    }
    if(pos % 3 == 0)
        x += 16;
    else
    {
        pos %= 3;
        pos--;
        while(pos)
        {
            x+=8;
            pos--;
        }
    }
    gotoxy(x,y);
    printf("%c",ch);
}
