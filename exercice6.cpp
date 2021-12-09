
#include <string>
#include <iostream>
#include <string>

using namespace std;

class Personne
{
private:
    string nom;
    string prenom;
    string datenaissance;

public:
    string getNom() const;
    void setNom(const string value);
    string getPrenom() const;
    void setPrenom(const string value);
    string getDatenaissance() const;
    void setDatenaissance(string value);

    Personne(const string n, const string p, string dn);

    virtual void Afficher();
};
class Employe : public Personne
{
private:
    double salaire = 0;

public:
    double getSalaire() const;
    void setSalaire(double value);

    Employe(const string n, const string p, string dn, double s);

    void Afficher() override;
};
class Chef : public Employe
{
private:
    string service;

public:
    string getService() const;
    void setService(const string value);

    Chef(const string n, const string p, string dn, double s, const string ser);

    void Afficher() override;
};
class Directeur : public Chef
{
private:
    string societe;

public:
    string getSociete() const;
    void setSociete(const string value);

    Directeur(const string n, const string p, string dn, double s, const string ser, const string soc);

    void Afficher() override;
};

string Personne::getNom() const
{
    return nom;
}

void Personne::setNom(const string value)
{
    nom = value;
}

string Personne::getPrenom() const
{
    return prenom;
}

void Personne::setPrenom(const string value)
{
    prenom = value;
}

string Personne::getDatenaissance() const
{
    return datenaissance;
}

void Personne::setDatenaissance(string value)
{
    datenaissance = value;
}

Personne::Personne(const string n, const string p, string dn)
{
    nom = n;
    prenom = p;
    datenaissance = dn;
}

void Personne::Afficher()
{
    cout << "Nom: " << nom << endl<< " Prenom " << prenom << endl<< " Date de naissance: " << datenaissance<< endl;
}

double Employe::getSalaire() const
{
    return salaire;
}

void Employe::setSalaire(double value)
{
    salaire = value;
}

Employe::Employe(const string n, const string p, string dn, double s) : Personne(n, p, dn)
{
    salaire = s;
}

void Employe::Afficher()
{
    Personne::Afficher();
    cout << " Salaire: " << salaire << endl;
}

string Chef::getService() const
{
    return service;
}

void Chef::setService(const string value)
{
    service = value;
}

Chef::Chef(const string n, const string p, string dn, double s, const string ser) : Employe(n, p, dn, s)
{
    service = ser;
}

void Chef::Afficher()
{
    Employe::Afficher();
    cout << " Service: " << service << endl;
}

string Directeur::getSociete() const
{
    return societe;
}

void Directeur::setSociete(const string value)
{
    societe = value;
}

Directeur::Directeur(const string n, const string p, string dn, double s, const string ser, const string soc) : Chef(n, p, dn, s, ser)
{
    societe = soc;
}

void Directeur::Afficher()
{
    Chef::Afficher();
    cout << " Societe " << societe;
}

int main(){
    Directeur d("ibn tahaikt", "anass", "1998", 9000, "developer", "Microsoft");
    d.Afficher();
    return 0;
}
