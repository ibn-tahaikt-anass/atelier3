#include <iostream>
using namespace std;

class Animal{
 public:
 	string nom ;
 	int age ;
 	void set_value(string n , int a ){
 		nom = n ; 
 		age = a ;
 		
	 }
};

class Zebra : public Animal {
	public :
		string lieu_origine = "afrique";
	void display() 
	{
		
		cout << "le nom de zebra est :"<< nom << endl<< "l'age de zebra est :"<< age <<endl << "Lieu d'origine est :"<<lieu_origine<< endl;
	}
	
};
class Dolphin : public Animal {
	public :
		string lieu_origine = "ocean";
	void display(){
		cout << "le nom de Dolphin est :"<< nom << endl<< "l'age de Dolphin est :"<< age <<endl << "Lieu d'origine est :"<<lieu_origine ;
	}
	
};

int main(){
	Zebra Zebra1 ;
	Zebra1.set_value("zebra_name" , 15);
	Zebra1.display();
	Dolphin Dolphin1 ;
	Dolphin1.set_value("Dolphin_name" , 26);
	Dolphin1.display();	
	return 0 ;
}
