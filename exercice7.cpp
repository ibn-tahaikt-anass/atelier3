//
// Created by Ayoub on 05/12/2021.
//

#include<iostream>
#include<cmath>
using namespace std;

class vecteur3d {
    float x;
    float y;
    float z;
public:
    //Constructeur d'initialisation
    vecteur3d(float a = 0, float b = 0, float c = 0)  {
        x = a; 
		y = b ; 
		z = c ;
    }

    //Constructeur de recopie
    vecteur3d( vecteur3d & v) {
        x = v.x;
        y = v.y;
        z = v.z;
    }

    //L'affichage d'un vecteur
    void afficher() {
        cout << "("<<x<<","<<y<<","<<z<<")" << endl;
    }

    //La somme de deux vecteur
    vecteur3d somme( vecteur3d v) {
        // v1.somme(v2)
        vecteur3d s;
        s.x = x + v.x;
        s.y = y + v.y;
        s.z = z + v.z;
        return s;
        //Ou return vecteur3d(x+v.x, y+v.y, z+v.z);
    }

    //Le produit scalaire de deux vecteurs
    float produit( vecteur3d v) {
        //v1.produit(v2)
        return x*v.x + y*v.y + z*v.z;
    }

    //tester si deux vecteurs ont les memes composantes
    bool coincide( vecteur3d v) {
        //v1.coincide(v2)
        return (x == v.x && y == v.y && z == v.z);
    }

    //Retourner la norme du vecteur
    float norme() {
        return sqrt(x*x + y*y + z*z);
    }

    //Retourner le vecteur qui la plus grande norme : par valeur
    vecteur3d normax(vecteur3d v) {
        if( this->norme() > v.norme())
            return *this;
        return v;
    }

    //Retourner le vecteur qui la plus grande norme : par adresse
    vecteur3d * normax(vecteur3d * v) {
        if( this->norme() > v->norme())
            return this;
        return v;
    }

    //Retourner le vecteur qui la plus grande norme : par reference
    vecteur3d & normaxR(vecteur3d &v) {
        //v1.normaxR(v2)
        if( this->norme() > v.norme())
            return *this;
        return v;
    }
};
int main() {
    vecteur3d v1(1,2,3);
    cout << "Vecteur V1";
    v1.afficher();
    vecteur3d v2(4,5,6);
    cout << "Vecteur V2";
    v2.afficher();
    cout<<endl;
    cout << "La somme des vecteurs v1 et v2 est : ";
    (v1.somme(v2)).afficher();
    cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl;
    cout<<endl;
    cout << "Copier le vecteur V1 dans V3:" << endl;
    vecteur3d v3(v1);
    cout << "Vecteur V3";
    v3.afficher();
    if(v1.coincide(v3))
        cout << "Les vecteurs v1 et v3 coincident " << endl;
    else
        cout << "Les vecteurs v1 et v3 ne coincident pas " << endl;

    cout<<endl;
    cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
    (v1.normax(v2)).afficher();
    cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
    (v1.normax(&v2))->afficher();
    cout << "Le vecteur qui a la plus grande norme est (par reference) :";
    (v1.normaxR(v2)).afficher();
    cout<<endl;
}
