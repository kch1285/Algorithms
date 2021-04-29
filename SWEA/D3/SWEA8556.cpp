#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        double answer = 0.0, div = 1;
        string dir = "", input;
        cin >> input;
        for(int i=0;i<input.length();i++){
            if(input[i] == 'n')	dir = 'n' + dir;
            else if(input[i] == 'w')	dir = 'w' + dir;
        }
        
        if(dir[0] == 'w')	answer = 90;
        else	answer = 0;
        
        for(int i=1;i<dir.length();i++){
            div *= 2;
            if(dir[i] == 'w')	answer += (90 / div);
            else	answer -= (90 / div);
        }
        
        if(answer - (int)answer != 0){
            div /= 2;
            answer *= div;
            cout << "#" << test_case << ' ' << (int)answer << '/' << (int)div << '\n';
        }
        else	cout << "#" << test_case << ' ' << (int)answer << '\n';
        
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}