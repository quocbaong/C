#include <iostream>
#include <conio.h>
using namespace std;
const int width = 20;
const int height = 20;
int x, y; // V? trí c?a xe tang
int targetX, targetY; // V? trí c?a m?c tiêu
int score; // Ði?m s?
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;
bool gameOver;
void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    targetX = rand() % width;
    targetY = rand() % height;
    score = 0;
}
void Draw()
{
    system("cls"); // Xóa màn hình
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
            if (i == y && j == x)
                cout << "T"; // V? xe tang
            else if (i == targetY && j == targetX)
                cout << "X"; // V? m?c tiêu
            else
                cout << " ";
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    cout << "Score: " << score << endl;
}
void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}
void Logic()
{
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }
    // Ki?m tra va ch?m v?i m?c tiêu
    if (x == targetX && y == targetY)
    {
        score++;
        targetX = rand() % width;
        targetY = rand() % height;
    }
    // Ki?m tra va ch?m v?i biên
    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = true;
}
int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
    }
    return 0;
}
