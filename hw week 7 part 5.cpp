#include <iostream> 
#include <math.h>
using namespace std;
main(){
	int n;
	cout<<"n";
	cin>>n;
	for(int i=2;i<n;i++)
	for(int x=2;x*x<i;x++)
	if(i%x ==0)
	break;
	else if(x+1> sqrt(i)){
		cout<<i;
	}
	
}