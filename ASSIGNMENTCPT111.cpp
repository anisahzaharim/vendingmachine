// Assignment 2
// CPT111 - Priciples of Programming
// Name : NUR ANISAH ZAHARIM
// No Matric : 141052
// GROUP Z2 (B) 
// Lecturer : Pn Maziani Sabudin
// INTELLIGENT VENDING MACHINE

#include <iostream>
#include <cstdlib> // function for random number
#include <ctime>	// function for date and time 
#include <iomanip> // function to manipulate . Use for setprecision decimal.
#include <stdio.h> // for physical device such as keyboard
#include <cmath> //  functions to compute common mathematical operations and transformations
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{    
   // to calculate the duration of transaction
	int start_s=clock();
	
	cout<< "**************************************************************************************\n";
    cout <<  " Welcome to INTELLIGENT VENDING MACHINE" << endl;
    cout<< "**************************************************************************************\n";
	
	// current date/time 
   time_t now = time(0);
   
   char* dt = ctime(&now);

   cout << "                                                               The local date and time is: " << dt << endl;
   
   cout << "Please select an option from the menu below: " << endl << endl;


  
   // to declare
   float deposit,amount,balance,newbalance,sen,totalprice;
   int choice,sen2,ringgit,digit,temp,digit1,digit2,digit3,digit4,RMConversion,RM,Hundreds = 0,Fifties = 0,Twenties =0,Tens =0,Fives = 0;
   int Ones = 0,CentsConversion,Change, Cents, Ten_cent, Five_cent,One_cent,Fifty_cent;
   char choice1, choice2, choice3='Y',type,answer; 
 
 // to ensure loop execute one time   
 do {
 
  cout<< "......................................MENU................................................\n";
  cout << "\n";
    cout<<"    1. eWallet\n";
     cout<<"----------------------------------------------------------------------------------------\n";
	cout<<"    2. Purchase items\n";
	 cout<<"----------------------------------------------------------------------------------------\n";
	cout<<"    3. Display transaction\n";
	 cout<<"----------------------------------------------------------------------------------------\n";
	cout<<"    4. Pin No\n";
	 cout<<"----------------------------------------------------------------------------------------\n";
	cout<<"    5. Exit\n";
	 cout<<"----------------------------------------------------------------------------------------\n";

	cout<<"  Enter your choice: "; //user choose 1-5 menu
	cin>>choice;
	return 0;
	
		switch (choice) //to match more than one condition 
	{
		case 1:
			// maximum amount ewallet is 100
			cout << "Enter the amount (max 100) : RM " ;
			cin >> deposit;
			if (deposit>100)
			{
			cout << "Invalid.Please enter amount below than 100\n";
			cout << "Enter the amount (max 100) : RM " ;
			cin >> deposit;
			cout<<"\n Your ewallet in RM : "<< deposit << endl;
		    }
			else
			{
			cout<<"\n Your ewallet in RM : "<< deposit << endl;
		    }
			break; //terminate
			
	// price is randomly produced	
	srand (time(0));


	    case 2:
	    	
	    	//Display Choice
	         cout << "\nWhat would you like today " << " ?\n";
             cout << "\n............................Menu............................." <<endl;
             cout << " _______________________________________________________________"<<endl;
             cout << "|A: Coca-Cola                                                   |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|B: Coffee                                                      |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|C: Espresso                                                    |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|D: Nescafe                                                     |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|E: Mineral water                                               |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|F: Potato chip                                                 |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|G: Cadbury                                                     |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|H: Milo                                                        |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|I: Instant Noodle Cup                                          |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
             cout << "|J: Ice Lemon Tea                                               |"<< endl;
             cout << "|_______________________________________________________________|"<<endl;
        
        
        {   
            // user choose their choice
            cout << "\nYour choice?\n" << endl;
            cin >> type;
        }


         if (type == 'A' || type == 'a')
         {

            cout << "A: Coca-cola "  << endl;
            totalprice = totalprice + (1.63+(rand()%5));

        }


        if (type == 'B' || type == 'b')
        {

            cout << "B: Coffee "  << endl;
            totalprice = totalprice + (1.63+(rand()%5));

        }


      if (type == 'C' || type == 'c')
        {

            cout << "C: Espresso" << endl;
            totalprice = totalprice + (1.64+(rand()%5));

        }


         if (type == 'D' || type == 'd')
        {

            cout << "D: Nescafe"  << endl;
            totalprice = totalprice + (1.65+(rand()%5));

        }


        if (type == 'E' || type == 'e')
        {

            cout << "E: Mineral water "  << endl;
            totalprice = totalprice + (1.25+(rand()%2));

        }
         if (type == 'F' || type == 'f')
        {

            cout << "F: Potato chip "  << endl;
            totalprice = totalprice + (1.33+(rand()%3));

        }
         if (type == 'G' || type == 'g')
        {

            cout << "G: Cadbury " << endl;
            totalprice = totalprice + (1.64+(rand()%7));

        }
         if (type == 'H' || type == 'h')
        {

            cout << "H: Milo "  << endl;
            totalprice = totalprice + (1.57+(rand()%5));

        }
         if (type == 'I' || type == 'i')
        {

            cout << "I: Instant Noodle Cup " << endl;
            totalprice = totalprice + (1.58+(rand()%6));

        }
         if (type == 'J' || type == 'j')
        {

            cout << "J: Ice Lemon Tea "  << endl;
            totalprice = totalprice + (1.37+(rand()%3));

        }
        
		
         //calculate the price 
         
         totalprice = totalprice;
         cout << "The final bill for today is RM  "<< totalprice << endl;
         
         //check if the amount sufficient 
         
         if (totalprice<deposit)
         {
         	cout << "Sufficient." << endl;
		 }
		 // if not sufficient. User allow to topup
		 else
		 {
		    cout << "Insufficient. Please topup your ewallet." << endl;
		    cout << "How much do you want to topup ? ";
		    cin >> amount;
		    deposit = deposit +amount ;
		    cout << "You have successfully topup to RM " << deposit << endl;
    	 }
			break; //terminate
			
		case 3:
			//Display item purchased and amount due
			cout << "The item you have purchased is " << type << endl;
			cout << "The amount due is RM : " << totalprice << endl;
			break;
			
	
		case 4:
			
			//calculate the balance in ewallet
    	 balance = deposit-totalprice;
		cout << "YOUR BALANCE IN RM :" << balance << endl ; //for example Rm15.65
		ringgit = static_cast<int>(balance); // let the RM15.65 becomes interger so it becomes 15
    	sen = (balance-ringgit) * 10; // Sen become 6.5
    	sen2 = static_cast<int>(sen*10)%10; // Make sen become interger , 5
    	
    	if (sen2 >= 3)
    	  sen = ceil(sen); // 5 is bigger than 3. 
        else
    	  sen = floor(sen); // if RM15.01. it will become RM15.00. Because sen2 will be 1. 1 is less than 3
    	    
    	newbalance = ringgit + sen /10; // RM15.65 now become RM16.00
        
        cout << "YOUR BALANCE IN EWALLET NOW IS RM " << newbalance << endl;
        
    cout << "The amount to convert: RM " << newbalance << endl;
    
     //RM Calculation.
    RMConversion = newbalance * 100;
    Hundreds = RMConversion / 10000;
    Change = RMConversion % 10000;
    Fifties = Change / 5000;
    Change %= 5000;
    Twenties = Change / 2000;
    Change %= 2000;
    Tens = Change / 1000;
    Change %= 1000;
    Fives = Change / 500;
    Change %= 500;
    Ones = Change / 100;
    Change %= 100;

    //Resets the Stack to calculate for the cents.
    RM = newbalance;   
    CentsConversion = newbalance * 1000;   
    RM *= 1000;    
    Cents = CentsConversion - RM ;

    //Cents Calculation.
   
    Fifty_cent = Change / 500 ;
    Change %= 500;
	Ten_cent = Change / 100;
    Change %= 100;
    Five_cent = Change / 50;
    Change %= 50;
    One_cent = Change / 10;
    Change %= 10;

    cout << "\nNumber of RM Hundred Bills: " << Hundreds << endl;
    cout << "Number of RM Fifty  Bills: " << Fifties << endl;
    cout << "Number of RM Twenty Bills: " << Twenties << endl;
    cout << "Number of RM Ten Bills: " << Tens << endl;
    cout << "Number of RM Five Bills: " << Fives << endl;
    cout << "Number of RM One Bills: " << Ones << endl;

   
    cout << "Number of Fifty cents :" << Fifty_cent << endl;
	cout << "Number of Ten cents: " << Ten_cent << endl;
    cout << "Number of Five Cents: " << Five_cent << endl;
    cout << "Number of One cents: " << One_cent << endl;
	break;
		
			
		case 5:
			 // allow user to select currency exchange of the price and balance  
    
            cout << "\n";  
            cout << "\n";
            cout << " Currency Converter. Market values accurate as of 01/10/2018\n" << endl;
      
      while (choice3=='Y')  
      {  
           cout<<"Select the currencies that you want to exchange\n";  
           cout<<" - Enter R for Ringgit Malaysia\n";  
           cout<<" - Enter E for Yuan\n";  
           cout<<" - Enter D for Riyal\n"<<endl;  
           // user select the currency
           cout<<"Please select the currency that you want to convert"<<endl;  
           cin>>choice1;  
           // currency that user want to convert
           cout<<"Please enter the currency that you want to convert into"<<endl;  
           cin>>choice2;  
            
           if ( choice1=='R' && choice2=='E') 
		   // convert RM = YUAN 
           {  
                cout << "The final bill for today is  " ;
                cout<<totalprice <<" Ringgit Malaysia = "<<totalprice*1.66<<" Yuan"<<endl; 
				cout << "YOUR BALANCE IN EWALLET NOW IS  "; 
				cout<<newbalance <<" Ringgit Malaysia = "<<newbalance*1.66<<" Yuan"<<endl; 
				
           }  
           if ( choice1=='R' && choice2=='D') 
		   // convert RM = RIYAL
           {  
                cout << "The final bill for today is " ; 
                cout<<totalprice <<" Ringgit Malaysia = "<<totalprice*0.91<<" Riyal"<<endl;  
				cout << "YOUR BALANCE IN EWALLET NOW IS  "; 
				cout<<newbalance <<" Ringgit Malaysia = "<<newbalance*0.91<<" Riyal"<<endl; 
           }  
           if ( choice1=='E' && choice2=='R')  
           // convert Yuan = RM
           {  
                cout << "The final bill for today is  " ;
                cout<<totalprice <<" Yuan = "<<totalprice*0.60<<" Ringgit Malaysia"<<endl;
                cout << "YOUR BALANCE IN EWALLET NOW IS  "; 
				cout<<newbalance <<" Yuan = "<<newbalance*0.60<<" RM"<<endl; 
				   
           }  
           if ( choice1=='E' && choice2=='D') 
		   // convert YUAN = RIYAL 
           {  
                cout << "The final bill for today is  " ; 
                cout<<totalprice <<" Yuan = "<<totalprice*0.55<<" Riyal"<<endl;  
				cout << "YOUR BALANCE IN EWALLET NOW IS  "; 
				cout<<newbalance <<" Yuan = "<<newbalance*0.55<<" Riyal"<<endl;  
           }  
           if ( choice1=='D' && choice2=='R') 
		   // convert RIYAL = RM 
           {  
                cout << "The final bill for today is  " ;  
                cout<<totalprice <<" Riyal = "<<totalprice*1.10<<" Ringgit Malaysia"<<endl; 
				cout << "YOUR BALANCE IN EWALLET NOW IS  "; 
				cout<<newbalance <<" Riyal = "<<newbalance*1.10<<" RM"<<endl;   
           }  
           if ( choice1=='D' && choice2=='E') 
		   // convert RIYAL = YUAN 
           {  
                cout << "The final bill for today is  " ; 
                cout<<totalprice <<" Riyal = "<<totalprice*1.83<<" Yuan"<<endl;
				cout << "YOUR BALANCE IN EWALLET NOW IS  "; 
				cout<<newbalance <<" Riyal = "<<newbalance*1.83<<" Yuan"<<endl;    
           }
		   // allow user to make another conversion  
           cout<<"Do you want to make another conversion? ( Y/N ) :";  
           cin>>choice3;  
      }  
      break;
      
      
      	
      case 6:
		// user enter their secret code  

	cout << "PLEASE ENTER YOUR 4-DIGIT   "<< " :"<< endl;
	cout << "PLEASE DO NOT ENTER 0 DIGIT " << endl;
	cin >> digit;
	

	
	digit1= digit/1000;
	digit2= (digit % 1000)/100;
	digit3= (digit % 100)/10;
	digit4= (digit % 10);
	
	
	//determine whether the digit entered even or odd
	//if even, add even digit by 11 and mod 10
	//if odd, add by 7 and mod 10
	
	if ( digit1 % 2 == 0 || digit2 % 2 == 0 || digit3 % 2 == 0 || digit4 % 2 == 0  )
	  {
	  digit1 = (digit1 + 11) % 10 ;
	  digit2 = (digit2 + 11) % 10 ;
	  digit3 = (digit3 + 11) % 10 ;
	  digit4 = (digit4 + 11) % 10 ;
      }
	else 
	  {
	  digit1 = (digit1 + 7) % 10 ;
	  digit2 = (digit2 + 7) % 10 ;
	  digit3 = (digit3 + 7) % 10 ;
	  digit4 = (digit4 + 7) % 10 ;
      }
      
      // swap the first digit with fourth digit. 
      // swap second digit with third digit.
	  temp=digit1;
      digit1=digit4;
      digit4=temp;
      
      temp=digit2;
      digit2=digit3;
      digit3=temp;
      
    cout << "Secret Code : ";
	cout << digit1 << digit2 << digit3 << digit4 << endl ;
			break;
			
    case 7:
      		
      	// thank the user
          cout << "THANK YOU. ENJOY! HOPE TO SEE YOU AGAIN "  << endl;
          break;
   
			
	}

	}while (choice !=7);
	// to show the duration of transcaction
    int stop_s=clock();
    cout << "Your transaction duration is " << (stop_s-start_s)/float(CLOCKS_PER_SEC) << setprecision(2) << fixed << " sec" << endl;
   
   // end of program
}
