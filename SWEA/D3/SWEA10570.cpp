#include<iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, a, b;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> a >> b;
        int ans = 0;
        for(int i=a;i<=b;i++){
            bool palindrome = true;
        	bool pow_palindrome = true;
            string check = to_string(i);
            if(check.length() == 1)	palindrome = true;
            else{
                for(int j=0;j<check.length()/2;j++){
                    if(check[j] != check[check.length() - j - 1]){
                        palindrome = false;
                        break;
                    }
                }
            }
            
            if(palindrome){
                if(sqrt(i) - (int)sqrt(i) == 0){
                    string pow_check = to_string((int)sqrt(i));
                    if(pow_check.length() == 1)	pow_palindrome = true;
                    else{
                        for(int j=0;j<pow_check.length()/2;j++){
                            if(pow_check[j] != pow_check[pow_check.length() - j - 1])	pow_palindrome = false;
                        }
                    }
                }
                else	pow_palindrome = false;
            }
            else	pow_palindrome = false;
            if(pow_palindrome && palindrome)	ans++;
        }
        
        cout << "#" << test_case << ' ' << ans << '\n';
	}
	return 0;
}