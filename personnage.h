#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct EquipementStats
{
    int health;
    int atk;
    int def;
    int speed;
};


class Equipement
{

public:
    EquipementStats head;
    EquipementStats body;
    EquipementStats leg;
    EquipementStats shoes;
    Equipement();
    Equipement(EquipementStats t,EquipementStats b,EquipementStats l,EquipementStats s): head(t), body(b), leg(l), shoes(s){} ;
    
};

class personnage
{
protected:
    string nom;
    int nb_vie;
    int atq;
    int def;
    int vit;
    int energie;
    Equipement equipement;

public:
    
    personnage(/* args */);
    personnage(string nom, int pt_de_vie, Equipement eq);
    virtual void frappe_preventive(personnage&);
    virtual void frappe_amelioree(personnage&);
    virtual void special_attack(personnage&);
    void recevoir_degats(int degats);
    void afficher() const;
    
};
