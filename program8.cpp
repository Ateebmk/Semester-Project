
#include <iostream>
using namespace std;

int main() 
{

    int rows=8;

    for(int i=1;i<=8;i++)
    {
    	for(int j=8; j>=i;j--)
    	{
    		cout<<" ";
		}
		
    	for(int k=1; k<=(2*i)-1;k++)
    	{
    		cout<<"*";
		}	
		cout<<"\n";
	}
	
	for(int i=7;i>=1;i--)
    {
    	for(int j=1; j<=(8-i)+1;j++)
    	{
    		cout<<" ";
		}
		
    	for(int k=1; k<=(2*i)-1;k++)
    	{
    		cout<<"*";
		}
		
		cout<<"\n";
	}
    
	cout<<"\n\n\n";
    
    return 0;
}
