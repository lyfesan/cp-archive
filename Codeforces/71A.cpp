#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	cin>>n;
	string str;
	for (int i=0;i < n;i++){
		cin>>str;
		if (str.length()>10){
			a=str.length();
			cout<<str[0]<<a-2<<str[a-1]<<endl;
		}
		else{
		cout<<str<<endl;
		}
	}
}
