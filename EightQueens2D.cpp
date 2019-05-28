//Rachel Ramphal
//8 Queens 2D Array
#include <iostream>
using namespace std;
int main(){

    int board[8][8] = {0};
    int r;
    int c = 0;
    int solution = 1;

    board[0][0] = 1; //means a queen is there

    nc:
        c++; //moves to next column
        if (c == 8) goto printout;

        r = -1;

    nr:
        r++;
        if (r == 8) goto backtrack;

        //row test
        for (int i = 0; i < c; i++)
            if (board[r][i] == 1) goto nr;

        //up diagonal test
        for (int i = 1; (r - i) >= 0 && (c - i) >= 0; i++)
            if (board[r - i][c - i] == 1) goto nr;

        //down diagonal test
        for (int i = 1; (r + i) < 8 && (c - i) >= 0; i++)
            if (board[r + i][c - i] == 1) goto nr;
        
        board[r][c] = 1;
        goto nc;
    
    backtrack:
        c--;
        if (c == -1) return 0;

        r = 0;
        while (board[r][c] != 1)
            r++;
            board[r][c] = 0;
            goto nr;

    printout:
        cout << "Solution " << solution++ << endl;
        for (int r = 0; r < 8; r++){
            for (int c = 0; c < 8; c++){
                cout << board[r][c] << " ";
            }
            cout << endl;
        }
    cout << endl;

    goto backtrack;

}