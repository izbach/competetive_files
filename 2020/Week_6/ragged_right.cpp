#include <bits/stdc++.h>

using namespace std;
int main() {
    vector<int> line_lengths;
    string line;
    cout << "main";

    do{
        getline(cin, line);
        cout << "somethign";
        line_lengths.push_back(line.size());
    }while(EOF);
    for (auto& i : line_lengths){
        cout << i << endl;
    }
    
    return 0;
}