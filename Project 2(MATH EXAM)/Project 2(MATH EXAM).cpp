#include <iostream>
using namespace std;

//enums and structed for making the program more useable
enum enumLEVEL { easy = 1, medium = 2, hard = 3, mixlevel = 4 };
enum enumTYPE { addition = 1, subtraction = 2, multiplication = 3, division = 4, mixtype = 5 };
struct stFrist3 {
	int rounds;
	int level;
	int type;
};

//rand function
int randnumber(int from,int to){
	int random = rand() % (to - from + 1) + from;
	return random;
}

//frist three inputs and the most important
int StartGame() {
	int rounds;
	cout << "Welcome to Math Game\n";
	do {
		cout << "How many questions you want to answer? ";
		cin >> rounds;
		if (rounds <= 0)
			cout << "Please enter a valid number of rounds.\n";
	} while (rounds <= 0);
	return rounds;
}
int EnterLevel() {
	int level;
	do {
		cout << "Enter the Question level [1]Easy, [2]Medium, [3]Hard, [4]All of them : ";
		cin >> level;
		if (level < 1 || level > 4)
			cout << "Invalid choice, please try again.\n";
	} while (level < 1 || level > 4);
	return level;
}
int EnterType() {
	int type;
	do {
		cout << "Enter the Question Type [1]Addition, [2]Subtraction, [3]Multiplication, [4]Division, [5]All of them: ";
		cin >> type;
		if (type < 1 || type > 5)
			cout << "Invalid choice, please try again.\n";
	} while (type < 1 || type > 5);
	return type;
}
stFrist3 StartRequried( stFrist3& requried) {
	requried.rounds = StartGame();
	requried.level = EnterLevel();
	requried.type = EnterType();
	return requried;

}

//Operations
bool additionExam(stFrist3 requried) {
	int num1, num2, result, answer;
	enumLEVEL Level;
	switch (requried.level) {
	case easy:
		num1 = randnumber(0, 10);
		num2 = randnumber(0, 10);
		break;
	case medium:
		num1 = randnumber(10, 50);
		num2 = randnumber(10, 50);
		break;
	case hard:
		num1 = randnumber(50, 100);
		num2 = randnumber(50, 100);
		break;
	case mixlevel:
		int mix;
		mix = randnumber(1, 3);
		if (mix == easy) {
			num1 = randnumber(0, 10);
			num2 = randnumber(0, 10);
		}
		else if (mix == medium) {
			num1 = randnumber(10, 50);
			num2 = randnumber(10, 50);
		}
		else {
			num1 = randnumber(50, 100);
			num2 = randnumber(50, 100);
		};
		break;


	}
	result = num1 + num2;
	cout << num1 << " + " << num2 << " = ";
	cin >> answer;
	cout << "--------------------\n";
	if (answer == result) {
		cout << "True answer :)\n\n";
		system("color 2E");//Orange Screen
		return true;
	}
	else {
		cout << "Wrong answer :(\n";
		system("color 4E");//Red Screen
		cout << "The Right answer : " << result<<endl<<endl;
		return false;
	}
}
bool SubtractionExam(stFrist3 requried) {
	int num1, num2, result, answer;
	enumLEVEL Level;
	switch (requried.level) {
	case easy:
		num1 = randnumber(0, 10);
		num2 = randnumber(0, 10);
		break;
	case medium:
		num1 = randnumber(10, 50);
		num2 = randnumber(10, 50);
		break;
	case hard:
		num1 = randnumber(50, 100);
		num2 = randnumber(50, 100);
		break;
	case mixlevel:
		int mix;
		mix = randnumber(1, 3);
		if (mix == easy) {
			num1 = randnumber(0, 10);
			num2 = randnumber(0, 10);
		}
		else if (mix == medium) {
			num1 = randnumber(10, 50);
			num2 = randnumber(10, 50);
		}
		else {
			num1 = randnumber(50, 100);
			num2 = randnumber(50, 100);
		};
		break;

	}
	result = num1 - num2;
	cout << num1 << " - " << num2 << " = ";
	cin >> answer;
	cout << "--------------------\n";
	if (answer == result) {
		cout << "True answer :)\n\n";
		system("color 2E");//Orange Screen
		return true;
	}
	else {
		cout << "Wrong answer :(\n";
		system("color 4E");//Red Screen
		cout << "The Right answer : " << result<<endl<<endl;
		return false;
	}
}
bool MultiplicationExam(stFrist3 requried) {
	int num1, num2, result, answer;
	enumLEVEL Level;
	switch (requried.level) {
	case easy:
		num1 = randnumber(0, 10);
		num2 = randnumber(0, 10);
		break;
	case medium:
		num1 = randnumber(10, 50);
		num2 = randnumber(10, 50);
		break;
	case hard:
		num1 = randnumber(50, 100);
		num2 = randnumber(50, 100);
		break;
	case mixlevel:
		int mix;
		mix = randnumber(1, 3);
		if (mix == easy) {
			num1 = randnumber(0, 10);
			num2 = randnumber(0, 10);
		}
		else if (mix == medium) {
			num1 = randnumber(10, 50);
			num2 = randnumber(10, 50);
		}
		else {
			num1 = randnumber(50, 100);
			num2 = randnumber(50, 100);
		};
		break;
	}
	result = num1 * num2;
	cout << num1 << " * " << num2 << " = ";
	cin >> answer;
	cout << "--------------------\n";
	if (answer == result) {
		cout << "True answer :)\n\n";
		system("color 2E");//Orange Screen
		return true;
	}
	else {
		cout << "Wrong answer :(\n";
		system("color 4E");//Red Screen
		cout << "The Right answer : " << result<<endl<<endl;
		return false;
	}
}
bool DivisionExam(stFrist3 requried) {
	int num1=0, num2=0, result=0, answer=0;
	enumLEVEL Level;
	switch (requried.level) {
		do {
	case easy:
		num1 = randnumber(0, 10);
		num2 = randnumber(0, 10);
		break;
	case medium:
		num1 = randnumber(10, 50);
		num2 = randnumber(10, 50);
		break;
	case hard:
		num1 = randnumber(50, 100);
		num2 = randnumber(50, 100);
		break;
	case mixlevel:
		int mix;
		mix = randnumber(1, 3);
		if (mix == easy) {
			num1 = randnumber(0, 10);
			num2 = randnumber(0, 10);
		}
		else if (mix == medium) {
			num1 = randnumber(10, 50);
			num2 = randnumber(10, 50);
		}
		else {
			num1 = randnumber(50, 100);
			num2 = randnumber(50, 100);
		};
		break;

		} while (num2 == 0);
	}
	result = num1 / num2;
	cout << num1 << " / " << num2 << " = ";
	cin >> answer;
	cout << "--------------------\n";
	if (answer == result) {
		cout << "True answer :)\n\n";
		system("color 2E");//Orange Screen
		return true;
	}
	else {
		cout << "Wrong answer :(\n";
		system("color 4E");//Red Screen
		cout << "The Right answer : " << result << endl<<endl;
		return false;
	}
}
bool MixExam(stFrist3 requried) {
	int type;
	type = randnumber(1, 4);
	switch (type) {
	case 1:
		return(additionExam(requried));
		break;
	case 2:
		return(SubtractionExam(requried));
		break;
	case 3:
		return(MultiplicationExam(requried));
		break;
	case 4:
		return(DivisionExam(requried));
		break;
	}
	
	

}

//GO TO THE OPERATIONS
void StartTypes(stFrist3 required, int& T, int& F) {
	enumTYPE type;
	
	int num1, num2, result, answer;
	switch (required.type)
	{
		T = 0;
		F = 0;
	case addition:
		if (additionExam(required)) {
			T++;
		}
		else {
			F++;
		}
			break;

	case subtraction:
		if (SubtractionExam(required)) {
			T++;
		}
		else {
			F++;

		}
		break;

	case multiplication:
		if (MultiplicationExam(required)) {
			T++;
		}
		else {
			F++;
		}
		break;

	case division:
		if (DivisionExam(required)) {
			T++;
		}
		else {
			F++;
		}
		break;
	case mixtype:
		if (MixExam(required)) {
			T++;
		}
		else {
			F++;
		}
		break;

		}


	}

//GO TO THE EXAMS
void StartRound(stFrist3 required,int &T, int& F) {
	
	for (int i = 1; i <= required.rounds; i++) {
		cout << "\nQuestion [" << i << "/" << required.rounds << "]\n";
		StartTypes(required, T, F);
	}
}

//EXTRA OPTIANS FOR PRINTING
void Printlevel(stFrist3 required) {
	enumLEVEL level;
	switch (required.level) {
	case easy:cout << "easy"; break;
	case medium:cout << "meduim"; break;
	case hard:cout << "hard"; break;
	case mixlevel:cout << "mix level"; break;
	}
}
void PrintType(stFrist3 required) {
	enumLEVEL level;
	switch (required.type) {
	case addition:cout << "addition"; break;
	case subtraction:cout << "subtraction"; break;
	case multiplication:cout << "multiplication"; break;
	case division:cout << "division"; break;
	case mixtype:cout << "mix type"; break;

	}
}

//RESULTS
void lastResult(stFrist3 required, int T, int F) {
	cout << "\n---------------------------------\n";
	if (T > F) {
		cout << "The final result is pass :)\n";
		system("color 2E");
	}
	else {
		cout << "The final result is FAIL :( \n";
		system("color 4E");
	}
	cout << "---------------------------------\n";
	cout << "\nTotal number of questions : " << T+F<<endl;
	cout << "question level              : "; Printlevel(required); cout << endl;
	cout << "question type               : "; PrintType(required);cout << endl;
	cout << "Total right answers         : " << T << endl;
	cout << "Total wrong answers         : " << F << endl;
	cout << "---------------------------------\n";
}




int main()
{
	stFrist3 requried;
	char check;
	srand((unsigned)time(NULL));
	do {
		int T = 0, F = 0;
		StartRequried(requried);
		StartRound(requried,T,F);
		lastResult(requried, T, F);
		cout << "Do you want to play again? y[yes], AnyElse[no] : ";
		cin >> check;
		system("color 0F");
		system("cls");	
	} while (check == 'y' || check == 'Y');
	cout << "Good Bay\n";
}
