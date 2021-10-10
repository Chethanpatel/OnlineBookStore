/* C++ program to implement the program
 that illustrates Online Book store */

#include <bits/stdc++.h>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

char c,c1,confirm_quantity;
float quantity;
int selectedNum;
double total_amount = 0;
int flag = 0;
int password=8;
int counta=0;


// Stores items with their corresponding
// price
map<string, double> items = {
	{ "OOC", 500 },
	{ "DAA", 600 },
	{ "OS", 900 },
	{ "Quantitative Aptitude", 250 },
	{ "High School English Grammar", 400 },
	{ "DATA STRUCTURES AND ALGORITHMS", 350 },
	{ "C", 250 },
	{ "C++", 300 },
	{ "Java", 400 },
	{ "Python", 350 }
};

// Stores the selected items with
// their quantity
map<string, int> selected_items;

// Function to print the bill after shopping
// is completed prints the items, quantity,
// their cost along with total amount
void printBill(map<string, double> items,
			map<string, int> selected_items,
			float total_amount)
{
  cout<<"\nFinal bill : \n"<<"\n";
	cout << "Item	 "
		<< "Quantity	 "
		<< "Cost\n";

	for (auto j = selected_items.begin();
		j != selected_items.end(); j++) {
		cout << j->first << "	 ";
		cout << j->second << "		 ";
		cout << (selected_items[j->first])
					* (items[j->first])
			<< endl;
	}

	cout << "-----------------------"
		<< "-------------\n";
	cout << "Total amount:			 "
		<< total_amount << endl;
	cout << "-----------------------"
		<< "-------------\n";
	cout << "*****THANK YOU && HAPPY"
		<< " READING*****";
}


 
   void login()
   {
     cout<<"\n====LOGIN====\n";
     cout << "\n====Enter your user name : =====\n";
	  string customer_name;
    getline(cin, customer_name);
       
      cout<<"Enter password: \n";
      cin>>password;
      
    if(customer_name=="chethan" && password==741258)
  {
    cout<<"\nLogin Successfull\n\n";
    
	cout << "\nWELCOME ";
	for (int i = 0; i < customer_name.length(); i++)
   {
		cout << char(toupper(customer_name[i]));
	}
	cout << "\n\n";
  }
else
 {
 cout<<"\nLogin Unsuccessfull\n"<<"Try Again";
 exit(0);
 } 


}

// showMenu() is to print the
// menu to the user
void showMenu()
{
	cout << "Menu\n";
	cout << "= = = = = = = = "
		<< " = = = = = \n";
	cout << "1.Engineering Textbooks\n2.Placements Preparation\n3"
		<< ".Programming Languages\n";
	cout << "= = = = = = = = "
		<< " = = = = = \n";
}

// Function to display the Engineering Textbooks
void showEnggTbsMenu()
{
	cout << "- - - - - - - - - - -"
		<< " - -\nBook         Author 	    Cost\n";
	cout << "1.Object Oriented Concepts(OOC)         Abhiram.G.Ranade Rs.500/-\n";
	cout << "2.Design and Analysis of algorithms(DAA)        A.A.Puntambekar Rs.600/-\n";
	cout << "3.Operation System(OS)  I.A.Dhotre    Rs.900/-\n";
	cout << "- - - - - - - - - - - - -\n";
}

// Function to display placements books
void showplacementsMenu()
{
	cout << "- - - - - - - - - - -"
		<< " - -\nBooks  Authors  Cost\n";
	cout << "1.Quantitative Aptitude(QA) R.S.Aggarwal Rs.250/-\n";
	cout << "2.High School English Grammar and";
  cout<<"Composition Self-Practice Book(Grammer)  Wren & Martin Rs.400/-\n";
	cout << "3.Data Structures and algorithms(DS) EBG Rs.350/-\n";
	cout << "- - - - - - - - - - - - -\n";
}

// if the user selects computer Programming,
// then courses list will be displayed
void showProgrammingMenu()
{
	cout << "- - - - - - - - - - "
			<< " - -\nBooks  Authors  Cost\n";
	cout << "1.C  E.Balaguruswamy Rs.250/-\n";
	cout << "2.C++ 	Abhiram.G.Ranade  Rs.300/-\n";
	cout << "3.Java Primer  E.Balaguruswamy  Rs.400/-\n";
	cout << "4.Python E.Balaguruswamy Rs.350/-\n";
	cout << "- - - - - - - - - - - - -\n";
}

// Function to display the  category
void selectedEnggTbsMenu()
{
		cout << "\nDo you wish to continue?"
		<< "\nFor yes press Y or y , "
		<< "\nif no press other key\n";
	cin >> c1;

	if (c1 == 'Y' || c1 == 'y') {
		cout << "Enter respective number: ";
		cin >> selectedNum;

		if (selectedNum == 1
			|| selectedNum == 2
			|| selectedNum == 3) {

			// Selected Engineering Textbooks
			if (selectedNum == 1) {

				cout << "selected OOC\n";
				do {
					cout << "Quantity: ";

					cin >> quantity;

					cout << "You have selected OOC - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< " if no press other letter): ";

					cin >> confirm_quantity;

				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity) != floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["OOC"];
					selected_items["OOC"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}

			// Selected DAA
			if (selectedNum == 2) {

				cout << "selected DAA\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selec"
						<< "ted DAA - "
						<< quantity << endl;
					cout << "\nDo you wish to continue?"
		<< "\nFor yes press Y or y , "
		<< "\nif no press other key\n";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {

					total_amount += quantity
									* items["DAA"];
					selected_items["DAA"] = quantity;
					cout << "amount = "
						<< total_amount << endl;
				}
			}

			// Selected OS
			if (selectedNum == 3) {

				cout << "You have selected OS\n";

				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selected"
						<< " OS - "
						<< quantity
						<< endl;
						cout << "\nDo you wish to continue?"
		<< "\nFor yes press Y or y , "
		<< "\nif no press other key\n";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["OS"];
					selected_items["OS"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// If Placements category is selected
void selectedPlacements()
{
		cout << "\nDo you wish to continue?"
		<< "\nFor yes press Y or y , "
		<< "\nif no press other key\n";
	cin >> c1;
	if (c1 == 'Y' || c1 == 'y') {

		cout << "Enter respective number: ";
		cin >> selectedNum;

		if (selectedNum == 1
			|| selectedNum == 2
			|| selectedNum == 3) {

			// selected Macbook
			if (selectedNum == 1) {
				cout << "selected Quantitative Aptitude\n";
				do {

					cout << "Quantity: ";
					cin >> quantity;

					cout << "You have selected"
						<< " Quantitative Aptitude - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["QuantitativeAptitude"];
					selected_items["QuantitativeAptitude"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}

			// selected GRAMMER
			if (selectedNum == 2) {
				cout << "selected GRAMMER\n";
				do {
					cout << "Quantity: ";
					cin >> quantity;
					cout << "You have selected"
						<< " High School English Grammar - "
						<< quantity << endl;
					cout << "Are you sure?"
						<< "(for yes press (Y/y ), "
						<< " if no press other letter ): ";
					cin >> confirm_quantity;
				} while ((confirm_quantity
							!= 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["High School English Grammar"];
					selected_items["High School English Grammar"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}

			// selected DATA STRUCTURES AND ALGORITHMS
			if (selectedNum == 3) {
				cout << "selected DATA STRUCTURES AND ALGORITHMS\n";
				do {

					cout << "Quantity: ";
					cin >> quantity;

					cout << "You have selected"
							" DATA STRUCTURES AND ALGORITHMS - "
						<< quantity << endl;
					cout << "\nDo you wish to continue?"
		<< "\nFor yes press Y or y , "
		<< "if no press other key\n";
					cin >> confirm_quantity;
				} while ((confirm_quantity != 'y'
						&& confirm_quantity != 'Y')
						|| (quantity < 0)
						|| (ceil(quantity)
							!= floor(quantity)));

				if (confirm_quantity == 'y'
					|| confirm_quantity == 'Y') {
					total_amount += quantity
									* items["DATA STRUCTURES AND ALGORITHMS"];
					selected_items["DATA STRUCTURES AND ALGORITHMS"] = quantity;
					cout << "amount = "
						<< total_amount
						<< endl;
				}
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// If computer programming
// category is selected
void selectedProgramming()
{
	cout << "Do you wish to continue?"
		<< "(for yes press (Y/y), "
		<< "if no press other letter: ";
	cin >> c1;
	if (c1 == 'Y' || c1 == 'y') {
		cout << "Enter the respective number: ";
		cin >> selectedNum;
		if (selectedNum == 1
			|| selectedNum == 2
			|| selectedNum == 3
			|| selectedNum == 4) {

			// selected C
			if (selectedNum == 1) {
				cout << "selected C Language"
					<< " \n";
				total_amount += items["C"];
				selected_items["C"]++;
				cout << "amount = "
					<< total_amount
					<< endl;
			}

			// selected C++
			if (selectedNum == 2) {
				cout << "selected C++ Language \n";
				total_amount += items["C++"];
				selected_items["C++"]++;
				cout << "amount = " << total_amount << endl;
			}

			// selected Java
			if (selectedNum == 3) {
				cout << "selected Java Language \n";
				total_amount += items["Java"];
				selected_items["Java"]++;
				cout << "amount = " << total_amount << endl;
			}

			// selected python
			if (selectedNum == 4) {
				cout << "selected Python"
					<< " Language \n";
				total_amount += items["Python"];
				selected_items["Python"]++;
				cout << "amount = "
					<< total_amount
					<< endl;
			}
		}
		else {
			flag = 1;
		}
	}
	else {
		flag = 1;
	}
}

// Driver code
int main()
{
	// function call
	login();

	do {
		showMenu();
			cout << "\nDo you wish to continue?"
		<< "\nFor yes press Y or y , "
		<< "\nif no press other key\n";
		cin >> c;
		if (c == 'Y' || c == 'y') {
			cout << "Enter respective number: ";
			int num;
			cin >> num;
			if (num == 1 || num == 2
				|| num == 3) {
				switch (num) {
				case 1:

					// For engineering textbooks
					showEnggTbsMenu();
					selectedEnggTbsMenu();
					break;

				case 2:

					// For placements
					showplacementsMenu();
					selectedPlacements();
					break;

				case 3:

					// For programming
					showProgrammingMenu();
					selectedProgramming();
					break;
				}
			}
			else {
				flag = 1;
			}
		}
		else {
			flag = 1;
		}

	} while (flag == 0);

	// print bill
	printBill(items, selected_items,
			total_amount);
}


