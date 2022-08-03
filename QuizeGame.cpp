// QuizeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::cin;
using std::string;



int main()
{
	
	cout << "**********************\n";
	cout << "	QUESTIONER : \n";
	cout << "**********************\n";

	string qestions[] = {"1. what is your name?: ",
						 "2. what is your qest?: ",
						 "3. what is your favorite color?: ",
						 "4. What is the airspeed velocity of an unladen swallow?: "};
	
	string options[][3] = { {"A. name", "B. it'sa me", "C. king Arthur"},
							{"A. To save the princess", "B. To seek the Holy Grail","C. Yes"},
							{"A. Blue","B. Gay","C. Blue no yellow"},
							{"A. 9.8 m/s","B. 299,792,458 m/s","C. African or European swallow?"}
						  };

	char answerKey[] = { 'C', 'B', 'A', 'C' };

	int size = sizeof(qestions) / sizeof(qestions[0]);
	char guess;
	int score = 0;

	for (int i = 0 ; i < size; i++) {
		cout << "**********************\n";
		cout << qestions[i] << "\n";
		cout << "**********************\n";

		for (int j = 0 ; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
			cout << options[i][j] << "\n";

		}
		cin >> guess;
		guess = toupper(guess);
		
		if (guess == answerKey[i]) {
			cout << "CORRECT! \n";
			score++;
		}
		else {
			cout << " WRONG! \n";
			cout << "Answer: " << answerKey[i] << "\n";

		}

	}

	cout << "**********************\n";
	cout << "	Results :          \n";
	cout << "**********************\n";
	cout << " correct answers : " << score << "\n";
	cout << " # of qestions : " << size << "\n";
	cout << " score : " << (score / (double)size) * 100 << "% \n";

	return 0;

}

