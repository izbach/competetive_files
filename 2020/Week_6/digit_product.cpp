#include <bits/stdc++.h>

using namespace std;

void result(int num){
    string str = to_string(num);

    int size = str.size();
    if(size < 2){
        cout << num;
        return;
    }
    vector<int> nums;
    for(int i = str.length(); i >= 0; i--){
        if(num % 10 > 0){
            nums.push_back(num % 10);
        }
        num /= 10;
    }

    int product = nums[0];
    for(int i = 1; i < nums.size(); i++){
        product *= nums[i];
    }
    result(product);
}

int main() {
    int num;
    cin >> num;

    result(num);

    return 0;
}