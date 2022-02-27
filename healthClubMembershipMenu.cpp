#include<iostream>
using namespace std;

int main()
{
	//Just Make an Table for Grace	
	//Banner Membership Menu
	system("Color F");
	cout<<"\t\t    |=========================================|"<<endl;
	cout<<"\t\t    |=========================================|"<<endl;
	cout<<"\t\t      || >>  Health Club Membership Menu << ||"<<endl;
	cout<<"\t\t    |=========================================|"<<endl;
	cout<<"\t\t    |=========================================|\n\n"<<endl;
	
	//menu choice variables
	int choice, months, chooseAgain;
	
	//Taken Extra for Concession
	int  totalCharges, end;
	
	//Charges taken
	float charges;
	
	
	//Greetings
	cout<<"Welcome! Sir!";		
	//It will tell what we have 
	cout<<"\nWe have the following Memberships,As You Can see.";
	
	//Table of membership menu
	cout<<"\n|Serial no.	Type					|Price	|";
			
	cout<<"\n|1|		Adult Membership			|500	|";
					
	cout<<"\n|2|       	Child Membership			|400	|";
		
	cout<<"\n|3|		Senior Membership 			|100	|";

	//It will tell to select from Menu 
	//Program Also Starts from here
	cout<<"\n>>Now Select from the Menu<<";
		cout<<"\n1. Adult Membership";
			cout<<"\n2. Child Membership";
				cout<<"\n3. Senior Membership";

	//Goto statement
	chooseAgain:
	
	//Ask to enter any choice
	cout<<"\nSelect Your Choice : ";
	cin>>choice;
	
	//Condition Applied 
	if(choice >= 1 && choice <= 3)
	{
	//Ask to enter for how many months he/she wants to take membership
	cout<<"For How Many Months You Want Membership : ";
	cin>>months;
	
	//Condition applied swtich 	
	switch(choice)
	{
		//Charges Applied
		case 1:
			charges = months * 500.0;
			break;
		
		//Charges Applied	
		case 2:
			charges = months * 400.0;
			break;
		
		//Charges Applied	
		case 3:
			charges = months * 100.0;		
			break;
	}
			//It will show total Charges
			cout<<"Total Charges of per Month are : "<<charges;	
	
	//Condition if else
	}else if(choice != 3){
		
	//It will tell what are the right choices
		cout<<"The Valid Choices are 1 to 3";
		cout<<"\nGoto Choices And Select Again";
			//Goto statement to choose again
			goto chooseAgain;
	//Else Emty 
	}else{		
	}
	
	//Taking Criteria variables
		int criteria;
		//Separately taken to understand easily
		int concession;
			//Goto statement to select criteria again
			int criteriaAgain;
				//Here we will tell about the concession in Charges
				cout<<"\n\nWe're giving you special offer";
					cout<<"\nWe're giving concession'";
						cout<<"\nAccording to our criteria";
	
	//Table of concession	
	cout<<"\n|Serial no.	Type					|Concession	|";
			
	cout<<"\n|1|		Govt. Employee				|25% off.	|";
					
	cout<<"\n|2|		Student	          			|50% off.	|";	

	cout<<"\n|3|		New Customer				|10% off.	|";

	//goto criteria statement
	criteriaAgain:
		//Header to tell select from table
		cout<<"\n>>Select from given criteria<<";
	//Ask to select criteria
	cout<<"\nSelect Criteria : ";
	cin>>criteria;
	
	//Coniditon start
	if(criteria >= 1 && criteria <= 3)
	{
		//Condition applied
		switch(criteria)
		{
			//Concession at case 1
			case 1:
				concession = charges - ((25.0/100.0)*charges);
				break;
			
			//concession at case 2
			case 2:
				concession = charges - ((50.0/100.0)*charges);
				break;
				
			//Concession at case 3
			case 3:
				concession = charges - ((10.0/100.0)*charges);		
				break;
		}
		//Total Amount with concession
		cout<<"Your Total Amount With Concession is : "<<concession;
	//Criteria !=3 which tell to select right one from options
	}else if(criteria != 3){
		//Message to select again
		cout<<"Please Select from 1 to 3";
	//Goto statement
	goto criteriaAgain;
	}
	//Buttons Created for wrong/right Choices
	int button, buttonAgain;
		//Ask to customer that he wants to become a member or not?
		cout<<"\nWould you like to be a Member of us?";
			//creating button Yes OR No
			cout<<"\nYes OR No";
				//Goto statement of button selection again 
				buttonAgain:
				//Button 1 created to buy
				cout<<"\nPress 1 (to Get Membership)";
			//Button 2 created to exit
			cout<<"\nPress 2 (to Exit)";
  		//By user
		cout<<"\nPress button : ";
 		cin>>button;
  
	//Condition applied made buttons
	if(button == 1){
		//It will tell That user has got the Membership 
		cout<<"\nWelcome! Your Registration is completed\nYou're now Member of us!";
	//Program Terminated
	}else if(button == 2){
		//Greetings, Bye
		cout<<"\nThanks for coming!";
	}else{
		//It will ask to select again after wrong selection
		cout<<"Please Select Again!"<<endl;
			//Goto statement
			goto buttonAgain;
	}	
	return 0;
}
