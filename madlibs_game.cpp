#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string name;
	string noun1;
	string noun2;
	string noun3;
	string your;
	char op;
	int a = 0;
	do{
	cout<<"Enter recipient's name:"<<endl;
    
	getline(cin, name);
	cout<<"Enter plural noun1:"<<endl;
	cin>>noun1;
	cout<<"Enter plural noun2:"<<endl;
	cin>>noun2;
	cout<<"Enter plural noun3:"<<endl;
	cin>>noun3;
	cout<<"Enter your name:"<<endl;
	cin.ignore();
	getline(cin, your);
	cout<<endl<<endl;
	cout<<right;
	cout<<setw(15)<<right<<"\t\tMad Libs Game!"<<endl;
	cout<<setw(6)<<"\t\tDear "<<name<<","<<endl;
	cout<<"\t\t"<<noun1<<" are red,"<<endl;
	cout<<"\t\t"<<noun2<<" are blue,"<<endl;
	cout<<"\t\t"<<"You love "<<noun3<<"!"<<endl;
	cout<<"\t\t"<<"From "<<your<<"."<<endl;
	cout<<endl;
	cout<<"Want to play again(y/n)?"<<endl;
	cin>>op;
    if(op=='y'){
    	a = 1;
    	cin.ignore();
	}
	else{
		a = 0;
	}
    }
    while(a==1);
	
	return 0;
}
