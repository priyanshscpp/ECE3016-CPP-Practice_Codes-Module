#include <bits/stdc++.h>
using namespace std;
      
/* OM NAMO NARAYANA */
/* Code written by Priyanshu Yadav  */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a, int b) { if (a < b) return a; return b; }
ll min(int a, ll b) { if (a < b) return a; return b; }
ll max(ll a, int b) { if (a > b) return a; return b; }
ll max(int a, ll b) { if (a > b) return a; return b; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A'; return a; }
string to_lower(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A'; return a; }
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/* clang-format on */
constexpr int kN = 2E5;
 
int f[kN + 1], s[kN + 1];

/* Main()  function */
int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif


   
    // ll times= n/ 9;
    // ll store= n % 9;
    // ll sum =0;
    // sum += (times* 45);
    // for(int i=0; i<=store; i++){
    //     sum += i;

    // }

  
    //Just basic implementation
    //This solution also fukced up ... TLE 

        // for (int i = 1; i <= n; i++) {
        //     int num = i;
        //     int digit_sum = 0;

          
        //     while (num > 0) {
        //         digit_sum += num % 10; ///digit sum num%10 
        //         num /= 10;
        //     }

        //     sum += digit_sum;
        // }


        //Lets go to optimised sol ..
    for (int i = 1; i <= kN; i++) {
        f[i] = f[i / 10] + i % 10;
        s[i] = s[i - 1] + f[i]; // presum  array;
    }
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<s[n]<<endl;

    
    }
    return 0;
}


