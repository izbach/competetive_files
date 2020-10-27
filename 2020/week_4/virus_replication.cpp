#include <iostream>
#include <string>

using namespace std;

int main() {
    string dna1, dna2;
    int beg_splice = 0;
    int end_splice = 0;
    int starting = 0;
    bool start_found = false;
    bool end_found = false;

    cin >> dna1 >> dna2;
    int ending = dna1.size() - 1;

    for(int i = 0; i < dna2.size(); i++){
        
        for(int j = starting; j < dna1.size(); j++){
            if(dna2.at(i) == dna1.at(j)){
                starting++;
                break;
            }else{
                beg_splice = i;
                start_found = true;
            }
        }
        if(start_found == true){
            break;
        }
    }
    for(int i = dna2.size() - 1; i >= 0 ; i--){
        for(int j = ending; j >= 0  ; j--){
            if(dna2.at(i) == dna1.at(j)){
                
                ending--;
                break;
            }else{
                end_splice = i + 1;
                end_found = true;
            }
        }

        if(end_found == true){
            break;
        }


    }
    if(dna1.size() != dna2.size() && end_found == false && start_found == true){
        end_splice = dna2.size();
    } else if (dna1.size() >= dna2.size() && end_found == false && start_found == false){
        end_splice = 1;
    } else if (dna1.size() <= dna2.size() && end_found == false && start_found == false){
        end_splice = dna2.size() - dna1.size();
    }
    int added_val = end_splice - beg_splice;
    cout << added_val << endl;


    return 0;
}