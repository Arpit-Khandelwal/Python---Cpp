#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test=1;
    cin>>test;

    int pos = 0;
    while(test--)
    {
        int n;
        cin >> n;

        pos = (n+1)/2 * ((n % 2 == 0) ? 1 : -1);

        cout << pos << endl;
    }
    return 0;
}
