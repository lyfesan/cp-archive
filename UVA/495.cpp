#include<bits/stdc++.h>
using namespace std;

string fib[5001];

string add(string num1, string num2) {
    string sum = "";
    int i = num1.length() - 1, j = num2.length() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int d1 = (i >= 0) ? num1[i--] - '0' : 0;
        int d2 = (j >= 0) ? num2[j--] - '0' : 0;
        int current_sum = d1 + d2 + carry;
        sum += to_string(current_sum % 10);
        carry = current_sum / 10;
    }
    reverse(sum.begin(), sum.end());
    return sum;
}

string fibo(int n) {
    if (n <= 1) return to_string(n);
    if (fib[n] != "") return fib[n];
    
    fib[n] = add(fibo(n - 1), fibo(n - 2));
    return fib[n];
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    while (cin >> n) {
        if (fib[n] == "") {
           fibo(n);
        }
        cout << "The Fibonacci number for " << n << " is " << fibo(n) << endl;
    }
}