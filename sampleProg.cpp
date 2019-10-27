#include <iostream>
using namespace std;

int main(){
	
	int num[7] = {1,45,67,87,9,35,42}, guess;
	bool test = false;
	char choice;
	
	while(1){
		cout << "\nGuess the number (1-100): ";
		cin >> guess;
		
		for(int i = 0; i < 7; i++){
			if(guess == num[i]){
				test = true;
				break;
			} else{
				test = false;
			}
		}
		
		if(test == true){
			cout << "\nCongratulations! You've guessed it right!";
		} else{
			cout << "\nBetter luck next time...";
		}
		
		cout << "\n\nTry Again? (Y/N): ";
		cin >> choice;
		if(choice == 'Y' || choice == 'y'){
			system("cls");
		} else if(choice == 'N' || choice == 'n'){
			cout << "\nExiting...";
			exit(1);
		} else{
			cout << "\nInvalid. Program will now close...";
			system("pause>0");
			exit(1);
		}
	}
	
	return  0; 
	
}
