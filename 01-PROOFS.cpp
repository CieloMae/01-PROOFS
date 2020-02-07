#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
class Proof{	

public:	
	int choice;		
    void input();		
    void identity(); 		
    void dominant(); 		
    void idempotent(); 		
    void doubleNegation(); 		
    void commutative();		
    void associative(); 		
    void distributive(); 		
    void demorgan(); 		
    void absorption();		
    void negation(); 		
    void proceed();		
    void conProposition();		
    void biProposition();
}; 
int main(int argc, char** argv) {	
    Proof proof;	
    proof.input();	 
    
    return 0;
} 
void Proof::input(){	
    	cout<<"1 - Identity Laws\t\t2 - Dominant Laws\t\t3 - Idempotent Laws\n4 - Double Negation Laws\t5 - Commutative Laws\t\t6 - Associative Laws\n7 - Distributive Laws\t\t8 - De Morgan's Laws\t\t9 - Absorption Laws\n10- Negation Laws\t\t11 - Exit"<<endl;
    	cout<<"Enter Choice: ";	
        cin>>choice;	
        switch(choice){		
    		case 1:			identity(); break;		
        	case 2:			dominant(); break;		
        	case 3:			idempotent(); break;		      
			case 4:			doubleNegation(); break;		
        	case 5:			commutative(); break;		
			case 6:			associative(); break;		
        	case 7:			distributive(); break;		
			case 8:			demorgan(); break;		
        	case 9:			absorption(); break;		
			case 10:		negation(); break;		
        	case 11:		break;		
        	default: 			
            	 cout<<"\nInvalid choice";			
        }	
  		  proceed();
} 

void Proof::identity(){
	cout<<"P^T=P\nPvF=P"<<endl;
} 

void Proof::dominant(){	
	cout<<"PvT=T\nP^F=F"<<endl;
} 

void Proof::idempotent(){	
	cout<<"PvP=P\nP^P=P"<<endl;
} 

void Proof::doubleNegation(){	
	cout<<"~(~P)=P"<<endl;
} 

void Proof::commutative(){	
	cout<<"PvQ=QvP\nP^Q=Q^P"<<endl;
} 

void Proof::associative(){	
	cout<<"(PvQ)vR=Pv(QvR)\n(P^Q)^R=P^(Q^R)"<<endl;
} 

void Proof::distributive(){	
	cout<<"Pv(QvR)=(PvQ)^(PvR)\nP^(QvR)=(P^Q)v(P^R)"<<endl;
} 

void Proof::demorgan(){	
	cout<<"~(P^Q)=~Pv~Q\n~(PvQ)=~P^~Q"<<endl;
} 

void Proof::absorption(){	
	cout<<"Pv(P^Q)=P\nP^(PvQ)"<<endl;
} 

void Proof::negation(){	
cout<<"Pv~P=T\nP^~P=F"<<endl;
} 

void Proof::proceed(){	
    cout<<"1 - Logical Eqivalence Involving Conditional Proposition\n2 - Logical Equivalence Involving Biconditional Proposition\n3 - Exit\n\nEnter Choice: ";	
    cin>>choice;	
    switch(choice){		
        case 1:			
    	    conProposition(); break;		
        case 2:			
        	biProposition(); break;		
        case 3:			
        	break;		
        default:			
        	cout<<"\nInvalid choice";	
        }
    }

void Proof::conProposition(){	
	cout<<"P->Q=~PvQ\nP->Q=~Q->~P\nPvQ=~P->Q\n~(P->Q)=P^~Q\n(P->Q)^(P->R)=P->(Q^R)\n(P->R)^(Q->R)=(PvQ)->R\n(P->Q)v(P->R)=P->(QvR)\n(P->R)v(Q->R)=(P^R)->R"<<endl;
    	cout<<"\n1 - Go Back\t2 - Exit\nEnter Choice: ";	
		cin>>choice;	
    	if(choice==1) input();
}
    
void Proof::biProposition(){	
		cout<<"P<->Q=(P->Q)^(Q->P)\nP<->Q=~P<->~Q\nP<->Q=(P^Q)v(~P^~Q)\n~(P<->Q)=P<->~Q"<<endl;
    	cout<<"\n1 - Go Back\t2 - Exit\nEnterChoice: ";
    	cin>>choice;
    	if(choice==1) input();
}
