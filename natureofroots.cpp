# include<iostream>
# include<cmath>
using namespace std;

int main() 			
 {
	float a,b,c,d;
	cout<<"Enter a,b,c\n";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
    if(d==0)
	{
		cout<<"Roots are Real and Equal"<<endl;
		cout<<(-b/(2*a))<<endl;
	}
	else if(d>0)
	{
        cout<<"Roots are real and unequal"<<endl;
		cout<<(-b+sqrt(b*b-4*a*c))/(2*a)<<endl;
		cout<<(-b-sqrt(b*b-4*a*c))/(2*a)<<endl;
	}
	else
		cout<<"imaginary\n";
	return 0;
}



 