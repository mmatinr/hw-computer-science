#include <iostream> 
using namespace std;
main(){
	int m,n,result;
	cout<< "m";
	cin>>m;
	cout<<"n";
	cin>>n;
	if(n>m){
		int x=n;
		n=m;
		m=x;
	}
	for(int a=1;a<=n;a++){
		if(m%a==0 && n%a==0){
			result=a;
		}
	}
	cout<<result;
}