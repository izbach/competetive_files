#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool player_loss_check(vector<string> words_used, string new_word){
    string last_word = words_used.back();
    if(last_word.back() != new_word.front()){
        return true;
    }
    for(int i = 0; i < words_used.size(); i++){
        if(new_word == words_used[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    bool player_one_loss, player_two_loss;
    vector<string> words_used;
    cin >> n;
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        if(i == 0){
            words_used.push_back(word);
        }
        else if(i % 2 == 0){
            player_one_loss = player_loss_check(words_used, word);
        }
        else{
            player_two_loss = player_loss_check(words_used, word);
        }
        if (player_one_loss || player_two_loss)
        {
            break;
        }
        words_used.push_back(word);
        
    }
    if(player_one_loss){
        cout << "Player 1 lost";
    } else if (player_two_loss){
        cout << "Player 2 lost";
    } else {
        cout<< "Fair Game";
    }
    
    return 0;
}