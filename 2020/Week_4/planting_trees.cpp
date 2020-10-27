#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


bool wayToSort(int i, int j) { return i > j; }

int main () {
    int n;
    int days_max;
    int days;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> arr[i];
    }
    sort(arr, arr + n, wayToSort);

    for(int i = 0; i < n; i++){
        if(i == 0){
            days_max = arr[i];
            days = arr[i];
        } else {
            days -= 1;
            if(arr[i] > days){
                days_max += 1;
                days = arr[i];
            }

        }
    }
    days_max += 2;
    cout << days_max;
    
    return 0;
}