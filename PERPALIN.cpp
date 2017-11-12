#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string constructor(int P,int N){
	string temp,result=""; int i,k;
	temp.resize(P);
	for(i=0;i<P;i++){
		if(i==0||i==P-1){
			temp[i]='a';
		}
		else{
			temp[i]='b';
		}
	}
	if(N%P){
		return "impossible\n";
	}
	k=N/P;
	for(i=0;i<k;i++){
		result=result+temp;
	}
	//cout << result << endl;
	return result;
}

int main(){
	int T,P,N; string S;
	cin >> T;
	while(T--){
		S="";
		cin >> N >> P;
		if(P<=2||N<=2){
			cout << "impossible" << endl;
		}
		else{
			S=constructor(P,N);
		}
	 	cout << S << endl;
	}
}