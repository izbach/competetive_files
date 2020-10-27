#include <bits/stdc++.h>

using namespace std;

string first_part(string f_name){
    int last_num = f_name.length()-1;
    char last_char = f_name.at(last_num);
    switch(last_char){
        case 'x':
            if(f_name.at(last_num - 1) == 'e')
                return f_name;
            break;
        case 'a':
            f_name.erase(last_num);
            return f_name + "ex";
            break;
        case 'i':
            f_name.erase(last_num);
            return f_name + "ex";
            break;
        case 'o':
            f_name.erase(last_num);
            return f_name + "ex";
            break;
        case 'u':
            f_name.erase(last_num);
            return f_name + "ex";
            break;
        case 'e':
            return f_name + "x";
            break;
        default:
            return f_name + "ex";     
    }

}

int main(){
    string f_name, l_name;
    cin >> f_name >> l_name;
    string first = first_part(f_name);
    cout << first << l_name;

    return 0;
}