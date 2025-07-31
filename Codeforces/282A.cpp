#include<bits/stdc++.h>
using namespace std;

int main(){
	int X=0,n;
	cin>>n;
	string arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	for (int i=0;i<n;i++){
		if (arr[i]=="++X"){
			X++;
		}
		if (arr[i]=="X++"){
			X++;
		}
		if (arr[i]=="--X"){
			X--;
		}
		if (arr[i]=="X--"){
			X--;
		}
	}
	cout<<X<<endl;
}
 
