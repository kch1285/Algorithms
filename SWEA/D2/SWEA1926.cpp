#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int N;
    int cnt;
    string num;
    cin >> N;
    
    for(int i=1;i<=N;i++){
        cnt = 0;
        num = to_string(i); 
        for(int j=0;j<num.length();j++){
            if(num[j] == '3' || num[j] == '6' || num[j] == '9')	cnt++;
        }
        if(cnt > 0){
            for(int j=0;j<cnt;j++)	cout << "-";
        }
        else	cout << i;
        cout << ' ';
    }
	return 0;
}