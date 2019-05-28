//Rachel Ramphal
//8 Queens 1D Array without goto

#include <iostream>
#include <cmath>
using namespace std;

//check function
bool okay(int q[], int c){
    for (int i = 0; i < c; i++){
        if (q[c] == q[i] || abs(q[c] - q[i]) == c - i) return false;
    }
    return true;
}

//print function
void printout(int q[]){
    static int solutions = 0; 
    cout << "Solution #" << ++solutions << ":" << endl;
    for (int i = 0; i < 8; i++){
        cout << q[i] << " ";
        cout << endl;
    }
}

int main(){

    int q[8] = {0}, c = 0, solution = 0;
    q[0] = 0; //place first queen at (0,0)
    
    while (c >= 0){
        c++;

        if (c == 8){
            printout(q);
            cout << endl;
            c--;
        }
        else q[c] = -1;

        while (c >= 0){
            q[c]++;
            if (q[c] == 8) c--;
            else if (okay(q,c)) break;
        }
    }
    return 0;
}