#include <iostream>

using namespace std;

#define MOD 1000000007
#define NUM 1000000

int arr[NUM];
long long tree[4*NUM];

long long init(int start, int end, int node){
    if(start == end)    return tree[node] = arr[start] % MOD;
    int mid = (start + end) / 2;
    return tree[node] = ((init(start, mid, node * 2) % MOD) * (init(mid+1, end, node * 2 + 1) % MOD)) % MOD;
}

long long fix(int start, int end, int node, int index, long long data){
    if(index < start || index > end)    return tree[node] % MOD;
    if(start == end)    return tree[node] = data % MOD;
    int mid = (start+end)/2;
    return tree[node] = ((fix(start, mid, node*2, index, data)%MOD) * (fix(mid+1, end, node*2+1, index, data)%MOD))%MOD;
}

long long multi(int start, int end, int node, int left, int right){
    if(left > end || right < start) return 1;
    if(left<=start && end <= right) return tree[node] % MOD;
    int mid = (start+end)/2;
    return ((multi(start, mid, node * 2, left, right) % MOD) * (multi(mid+1, end, node * 2 + 1, left, right) % MOD)) % MOD;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, k, a, b, c;
    cin >> n >> m >> k;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    init(0, n-1, 1);

    for(int i=0;i<m+k;i++){
        cin >> a >> b >> c;
        if(a==1){
            arr[b-1] = c;
            fix(1, n, 1, b, c);
        }
        else if(a==2){
            cout << multi(1, n, 1, b, c) % MOD << '\n';
        }
    }
    return 0;
}