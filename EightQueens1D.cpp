//Rachel Ramphal
//Queens 1D Array with goto

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int q[8], c = 0, solution = 0;
    q[0] = 0; //queen at (0,0)

    nc:
    c++;
        if (c == 8) goto print;
            q[c] = -1; //r = -1

    nr:
    q[c]++; //r++
    if (q[c] == 8) goto backtrack;
        for (int i = 0; i < c; i++)
            if (q[i] == q[c] || abs(q[c]-q[i]) == c-i) goto nr;

    goto nc;

    backtrack:
    c--;
    if (c == -1) return 0;
    goto nr;

    print:
    cout << "Soultion # " << ++solution << ":" << endl;
    for (int row = 0; row < 8; row++){
        for (int col = 0; col < 8; col++){
            if (q[row] == col) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }
    cout << endl;
    goto backtrack;

    return 0; 
}