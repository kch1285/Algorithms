#include <iostream>

using namespace std;
#define NUM 100000

long long tree[NUM*4];
long long arr[NUM];


long long init(int start, int end, int node){
    if(start == end)    return tree[node] = arr[start];
    int mid = (start+end)/2;
    return tree[node] = init(start, mid, node * 2) + init(mid+1, end, node * 2 + 1);
}


long long sum(int start, int end, int node, int left, int right){
    if(left > end || right < start) return 0;
    if(left<=start && end <= right) return tree[node];
    int mid = (start+end)/2;
    return sum(start, mid, node * 2, left, right) + sum(mid+1, end, node * 2 + 1, left, right);
}

void fix(int start, int end, int node, int index, long long data){
    if(index < start || index > end)    return;
    tree[node] += data;
    if(start == end)    return;
    int mid = (start+end)/2;
    fix(start, mid, node*2, index, data);
    fix(mid+1, end, node*2+1, index, data);
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, q;
    long long x, y, a, b;
    cin >> n >> q;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    init(0, n-1, 1);

    for(int i=0;i<q;i++){
        cin >> x >> y >> a >> b;
        if(x > y){
            long long tmp = x;
            x = y;
            y = tmp;
        }
        cout << sum(1, n, 1, x, y) << '\n';
        fix(1, n, 1, a, b - arr[a-1]);
        arr[a-1] = b;
    }
    return 0;
}