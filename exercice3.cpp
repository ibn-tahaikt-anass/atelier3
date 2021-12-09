#include <iostream>
using namespace std;

 class Complex{
 	public :
 		int r1 ;
 		int i1 ;
 	    int r2 ;
 		int i2 ;
 	public :	
 	Complex(){
 		int reel1 ,  imaginer1 , reel2 , imaginer2 ;
 		r1 = reel1 ;
 		i1 = imaginer1 ;
 		r2 = reel2 ;
 		i2 = imaginer2 ;
 		cout << "entrer la partie reel de la premier nombre :" ;
 		cin >> reel1 ;
 		cout << "entrer la partie imaginer de la premier nombre :"; 
 		cin >> imaginer1 ;
		 cout << "entrer la partie reel de la deuxiem nombre :";
 		cin >> reel2 ;
		 cout << "entrer la partie imaginer de la deuxiem nombre :";
 		cin >> imaginer2 ;
 		
 		cout << "les operations : "<<endl;
 		cout << "1- la sommation +" <<endl ;
 		cout << "2- la soustraction -" <<endl ;
 		cout << "3- la multiplication *" <<endl ;
 		cout << "4- la division /" <<endl ;
 		cout << "choisir un operation : ";
 		int oper ; 
 		cin >> oper ;
 		switch (oper) {
            case 1:
            int R , I ;
            R = reel1 + reel2 ;
            I = imaginer1 + imaginer2 ;
            cout << "la partie reel de la somme est :"<<R<<"\t"<<"lapartie imaginer de la somme est "<<I ;
            break;
            case 2:
            int R2 , I2 ;
            R2 = reel1 - reel2 ;
            I2 = imaginer1 - imaginer2 ;
            cout <<"la partie reel de la soustraction est : "<<R<<"\t"<<"la partie imaginer de la soustraction est : "<<I ; ;
            break;
            case 3:
            int R3 , I3 ;
            R3 = reel1 * reel2 - imaginer1 * imaginer2 ;
            I3 = reel1 * imaginer2 + reel2 * imaginer1 ;
            cout <<"la partie reel de la multiplication est : "<<R3<<"\t"<<"la partie imaginer de la multiplication est : "<<I3 ; ;
            break; 
            case 4:
            float R4 , I4 , mr4 , mi4 , b4;
            mr4 = reel1*reel2 + imaginer1*imaginer2 ;
            b4 = reel2*reel2 + imaginer2*imaginer2 ;
            mi4 = imaginer1*reel2 - reel1*imaginer2 ;
            R4 = mr4/b4;
            I4 = mi4/b4;
            cout <<"la partie reel de la division est : "<<R4<<"\t"<<"la partie imaginer de la division est : "<<I4  ;
            break;
            default:
            cout << "Entrer un operateur valide ";
	    }
 }
};
 
 
int main(){
  Complex complex1 ; 
  return 0;
}
 
 
 
 
 
