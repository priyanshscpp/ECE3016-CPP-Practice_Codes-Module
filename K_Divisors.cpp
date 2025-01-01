#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i * i != n) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int divisor : divisors) {
        cout << divisor << endl;
    }

    return 0;
}