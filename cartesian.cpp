// Compiled with: g++ -Wall -std=c++14 -pthread

#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<char>>& v) {
    for(auto& sa : v) {
        for (auto& c : sa) {
            cout << c << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector<vector<char>> func(vector<vector<char>> complexArray) {
    vector<vector<char>> result;
    result.push_back({});
    // {}, [1,2] => {1}, {2}
    for(vector<char> sa : complexArray) {
        vector<vector<char>> tempResult;
        for(vector<char> subRes : result) {
            for(char c : sa) { 
                tempResult.push_back(subRes);
                tempResult.back().push_back(c); 
            }
        }
        if (tempResult.size() != 0) 
            result = tempResult;        
    }
    return result;
} 

int main(){
    vector<vector<char>> result = {{'1','2'}, {'a','b'}, {'c','d'},{}};
    auto t = func(result);
    print(t);
    return 0;
}




