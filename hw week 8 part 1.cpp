#include <iostream> 
using namespace std;
main() { 
int numbers[10];
int max,min;
for(int x=0;x<10;x++)
{ 
cin>>numbers[x];
}
max= numbers[0];
min=numbers[0];
for(int x=0;x<10;x++){
	if(numbers[x]>max){
		max=numbers[x];
	} 
	if(numbers[x]<min){
		min=numbers[x];
	}
}
cout<<"max"<<max;
cout<<"min"<<min;

}
