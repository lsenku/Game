#include <iostream>
#include <stdlib.h>

using namespace std;

bool gameOver;
const int width = 118;
const int hieght = 33;
int x, y, BlockX, BlockY, plane, monster, shot, score;
enum  eDirection { STOP = 0, LEFT, REIGHT, UP, DOWN };
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = hieght / 2;
    BlockX = rand() % width;
    BlockY = rand() % hieght;
    score = 0;
}

void Draw() {
    system("cls");
    for (int i = 0; i < width + 1; i++)
        cout << "#";
    cout << endl;
    for (int i = 0; i < hieght; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0 || j == width - 1)
                cout << "#";
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < width + 1; i++)
        cout << "#";
    cout << endl;
}
void Input() {

}
void Logic() {

}
int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
    }
    return 0;
}



