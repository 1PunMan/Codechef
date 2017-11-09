#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string a; int count_A=0,count_B=0,i=0,len,temp=0,t,pos;
	cin >> t;
    char current;
	while(t--){
	cin>>a; i=0; count_A=0; count_B=0; temp=0;
	len=a.length();
//cout << len << endl;
	while(a[i]=='.'){
			i++;
	} current=a[i]; pos=i;
	for(i=pos;i<len;i++){
		if(a[i]==current){
		   if(current=='A'){
		   		count_A=count_A+1;
		   		count_A=count_A+temp;
		   		temp=0;
//cout << "Count_A is "<< count_A << endl;
		   }
		   else{
		   		count_B=count_B+1;
		   		count_B=count_B+temp;
		   		temp=0;
//cout << "Count_B is " << count_B << endl;	
	   }
		}
		   else if(a[i]!=current&&a[i]!='.'){
		   		temp=0;
		   		current=a[i];
		   		if(current=='A'){
		   		count_A=count_A+1;
//cout << "Count_A is "<< count_A << endl;
		   }
		   else{
		   		count_B=count_B+1;
//cout << "Count_B is "<< count_B << endl;
		   }
		   }
		   else{
		   		temp++;
		   }

		}

	
	cout << count_A << " " << count_B << endl;
	}
	return 0;
}
