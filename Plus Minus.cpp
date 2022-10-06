#include <bits/stdc++.h>

using namespace std;

int n, arr[101];

void input()
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void solve()
{
    float positive = 0, negative = 0, zero = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) positive++;
        else if(arr[i] < 0) negative++;
        else zero++;
    }
    printf("%.6f\n", positive/n);
    printf("%.6f\n", negative/n);
    printf("%.6f\n", zero/n);
}

int main(void)
{
    input();
    solve();
}