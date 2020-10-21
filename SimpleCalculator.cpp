//Simple way to do a calculator with switch
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//Variables
	double N1;//Number 1 to be entered
	double N2;//Number 2 to be entered
	char op;//Operation symbol
	double result = 0;//Result of the operation
	
	//Data input
	cin>>N1;//Value one input
	cin>>op;//Symbol input
	cin>>N2;//Value two input
	
	switch(op)
	{
	case '+':
		//If op is +, sum values
		result = N1 + N2;
		cout<<fixed<<setprecision(2)<<result<<endl;
		break;
	
	case '-':
		//If op is -, subtract values 
		result = N1 - N2;
		cout<<fixed<<setprecision(2)<<result<<endl;
		break;
	
	case '*':
		//If op is *, multiply values
		result = N1 * N2;
		cout<<fixed<<setprecision(2)<<result<<endl;
		break;
	
	case '/':
		//If op is /, divide values
		result = N1 / N2;
		cout<<fixed<<setprecision(2)<<result<<endl;
		break;
	
	default:
		//If any other symbol is entered, show this message
		cout<<"Unrecognized operation"<<endl; 
		break;
	}
	return 0;
}