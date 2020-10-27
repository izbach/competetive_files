#include <iostream>
#include <string>
#include <sstream> 
#include <vector>
#include <cmath>
#include <string.h>

using namespace std;

double round_decimals(double val){
    double scale = 0.001;  // i.e. round to nearest one-hundreth
    double value = floor(val / scale + 0.5) * scale;
    return value;
}


int main(){
    int data_sets;
    vector<string> averages;
    cin >> data_sets;
    cin.ignore(100000, '\n');
    cin.clear();
    for(int i = 0; i < data_sets; i++){
        double data_points = 0;
        vector<int> pre_avgs = {};
        double preAvg = 0;
        string str = "";
        double count_above_average = 0;

        getline(cin, str);
        istringstream ss(str);
        ss >> data_points;
        for(int n = 0; n < data_points;n++){
            int num;
            ss >> num;
            preAvg += num;
            pre_avgs.push_back(num);
        }
        double avg = preAvg/data_points;
        for(int n = 0; n < pre_avgs.size(); n++){
            // cout << pre_avgs[n] << "#############################\n";
            if(pre_avgs[n] > avg){
                // cout << "something\n";
                count_above_average++;
            }
        }
        double rounded_avg = round_decimals(count_above_average / data_points * 100);
        string percentage = to_string(rounded_avg);//.append("%");
        percentage.replace(percentage.end()-3, percentage.end(), "%");
        averages.push_back(percentage);

    }
    for (size_t i = 0; i < averages.size(); i++)
    {
        cout << averages[i] << endl;
    }
    

    return 0;
}