#include <iostream>
#include<string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	menu:
		string q, p;
		int choice;
		system("cls");
		p.clear();
		q.clear();
		cout<<"1- Conjunction\t\t2 - Disjunction\t\t3 - Negation\n4 - Conditional\t\t5 - Biconditional\t6 - Exit"<< endl;
		cout<<"Enter Choice: ";
		cin>>(choice);
		switch(choice)
		{
			case 1: goto conjunction;
			break;
			case 2: goto disjunction;
			break;
			case 3: goto negation;
			break;
			case 4: goto conditional;
			break;
			case 5: goto biconditional;
			break;
			case 6: cout<< "\nExiting Program";
			exit(0);
			break;
			default: cout<<"\nUnrecognized Input!"<<endl; system("pause"); system ("cls"); goto menu;
		}
		conjunction:
			
			system("cls");
			cout<<"\tConjunction\t"<<endl;
			cout<<"Value for P:";
			cin>>p;
			cout<<"\nValue for Q: ";
			cin>>q;
			
			if(q=="TRUE"&&p=="TRUE")
			{
				cout<<"\np^q=True"<<endl;
			}
			else cout<<("\np^q=False")<<endl;
		
			system("Pause");
			goto menu;
			
			disjunction:
				
				system("cls");
				cout<<"\tDisjunction\t"<<endl;
				cout<<"Value for P: ";
				cin>>p;
				cout<<"\nValue for Q: ";
				cin>> q;
				
				if(q=="FALSE"&&p=="FALSE")
				{
					cout<<"\np or q = False"<<endl;
				}
				else cout<<("\np or q= True")<<endl;
				
				system("pause");
				goto menu;
				
				negation:
					
					system("cls");
					cout<<"\tNegation\t"<<endl;
					cout<<"Enter value: ";
					cin>> q;
					
					if(q=="TRUE") cout<<"\nq=False"<<endl;
					else cout<<"\nq=True"<<endl;
					system("pause");
					goto menu;
					
					conditional:
					
					system("cls");
					cout<<"\tConditional\t"<<endl;
					cout<<"Value of p: ";
					cin>>p;
					cout<<"\nValue of q: ";
					cin>>q;
					if(p=="true"&&q=="false")cout <<"q-->p = False"<<endl;
					else cout<<"q--p=True"<<endl;
					
					system("pause");
					goto menu;
					
					biconditional:
					
					system("cls");
					cout<<"\tBiconditional\t"<<endl;
					cout<<"Value of p: ";
					cin>>p;
					cout<<"\nValue of q: ";
					cin>>q;
					
					if((p=="true"&&q=="true")||(p=="false"&&q=="false")) cout<<"\np<--> = True"<<endl;
					
					system ("pause");
					goto menu;
					
						return 0;
}
