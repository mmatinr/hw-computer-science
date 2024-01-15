#include <iostream> 
using namespace std;
main() {

int n,m,result;
cout<<"m" ;
cin>> m;
cout<< " n";
cin>> n;
result= 1;
for( int i=1; i<=n; i++ ){ 
result = m*result;
}
cout<< result;
}