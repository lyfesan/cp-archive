#include<bits/stdc++.h>
using namespace std;

int *grading(int* grades, int n) {
    for(int i = 0; i < n; i++) {
        if(grades[i] >= 38) {
            int next5 = ((grades[i] / 5) + 1) * 5;
            if(next5 - grades[i] < 3) {
                grades[i] = next5;
            }
        }
    }
    return grades;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *result = grading(arr, n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<"\n";
    }
}