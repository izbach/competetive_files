#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(){
    int n;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        for_each(str.begin(), str.end(), [](char& c) {
            c = tolower(c);
        });
        if(str.find("pink") != string::npos || str.find("rose") != string::npos){
            count++;
        }
        
    }
    if(count > 0){
        cout << count;
    } else {
        cout << "I must watch Star Wars with my daughter";
    }
    return 0;
}