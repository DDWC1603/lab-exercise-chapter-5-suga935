#include <iostream>
#include <conio.h>
using namespace std;
void masuk_tak();
int main()
{
   masuk_tak();
  cin.get();
}

void masuk_tak()
{
	char ans;
	
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;
	

	ans=' ';
	while(ans!='y' && ans!='n'){
		cin>>ans;
		if(ans!='y' && ans!='n')
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
		}

	if(ans=='n')
	{
		cout<<endl<<"the fudge?!";
		masuk_tak();
		cin.get();
	}
	cout<<endl<<"chantek!"<<endl;
	cin.get();
}
