#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int S, C, K;
    cin >> S >> C >> K;
    int arr[S];
    if(S == C){
        cout << S;
        return 0;
    }
    for(int i = 0; i < S; i++){
        cin >> arr[i];
    }
    sort(arr, arr + S);
    for(int i = 0; i < S; i++){
        
    }

    return 0;
}