#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void selectionSort(int *arr, int n);

void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    selectionSort(arr, n);

    for(int i:arr)
        cout << i << " ";
    coit << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
