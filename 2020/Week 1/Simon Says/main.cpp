#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
    int times;
    cin >> times;
    cin.ignore(10000, '\n');
    vector<string> sents;
    for(int i=0; i<times;i++){
        string str;
        getline( cin, str);
        if(str.size() > 11){
            string beginning = str.substr(0, 10);
            string end = str.substr(11);
            if(beginning == "Simon says"){
                sents.push_back(end);
            }
        }

    }
    for(int i=0; i < sents.size(); i++){
        cout << sents[i] << endl;
    }

    return 0;
}