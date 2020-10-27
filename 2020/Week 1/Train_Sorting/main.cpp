#include <iostream>
#include <string>
#include <sstream> 
#include <vector>
#include <map>

using namespace std;


int main(){
    map<int, int> weight_order;
    vector<int> order;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        weight_order.insert(pair <int, int> (tmp, i));
        // train_weights.push_back(tmp);

        
    }
    for(auto &x:weight_order)
	    order.push_back(x.second);
    int prev;
    vector<int> v;
    vector<int> tmp;
    for(int i = 0; i < order.size();i++){
        if (i < 2 || order[i] > prev)
        {
            v.push_back(order[i]);
            prev = order[i];
        }
    }
    cout << v.size() << endl;
        
    
    return 0;
}