#include <iostream>
#include <vector>

int main() {

	std::vector<float> storage ;
	
	float difference = 0.0 ;
	float input1 = 0.0 ; 
	float input2 = 0.0 ;
	float product = 0.0 ;
	float quotient = 0.0 ;
	float results = 0.0 ;
	float sum = 0.0 ;

	int getSavedResults = 0 ;
	int powerOn = 1 ;
	int saveResults = 0 ;
	
	while (powerOn == 1) {
		std::cout << " Enter 1st number: \n" ; 	
		std::cin >> input1 ;

		std::cout << " Retrieve saved results? \n " ;
        std::cout << " No = 0, Yes = 1 \n " ;
        std::cin >> getSavedResults ;

		if (getSavedResults == 1) {
        	input2 = storage[storage.size()-1] ;
        }

        else {
			std::cout << " Enter 2nd number: \n" ; 
			std::cin >> input2 ;
		}

		std::cout << " Enter function desired: \n" ; 
		std::cout << " Addition = 1 \n" ; 
		std::cout << " Subtraction = 2 \n" ; 
		std::cout << " Multiplication = 3 \n" ; 
		std::cout << " Division = 4 \n" ; 

		int operation = 0 ;

		std::cin >> operation ;

		if (operation == 1) {
			results = sum = input1 + input2 ;
			std::cout << " sum: " << sum << "\n" ; 
		}

		else if (operation == 2) {
			results = difference = input1 - input2 ;
			std::cout << " difference: " << difference << "\n" ; 
		}

		else if (operation == 3) {
			results = product = input1 * input2 ;
			std::cout << " product: " << product << "\n " ; 
		}

		else if (operation == 4) {

			if (input2 != 0) {
				results = quotient = input1 / input2 ;
				std::cout << " quotient " << quotient << "\n " ; 
			}

			else {
				std::cout << " You cannot divide by 0: \n " ; 
			}		
		}

		if ( (operation < 1) || (operation > 4) ) {
				std::cout << " An invalid function was entered: \n " ; 
		}

        std::cout << " Save results? \n " ;
        std::cout << " No = 0, Yes = 1 \n " ;
        std::cin >> saveResults ;

     	if (saveResults == 1) {
        	storage.push_back (results) ;
     //   	std::cout << " saved results" << storage[storage.size()-1] << "\n " ;
        }

        std::cout << " Another calculation desired?: \n" ; 
		std::cout << " No = 0, Yes = 1 \n" ; 
		std::cin >> powerOn ;
	}

	return 0 ;
} 