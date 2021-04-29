#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int num = 1000000;
	vector<int> che(num + 1);
    
    for(int i=2;i<=num;i++){
        che[i] = i;
    }
    
    for(int i=2;i<=sqrt(num);i++){
        if(che[i] == 0)	continue;
        for(int j=i+i;j<=num;j+=i){
            che[j] = 0;
        }
    }
    
    for(int i=2;i<=num;i++){
        if(che[i] != 0)	cout << i << ' ';
    }
    cout << '\n';
	return 0;
}