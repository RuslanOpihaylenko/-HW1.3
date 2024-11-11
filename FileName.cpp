#include <iostream>
#include <Windows.h>
using namespace std;
//Добовляет змейку на доску
void addSnakeToBoard(Snake* snake, int length, int** board) {
    board[snake[0].positionY][snake[0].positionX] = 1;
    for (int i = 1; i < length; i++) {
        board[snake[i].positionY][snake[i].positionX] = 2;
    }
}

//появление яблок
void createApple(int**& arr, int rows, int cols, bool& applecounter)
{
    while (applecounter == false)
    {
        int y = rand() % ((rows - 1) + 1) - 1;
        int x = rand() % ((cols - 1) + 1) - 1;
        if (arr[y][x] == 0)
        {
            arr[y][x] = 3;
            applecounter = true;

        }
        else {
            continue;
        }
    }
}
int main()
{

}