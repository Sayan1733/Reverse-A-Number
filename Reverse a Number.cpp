#include <iostream>
#include <conio.h>
//Making A number reverse
using namespace std;

int main() 
{
	int n,lastdigit,result;			//intialize variables
	
	cout<<"Enter the number:";		//taking user input
	cin>>n;
	
	cout<<"The reverse of the "<<n<<" is ";
	
	while(n>0){
								
			lastdigit=n%10;						//storing remainder as last digit
		result= result*10 + lastdigit;			//storing last digit in result
		n=n/10;									//preparing n for the next part of loop
	}
	cout<<result;
	
	getch();								
	return 0;
}
