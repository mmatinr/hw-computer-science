#include <iostream> 
using namespace std;
main() { 

int s;
cout<< "please enter your salary";
cin>> s;
if( s < 6000000){
	cout<<  s; cout<< "is your salary after tax";
}
else if ( s >=  6000000  && s < 8000000){ 
s=s-s*0.05;
cout<< s; cout<< "is your salary after tax";
}
else if  (s >= 8000000 && s < 10000000 ){ 
s=s-(s*0.1);
cout<< s; cout<< "is your salary after tax";
}
else if (s >= 10000000 && s < 14000000){ 
s=s-(s*0.15);
cout<<  s; cout<< "is your salary after tax";
} 
else if (s >= 14000000 && s <18000000){
	s=s-(s*0.2);
	cout<< s; cout<< "is your salary after tax";
}  
else if (s >= 18000000 && s < 25000000){ 
s=s-(s*0.25); 
cout<< s; cout<< "is your salary after tax";
}
else {
	s=s-(0.35);
	cout<< s; cout<< "is your salary after tax";
}
}