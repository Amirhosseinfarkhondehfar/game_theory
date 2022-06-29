#include<bits/stdc++.h>
using namespace std;

int main(){
	long long xa,xb,ya,yb;
	cin>>xa>>ya>>xb>>yb;
	if(xa<=xb&&ya<=yb){
		cout<<"Polycarp"<<endl;
		return 0;
	}
	if(xb<=xa&&yb<=ya){
		cout<<"Vasiliy"<<endl;
		return 0;
	}
	if(xa>xb){
		bool f=0;
		for(long long i=0;i<=xb;i++){
			long long s=max(xb-i,yb-ya),ss=xa-i;
			if(s<ss){
				f=1;
			}
		}
		if(f){
		cout<<"Vasiliy"<<endl;
		return 0;	
		}
		else{
		cout<<"Polycarp"<<endl;
		return 0;
		}
	}
	else{
		bool f=0;
		for(long long i=0;i<=yb;i++){
			long long s=max(xb-xa,yb-i),ss=ya-i;
			if(s<ss){
				f=1;
			}
		}
		if(f){
		cout<<"Vasiliy"<<endl;
		return 0;	
		}
		else{
		cout<<"Polycarp"<<endl;
		return 0;
		}	
	}
}
