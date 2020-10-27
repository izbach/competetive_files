#include <iostream>
#include <string>
#include <sstream> 

using namespace std;


int main(){
    int n;
    cin >> n;
    int count = 0;
    string str;
    cin.ignore(10000, '\n');
    getline(cin, str);
    istringstream ss(str);
    for(int i = 0; i < n; i++){
        int n;
        ss >> n;

        if(n < 0){
            count++;
        }
    }
    cout << count;

    return 0;
}