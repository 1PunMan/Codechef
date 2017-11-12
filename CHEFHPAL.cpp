#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int T,N,A; string S,w,m;
	//string[] partial={"a","ab","aba","abab","ababb","aababb","aaababb","aaababbb","aaaababbb","babbaababb"};     
	vector<string>  partial; partial.resize(10);
	partial[0]="a";
	partial[1]="ab";
	partial[2]="abb";
	partial[3]="aabb";
	partial[4]="aaabb";
	partial[5]="aababb";
	partial[6]="aaababb";
	partial[7]="aaababbb";
	partial[8]="aaaababbb";
	partial[9]="babbaababb";
	cin >> T; 
	while(T--){
		S=""; w="babbaa",m="abcdefghijklmnopqrstuvwxyz";
		cin >> N >> A;
		if(A>2){
			m.resize(A);
			while(S.length()<N){
				S=S+m;
			}
			S.resize(N);
			cout << 1 << " " << S << endl;
		}
		else{
			if(A==1){
				while(S.length()<N){
					S=S+'a';
				}
				cout << N << " " << S << endl;
			}
			else if(N<=10 && A==2){
				if(N==1){
					cout << 1 << " " << partial[N-1] << endl;
				}
				else if(N==2){
					cout << 1 << " " << partial[N-1] << endl;
				}
				else if(N==3||N==4){
					cout << 2 << " " << partial[N-1] << endl;
				}
				else if(N>4&&N<=8){
					cout << 3 << " " << partial[N-1] << endl;
				}
				else{
					cout << 4 << " "<<partial[N-1] << endl;
				}
			}
			else{
				while(S.length()<N){
					S=S+w;
				}
				S.resize(N);
				cout << 4 << " " << S << endl;
			}
		}
	}
	return 0;
}