#include<iostream>
#include <queue>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, input, decrement;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
        decrement = 1;
        cin >> T;
        queue<int> q;
        for(int i=0;i<8;i++){
            cin >> input;
            q.push(input);
        }
        
        while(q.back()> 0){
            q.push(q.front() - decrement);
            q.pop();
            decrement++;
            if(decrement > 5)	decrement = 1;
        }
        q.back() = 0;
        cout << "#" << test_case << ' ';
        while(!q.empty()){
            cout << q.front() << ' ';
            q.pop();
        }
        cout << '\n';
	}
	return 0;
}