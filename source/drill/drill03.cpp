#include "../std_lib_facilities.h"

int main()

{
	cout << "Enter your first name: ";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "\nDear " << first_name << ",\n\n";
	
	cout << "\tHow are you? I am fine. I miss you. I write to you in deep melancholy...\nto inform you that ";
	cout << "my wife left me for the Two Time... \n";
	cout << "Cannot blame her doe... The Doc is an obviously better choice. \n";
	cout << "Still... it hurts, you know?... \n\n";
	
	string friend_name;
	cout << "Enter friend's name: ";
	cin >> friend_name;
	cout << "\nHave you seen " << friend_name << " lately?\n\n";
	
	char friend_sex = 0;
	
	cout << "(enter an 'm' if the friend is a male)\n(enter an 'f' if the friend is a female)" << endl;
	
	cin >> friend_sex;
	
	if(friend_sex == 'm'){
		cout << "\nIf you see " << friend_name << " please ask him to call me.\n\n";
	}
	if(friend_sex == 'f'){
		cout << "\nIf you see " << friend_name << " please ask her to call me.\n\n";
	}
	
	int age;
	
	cout << "Enter the recipient's age: ";
	cin >> age;
	
	if(age <= 0 || age >= 110){
		simple_error("you're kidding!");
	}
	
	else {
		cout << "\nI hear you just had a birthday and you are " << age << " years old.\n";
	}			
	
	if(age < 12 && age > 0){
		cout << "\nNext year you will be " << age+1 << ".\n";
	}
	if(age == 17){
		cout << "\nNext year you will be able to vote.\n";
	}
	if(age > 70){
		cout << "\nI hope you are enjoying retirement.\n";
	} 

	cout << "Yours sincerely,\n" << first_name << "!\n";

	return 0;
}


