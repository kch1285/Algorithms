#include <iostream>
#include <algorithm>

using namespace std;

long long arr[1000001];

int main(){
    int n;
    long long result, cnt = 1, mc = 0;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    result = arr[0];

    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        if(cnt > mc){
            mc = cnt;
            result = arr[i];
        }
    }
    cout << result << '\n';
    return 0;
}