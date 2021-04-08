#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int cnt = 0;
    string input;
    map<string, double> trees;
    while(getline(cin, input)){
        if(trees.find(input) != trees.end())    trees[input]++;
        else    trees[input] = 1;
        cnt++;
    }
    for(auto it=trees.begin();it!=trees.end();it++){
        cout << it->first << ' ';
        printf("%.4f\n", it->second / cnt * 100);
    }
    return 0;
}