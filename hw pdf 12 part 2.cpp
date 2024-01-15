#include<iostream>
#include<cmath>
using namespace std;
double power(double x,int y){
	    if (y==0){
	    return 1;
	    }
	    else if(y>0){return x * power(x,y-1);
	    }
	    else{
	    	return 1/x*power(x,y+1);
		}
	}

int main(){
	double x;
	int y;
	cout<<"enter x  :";
	cin>>x;
	cout<<"enter y  :";
	cin>>y;
	double result = power(x,y);
	cout<<x<<"to the power of"<<y<<" is "<<result<<"\n";
}