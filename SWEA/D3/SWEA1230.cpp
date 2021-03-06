#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case, n, m, x, y, addnum;
    char cmd;
    
	for(test_case = 1; test_case <= 10; ++test_case)
	{
        cin >> n;
        vector<int> password(n);
        for(int i=0;i<n;i++){
            cin >> password[i];
        }
        cin >> m;
        for(int i=0;i<m;i++){
            cin >> cmd;
            if(cmd == 'I'){
                cin >> x >> y;
                vector<int> s(y);
                for(int j=0;j<y;j++)	cin >> s[j];
                for(int j=0;j<y;j++){
                    password.insert(password.begin() + x++, s[j]);
                }
            }
            else if(cmd == 'D'){
                cin >> x >> y;
                password.erase(password.begin() + x, password.begin() + x + y);
            }
            else{
                cin >> y;
                for(int j=0;j<y;j++){
                    cin >> addnum;
                    password.push_back(addnum);
                }
            }
        }
        cout << "#" << test_case << ' ';
        for(int i=0;i<10;i++){
            cout << password[i] << ' ';
        }
        cout << '\n';
	}
	return 0;
}