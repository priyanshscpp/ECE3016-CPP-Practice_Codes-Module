#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N;  
        vector<int> A(N);
        
        for (int i = 0; i < N; i++) {
            cin >> A[i]; 
        }
        
        if (N <= 3) {
            cout << 0 << endl;
            continue;
        }

        sort(A.begin(), A.end());
        
        int result = min({A[N-1] - A[2],  
                          A[N-2] - A[1],   
                          A[N-3] - A[0]}); 
        
        cout << result << endl;
    }
    return 0;
}
