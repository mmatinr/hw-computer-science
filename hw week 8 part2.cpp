#include <iostream> 
using namespace std;
main(){
	int a[5], b[5] , c;
	for(int x=0;x<5;x++){
		cin>> a[x];
	}
	for(int x=0;x<5;x++){
		cin>>b[x];
	}
    for(int x=0;x<5;x++){
    	c=a[x];
    	a[x]=b[x];
    	b[x]=c;
    	cout<<a[x]<<"\t"<<b[x];
	}

}