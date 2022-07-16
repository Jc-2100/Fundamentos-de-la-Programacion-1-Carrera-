#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

const int MAX = 4;
typedef array<array<int, MAX>, MAX> TSqMatrix;

void rotate(TSqMatrix& m, int n);
void print(TSqMatrix m);

int main(void)
{
    TSqMatrix m = {{
        {{1, 6,  7,  9}},
        {{2, 5,  15, 16}},
        {{8, 7,  1,  4}},
        {{3, 12, 11, 10}}
    }};

    print(m);
    
    rotate(m, 2);
    cout << "After 2 rotations" << endl;
    print(m);
    
    rotate(m, -2);
    cout << "After -2 rotations" << endl;
    print(m);
    

    TSqMatrix h = {{
        {{1, 2,  3,  4}},
        {{5, 6,  7, 8}},
        {{9, 10,  11,  12}},
        {{13, 14, 15, 16}}
    }};
 
    cout << "WITH" << endl;
    print(h);
    rotate(h, -2);
    cout << "After -2 rotations" << endl;
    print(h);
    
    return (0);
}

void rotateRight(TSqMatrix& m);
void rotateLeft(TSqMatrix& m);

void rotate(TSqMatrix& m, int n)
{
    int pos;

    pos = 0;
    if(n > 0)
    {
        while(pos < n)
        {
            rotateRight(m);
            pos++;
        }
    }
    else
    {
        while(pos < (-n))
        {
            rotateLeft(m);
            pos++;
        }
    }
}

void rotateRight(TSqMatrix& m)
{
    TSqMatrix t;
    int row;
    int col;

    row = 0;
    col = 0;

    while(row < MAX){
        col = 0;
        while(col < MAX){
            t[col][MAX-1-row] = m[row][col];
            col++;
        }
        row++;
    }
    m = t;
}

void rotateLeft(TSqMatrix& m)
{
    TSqMatrix t;
    int row;
    int col;

    row = MAX - 1;
    col = MAX - 1;

    while(row >= 0){
        col = MAX - 1;
        while(col >= 0){
            t[MAX-1-col][row] = m[row][col];
            col--;
        }
        row--;
    }
    m = t;
}

void print(TSqMatrix m)
{
    int col;
    int fil;

    col = 0;
    fil = 0;
    while(fil < MAX)
    {
        col = 0;
        while(col < MAX)
        {
            cout << setw(3) << m[fil][col];
            col++;
        }
        cout << endl;
        fil++;
    }
}