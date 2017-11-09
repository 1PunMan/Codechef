#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,N,R,i; vector<long int> sequence; long int tmp;
	long int min_right=INT_MAX,max_left=0;
	bool flag=true;
	cin >> T;
	while(T--){
		min_right=INT_MAX; max_left=0; flag=true;
		cin >> N >> R;
		sequence.clear();
		sequence.resize(N);
		for(i=0;i<N;i++){
			cin >> tmp;
			sequence[i]=tmp;
		} 
		for(i=0;i<N;i++){
			if(sequence[i]>R){
				if(min_right>sequence[i]){
					min_right=sequence[i];
				}
				else flag=false;
				//cout << "min_right is "<<min_right<<endl;
			}
			if(sequence[i]<R){
				if(max_left<sequence[i]){
					max_left=sequence[i];
				}
				else flag=false;
				//cout << "max_left is "<<max_left<<endl;
			}
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	} 
	return 0;
}