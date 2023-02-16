#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

char map[3][3] = {
    {'.', '.', '.'},
    {'.', '.', '.'},
    {'.', '.', '.'}
};

void printMap() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << map[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

int main() {

    int row = 0;
    int column = 0;
    while (true) {
        printMap();
        
        char userInput = getch();
        switch (userInput) {
        case 'd':
            map[row][column] = '.';
            column++;
            map[row][column] = 'A';
            break;
        
        case 'a':
            map[row][column] = '.';
            column--;
            map[row][column] = 'A';
            break;

        case 'w':
            map[row][column] = '.';
            row--;
            map[row][column] = 'A';
            break;
        
        case 's':
            map[row][column] = '.';
            row++;
            map[row][column] = 'A';
            break;

        default:
            cout << "Invalid input, please try again.\n";
            break;
        }
    }


    return 0;
}