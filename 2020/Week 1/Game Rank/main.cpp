#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

void level_up( string& level , int& stars, int win_count){
    int lvl_int;
    int star_max;
    int stars_awarded = 1;
    if(level == "Legend"){
        return;
    }
    istringstream ss(level);
    ss >> lvl_int;
    if(win_count >= 3 && lvl_int >= 6){
        if (lvl_int == 6 && stars == 0)
        {
            stars_awarded = 1;
        } else {
            stars_awarded = 2;
        }  
    }
    for(int i = 0; i < stars_awarded; i++){
        if (lvl_int >= 21)
        {
            star_max = 2;

            if(stars < star_max){
                stars++;
            }else if(stars == star_max){
                lvl_int--;
                stars = 1;
            }
            /* code */
        }
        else if (lvl_int <= 20 && lvl_int >= 16)
        {
            star_max = 3;
            if(stars < star_max){
                stars++;
            }else{
                lvl_int--;
                stars = 1;
            }
        }
        else if (lvl_int <= 15 && lvl_int >= 11)
        {
            star_max = 4;
            if(stars < star_max){
                stars++;
            }else{
                lvl_int--;
                stars = 1;
            }
        }
        else if (lvl_int <= 10 && lvl_int >= 1)
        {
            star_max = 5;
            if (lvl_int == 1 && stars == 5)
            {
                level = "Legend";
                return;
            }
            
            if(stars < star_max){
                stars++;
            }else{
                lvl_int--;
                stars = 1;
            }
        }
    }
    level = to_string(lvl_int);
    
}
void level_down( string& level , int& stars){
    int star_max;
    int lvl_int;
    if(level == "Legend"){
        return;
    }
    istringstream ss(level);
    ss >> lvl_int;
    if (lvl_int >= 21)
    {
        return;
    }
    else if (lvl_int <= 20 && lvl_int >= 16)
    {
        star_max = 3;
        if(stars > 0){
            stars--;
        }else if(stars == 0 && lvl_int == 20){
            return;
        }else{
            lvl_int++;
            stars = star_max - 1;
        }
    }
    else if (lvl_int <= 15 && lvl_int >= 11)
    {
        star_max = 4;
        if(stars > 0){
            stars--;
        }else if(stars == 0 && lvl_int == 15){
            lvl_int++;
            stars = 2;
        }else{
            lvl_int++;
            stars = star_max - 1;                
        }
    }
    else if (lvl_int <= 10 && lvl_int >= 1)
    {
        star_max = 5;
        
        if(stars > 0){
            stars--;
        }else if(stars == 0 && lvl_int == 10){
            lvl_int++;
            stars = 3;
        }else{
            lvl_int++;
            stars = star_max - 1;                
        }
    }
    level = to_string(lvl_int);
    
}
int main(){
    int win_count = 0;
    string level = "25";
    int stars = 0;
    string str;
    // cin.ignore(10000, '\n');
    getline(cin, str);
    // istringstream ss(str);
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'W'){
            win_count++;
            level_up(level, stars, win_count);
        }else if(str.at(i) == 'L'){
            win_count = 0;
            level_down(level, stars);
        }
    }
    cout << level << endl;
    return 0;
}