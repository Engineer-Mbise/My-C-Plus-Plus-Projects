//Mbise marathon 
#include <iostream>
#include <cstdlib>
using namespace std;

class description{
	public:
		void giveDescription(){
			cout<<"     Welcome to MBISE MARATHON!!"<<char(3)<<char(3)<<char(3)<<endl;
			cout<<endl;
			cout<<"   Description of this Marathon will be as follows:"<<endl;
			cout<<endl;
			cout<<"  1.To run 20 kilometers you will pay 15000Tshs/="<<endl;
			cout<<endl;
			cout<<"  2.To run 15 kilometers you will pay 10000Tshs/="<<endl;
			cout<<endl;
			cout<<"  3.To run 10 kilometers you will pay 5000Tshs/="<<endl;
			cout<<endl;
		}
};
class chooseDistance{
	public:
		int option;
		
		void opt(){
			int op;
			int oop;
				int phn;
			cout<<"Enter your phone number:";
					cin>>phn;
					cout<<endl;
					srand(phn);
				 
		
			chosing:
			cout<<"Choose whether you want to run 20,15 or 10 kilometers:";
			cin>>op;
				cout<<endl;
			option=op;
			switch(option){
				case 20:
					cout<<"You are about to join the group of people who will run 20 kilometers:"<<endl;
						
					cout<<"Press 1 to continue:";
					cin>>oop;
						cout<<endl;
					if(oop==1){
				
					cout<<"To pay the cost of participation use the control number:"<<rand()+1191000<<endl;
					
				}
					else{
					cout<<"You have terminated the registration process!!"<<endl;
				}
					break;
					
				
			
					
					case 15:
					cout<<"You are about to join the group of people who will run 15 kilometers:"<<endl;
					
					srand(phn);
					
				cout<<"Press 1 to continue:";
					cin>>oop;
					cout<<endl;	
					if(oop==1){
				cout<<"To pay the cost of participation use the control number:"<<rand()+1091010<<endl;
				
			}
			else{
				cout<<"You have terminated the registration process!!"<<endl;
			}
				break;
				
					case 10:
					cout<<"You are about to join the group of people who will run 10 kilometers:"<<endl;
				
				
					srand(phn);
					cout<<"Press 1 to continue:";
					cin>>oop;
					cout<<endl;	
					if(oop==1){
					cout<<"To pay the cost of participation use the control number:"<<rand()+1401050<<endl;
					
		}
		else{
			cout<<"You have terminated the registration process!!"<<endl;
		}
			
				break;
				
				default:
				cout<<"The suggested distances are 20,15 and 10 only!!"<<endl;
					goto chosing;
					
					
			}
				int cn;
					cout<<"choose 0 to proceed:";
				
				cin>>oop;
				cout<<endl;
				if(oop==0){
				cout<<"You are now in confirmation stage"<<endl;
				cout<<endl;
			
			
				cout<<"To check if you have qualified the previous steps your phone number is required again:";
				cin>>cn;
				cout<<endl;
			}
			else{
				cout<<"You have terminated the registration process!!"<<endl;
			}
				
		
			
			
		
			if(cn==phn){
				srand(cn);
				cout<<"Congrats!! you are now a member of mbise marathon your membership number is"<<" "<<rand()<<endl;
				
			}
			else{
				cout<<"Registration failed!!"<<endl;
			}
		}
	
};

int main(){
	description d;
	d.giveDescription();
	
	chooseDistance cd;
	cd.opt();
	

	
	
}