#include <iostream>
#include <string>
using namespace std;
					
class menu
{
public:
void body ()
{
cout << "!!!!!!!!!!!!!!! WELCOME TO COFFE COFFEE SHOP !!!!!!!!!!!!!!!" << endl;
cout << "---------  Please choose a coffe to drink you want  -------" << endl;
cout << "                _____COLD COFFEE MENU_____            " << endl;
cout << "------- 1-  Cold Brew      (S/M/L)   2KM/2.5KM/3KM    -------" << endl;
cout << "------- 2-  Iced Americano (S/M/L)   1.5KM/2KM/2.5KM  -------" << endl;
cout << "------- 3-  Iced Latte     (S/M/L)   2.5KM/3KM/3.5KM  -------" << endl;
cout << "------- 4-  Iced Espresso  (S/M/L)   4.5KM/5KM/5.5KM  -------"<< endl;
cout << "------- 5-  Iced Mocha     (S/M/L)   3KM/3.5KM/4KM    -------"<< endl;
cout << "------- 6-  Frappuccino    (S/M/L)   5KM/5.5KM/6KM    -------"<< endl;
					}
					};
					
					int main ()
					{
					menu t;
					t.body();
					int coldBrew=50;
                    int icedAmericano=50;
                    int icedLatte=50;
                    int icedEspresso=50;
                    int icedmocha=50;
                    int Frappuccino=50;
                    //50 quantity is available for each drink
	                int option;
	                int money=50;
                    char drink;
                    double coin;
                    double change;
                    string size;
                    bool keepGoing=true;
                    double price;
                    
					system ( "color b");
					cin>> option;
					switch( option) {
					
					
					
					
					case 1:
						
					coldBrew-- ;
					
							   	// When customers choose cold brew, the number of cold brew will decrease.
					// If there is no cold brew more than 0, it is not going to work.
								while (true) {
    // Code to be executed repeatedly goes here

    cout << "Enter the size (S/M/L): ";
    cin >> size;
    double price;
    // Check if the input size is valid
    if (size == "S" || size == "M" || size == "L") {
        break; // Exit the loop
    } else {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
    }
}
				
			     	
                   if (size == "S") {
                     price = 2.0; // price is 2.0 KM for size S
                   } else if (size == "M") {
                    price = 2.5; // price is 2.5 KM for size M
                   } else if (size == "L") {
                    price = 3.0; // price is 3.0 KM for size L
                }

				while (keepGoing) {
   

    // Check if the input size is valid
    if (size != "S" && size != "M" && size != "L") {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
        keepGoing = true; // Continue the loop
    } else {
        keepGoing = false; // Update control variable to stop the loop
    }
}

				if(coldBrew>0){
                cout<<"Insert coin: ";
                cin>>coin;
                if (cin.fail()){
                cout<< "please try again we can only accept KM"<< endl;
				}
				
				
			   
                if(coin>=price){
                                
                cout<<"Cold Brew will be served as soon as possible ..."<<endl;
                if(coin>price){
                // If user insert more money than required , the machine will calculate change, decrease markCount and add money to toal money
                change=(coin-price);
                 
                 money+=price;
                 cout<<"Change: "<<change<<" KM";
           }
              } else if (coin < price) {
               cout << "Please try again. Insufficient funds!." << endl;                                   
    } 
    break;
} else {
    cout<<"Cold Brew does not exist , Something else?";
    cin>>drink;
}
													    
										    
										    
										    
										    case 2:
										    	icedAmericano--;
							   	// When customers choose Iced Americano, the number of cold brew will decrease.
					// If there is no Iced Americano more than 0, it is not going to work.
								while (true) {
    // Code to be executed repeatedly goes here

    cout << "Enter the size (S/M/L): ";
    cin >> size;
    double price;
    // Check if the input size is valid
    if (size == "S" || size == "M" || size == "L") {
        break; // Exit the loop
    } else {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
    }
}
				
			     	
                   if (size == "S") {
                     price = 1.5; // price is 1.5 KM for size S
                   } else if (size == "M") {
                    price = 2.0; // price is 2.0 KM for size M
                   } else if (size == "L") {
                    price = 2.5; // price is 2.5 KM for size L
                }

				while (keepGoing) {
  
    // Check if the input size is valid
    if (size != "S" && size != "M" && size != "L") {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
        keepGoing = true; // Continue the loop
    } else {
        keepGoing = false; // Update control variable to stop the loop
    }
}

				if(icedAmericano>0){
                cout<<"Insert coin: ";
                cin>>coin;
                if (cin.fail()){
                cout<< "please try again we can only accept KM"<< endl;
				}
				
				
			   
                if(coin>=price){
                
             
                cout<<"Iced Americano will be served as soon as possible ..."<<endl;
                if(coin>price){
                // If user insert more money than required , the machine will calculate change, decrease markCount and add money to toal money
                change=(coin-price);
                
                 money+=price;
                 cout<<"Change: "<<change<<" KM";
           }
              } else if (coin < price) {
               cout << "Please try again. Insufficient funds!." << endl;                                   
    } 
    break;
} else {
    cout<<"Iced Americano does not exist , Something else?";
    cin>>drink;
}
									
									
									case 3: 
									
														    	icedLatte--;
							    	// When customers choose Iced latte, the number of cold brew will decrease.
					// If there is no Iced Latte more than 0, it is not going to work.
								while (true) {
    // Code to be executed repeatedly goes here

    cout << "Enter the size (S/M/L): ";
    cin >> size;
    double price;
    // Check if the input size is valid
    if (size == "S" || size == "M" || size == "L") {
        break; // Exit the loop
    } else {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
    }
}
				
			     	
                   if (size == "S") {
                     price = 2.5; // price is 2.5 KM for size S
                   } else if (size == "M") {
                    price = 3.0; // price is 3.0 KM for size M
                   } else if (size == "L") {
                    price = 3.5; // price is 3.5 KM for size L
                }

				while (keepGoing) {
   

    // Check if the input size is valid
    if (size != "S" && size != "M" && size != "L") {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
        keepGoing = true; // Continue the loop
    } else {
        keepGoing = false; // Update control variable to stop the loop
    }
}

				if(icedLatte>0){
                cout<<"Insert coin: ";
                cin>>coin;
                if (cin.fail()){
                cout<< "please try again we can only accept KM"<< endl;
				}
				
				
			   
                if(coin>=price){
               
                cout<<"Iced Latte will be served as soon as possible ..."<<endl;
                if(coin>price){
                // If user insert more money than required , the machine will calculate change, decrease markCount and add money to toal money
                change=(coin-price);
                 
                 money+=price;
                 cout<<"Change: "<<change<<" KM";
           }
              } else if (coin < price) {
               cout << "Please try again. Insufficient funds!." << endl;                                   
    } 
    break;
} else {
    cout<<"Iced Latte does not exist , Something else?";
    cin>>drink;
}
							
									
									
									
									
									
									case 4:
																	    	icedEspresso--;
							   
					// When customers choose Iced Espresso, the number of Iced Espresso will decrease.
					// If there is no  Iced espresso more than 0, it is not going to work.
								while (true) {
 

    cout << "Enter the size (S/M/L): ";
    cin >> size;
    double price;
    // Check if the input size is valid
    if (size == "S" || size == "M" || size == "L") {
        break; // Exit the loop
    } else {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
    }
}
				
			     	
                   if (size == "S") {
                     price = 4.5; // price is 4.5 KM for size S
                   } else if (size == "M") {
                    price = 5.0; // price is 5.0 KM for size M
                   } else if (size == "L") {
                    price = 5.5; // price is 5.5 KM for size L
                }

				while (keepGoing) {

    
    // Check if the input size is valid
    if (size != "S" && size != "M" && size != "L") {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
        keepGoing = true; // Continue the loop
    } else {
        keepGoing = false; // Update control variable to stop the loop
    }
}

				if(icedEspresso>0){
                cout<<"Insert coin: ";
                cin>>coin;
                if (cin.fail()){
                cout<< "please try again we can only accept KM"<< endl;
				}
				
				
			   
                if(coin>=price){
              
            
               
                cout<<"Iced Espresso will be served as soon as possible ..."<<endl;
                if(coin>price){
                // If user insert more money than required , the machine will calculate change, decrease markCount and add money to toal money
                change=(coin-price);
              
                 money+=price;
                 cout<<"Change: "<<change<<" KM";
           }
              } else if (coin < price) {
               cout << "Please try again. Insufficient funds!." << endl;                                   
    } 
    break;
} else {
    cout<<"Iced Espresso does not exist , Something else?";
    cin>>drink;
}
						
									
									
									
									
								
									
									case 5 :
									icedmocha-- ;
												    								    	
							   
						// When customers choose Iced mocha, the number of cold brew will decrease.
					// If there is no Iced Mocha more than 0, it is not going to work.
								while (true) {

    cout << "Enter the size (S/M/L): ";
    cin >> size;
    double price;
    // Check if the input size is valid
    if (size == "S" || size == "M" || size == "L") {
        break; // Exit the loop
    } else {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
    }
}
				
			     	
                   if (size == "S") {
                     price = 3.0; // price is 3.0 KM for size S
                   } else if (size == "M") {
                    price = 3.5; // price is 3.5 KM for size M
                   } else if (size == "L") {
                    price = 4.0; // price is 4.0 KM for size L
                }

				while (keepGoing) {
  

    // Check if the input size is valid
    if (size != "S" && size != "M" && size != "L") {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
        keepGoing = true; // Continue the loop
    } else {
        keepGoing = false; // Update control variable to stop the loop
    }
}

				if(icedmocha>0){
                cout<<"Insert coin: ";
                cin>>coin;
                if (cin.fail()){
                cout<< "please try again we can only accept KM"<< endl;
				}
				
				
			   
                if(coin>=price){
                
                //if user inputs 1 mark program will increase markCount and add mark to total money.
                
                cout<<"Iced Mocha will be served as soon as possible ..."<<endl;
                if(coin>price){
                // If user insert more money than required , the machine will calculate change, decrease markCount and add money to toal money
                change=(coin-price);
                 
                 money+=price;
                 cout<<"Change: "<<change<<" KM";
           }
              } else if (coin < price) {
               cout << "Please try again. Insufficient funds!." << endl;                                   
    } 
    break;
} else {
    cout<<"Iced Mocha does not exist , Something else?";
    cin>>drink;
}
						
										    
										    
										case 6:
									Frappuccino-- ;
												    								    	
							  
					// When customers choose Frappucino, the number of cold brew will decrease.
					// If there is no frappucino more than 0, it is not going to work.
								while (true) {
    // Code to be executed repeatedly goes here

    cout << "Enter the size (S/M/L): ";
    cin >> size;
    double price;
    // Check if the input size is valid
    if (size == "S" || size == "M" || size == "L") {
        break; // Exit the loop
    } else {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
    }
}
				
			     	
                   if (size == "S") {
                     price = 5.0; // price is 5.0 KM for size S
                   } else if (size == "M") {
                    price = 5.5; // price is 5.5 KM for size M
                   } else if (size == "L") {
                    price = 6.0; // price is 6.0 KM for size L
                }

				while (keepGoing) {
   

    // Check if the input size is valid
    if (size != "S" && size != "M" && size != "L") {
        cout << "Error: Invalid size. Please enter a valid size (S/M/L)." << endl;
        keepGoing = true; // Continue the loop
    } else {
        keepGoing = false; // Update control variable to stop the loop
    }
}

				if(Frappuccino>0){
                cout<<"Insert coin: ";
                cin>>coin;
                if (cin.fail()){
                cout<< "please try again we can only accept KM"<< endl;
				}
				
				
			   
                if(coin>=price){
                
                
                cout<<"Frappuccino will be served as soon as possible ..."<<endl;
                if(coin>price){
                // If user insert more money than required , the machine will calculate change, decrease markCount and add money to toal money
                change=(coin-price);
                 
                 money+=price;
                 cout<<"Change: "<<change<<" KM";
           }
              } else if (coin < price) {
               cout << "Please try again. Insufficient funds!." << endl;                                   
    } 
    break;
} else {
    cout<<"Frappuccino does not exist , Something else?";
    cin>>drink;
}
						
					
										}
								}
									 
