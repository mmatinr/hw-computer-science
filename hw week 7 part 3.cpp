#include <iostream> 
using namespace std;
main() {
	int n,i;
	cout<<"n";
	cin>>n;
	for(i=2;i<=n/2;i++){
		if(n%i==0)
		cout<<i;
	}
}