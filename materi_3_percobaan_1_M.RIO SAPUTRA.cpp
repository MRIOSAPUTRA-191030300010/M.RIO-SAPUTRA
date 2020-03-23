#include <iostream>

using namespace std;

int main ()
{
	int bil;
	cout<<"masukkan sebuah bilangan:";
	cin>>bil;
	
	if(bil >= 0)
		cout<<bil<<"adalah bilangan POSISTIF"<<endl;
		else
		cout<<bil<<"adalah bilangan NEGATIF"<<endl;
		
		system("pause");
		return 0;
}
