#include<iostream>
using namespace std;
void page();
void scenario_1();
void scenario_2();
int main()
{
	page();
	return 0;
}
void page ()
{
	int b;
	  cout<<"***DATA STRUCTURE AND ALGORITHM***\n\n";
	  cout<<"1. Scenario_1\n";
	  cout<<"2. Scenario_2\n";
	  cout<<"Enter your choice: ";
	  cin>> b;
	  
	  switch(b)
	  {
	  
	  case 1:
	  	
	  	scenario_1();
	  	system("cls");
	  	case 2:
	  	
	  	scenario_2();
	  	system("cls");


}

}
void scenario_1()
{
	system("cls");
	cout<<"***LIST OF BSCS 2 STUDENT****\n\n";
	  	 string a,c,d,e,f;
	  	 cout<<"Enter student's Name\n\n";
	  	 cout << endl;
	  	 cout <<"1. ";
	  	 cin >>a;
	  	 cout <<"2. ";
	  	 cin >> c;
	     cout <<"3. ";
	  	 cin >>d;
	  	 cout <<"4. ";
	  	 cin >>e;
	  	 cout <<"5. ";
	  	 cin >>f;
	  	 system ("cls");

	   cout <<"LIST OF BSCS 2 STUDENT"<<endl;
	  	cout<< "1. " << a << endl;
	  	cout<< "2. " << c << endl;
	  	cout<< "3. " << d<< endl;
	  	cout<< "4. " << e<< endl;
	  	cout<< "5. " << f<< endl;
	  	
	  	system ("pause");
	  	page();
	  	
	  	
}
void scenario_2()
{
	system("cls");
	float a,b;
	double c;
	int sum=c;
	
	string add = "+";
	string sub = "-";
	string mul = "*";
	string div = "/";
	
	string operation;
	
	
	cout<<"enter num: "<<endl;
	cin>>a;
	cout<<"enter num2: "<<endl;
	cin>>b;
	cout<<"enter operation: "<<endl;
	cin>>operation;
	
	if(operation == add){
		(c = a +b);
		cout << a<< "+" << b <<"=" <<c <<endl;
	}
	else if (operation == sub)
	
	{
		(c = a-b);
		cout << a<< "-" << b <<"=" <<c <<endl;
	}
	else if (operation == mul)
	{
		(c = a*b);
		cout << a<< "*" << b <<"=" <<c <<endl;
	}
	else if (operation == div)
	{
		(c = a/b);
		cout << a<< "/" << b <<"=" <<c <<endl;
	}
	
	  	system ("pause");
	  	page();
	  	
	  	
}


	  
