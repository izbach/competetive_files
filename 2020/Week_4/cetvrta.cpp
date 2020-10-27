#include <iostream>

using namespace std;


int main(){
    int xArr[3], yArr[3];
    int xOut, yOut, xPrev, yPrev;

    cin >> xArr[0] >> yArr[0] >> xArr[1] >> yArr[1] >> xArr[2] >> yArr[2];

    if(xArr[0] == xArr[1]){
        xOut = xArr[2];
    } else if(xArr[0] == xArr[2]){
        xOut = xArr[1];
    } else {
        xOut = xArr[0];
    }
    if(yArr[0] == yArr[1]){
        yOut = yArr[2];
    } else if(yArr[0] == yArr[2]){
        yOut = yArr[1];
    } else {
        yOut = yArr[0];
    }
    cout << xOut << " " << yOut;



    return 0;
}