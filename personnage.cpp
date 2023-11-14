#include"personnage.h"


personnage::personnage(/* args */)
{
    this->nom = "Trial";
    this->nb_vie = 100;
    this->atq = 100;
    this->def = 75;
    this->vit = 25;
    this->energie = 0;
}

personnage::personnage(string nom, int nb_de_vie, Equipement eq) : equipement(eq){
    this->nom = nom;
    this->nb_vie = nb_de_vie;
    this->atq = 100;
    this->def = 75;
    this->vit = 25;
    this->energie = 0;
}

void personnage::frappe_preventive(personnage &cible){
    cout << this->nom << " a declenché la frappe preventive " << endl;
    cible.recevoir_degats(this->atq);
    this->energie += 10;
}

void personnage::frappe_amelioree(personnage &cible){
    cout << this->nom << " a declenché la frappe amelioree " << endl;
    cible.recevoir_degats(1.5 * this->atq);
    this->energie += 25;
}

void personnage::special_attack(personnage &cible){
    if(this->energie >= 100){
        cout << this->nom << " a declenché l'attaque delta " << endl;
        cible.recevoir_degats(3.5 * this->atq);
        this->energie -= 100;
    } else {
        cout << this->nom << " n'a pas assez d'energie pour lancer son attaque speciale" << endl;
    }
}

void personnage::recevoir_degats(int degats){
    int dgts = degats - this->def;
    cout << this->nom << " a recu " << dgts << " pts de degats" << endl;
    this->nb_vie -= dgts;
}

void personnage::afficher() const{
    cout << "Ce perso est : " << this->nom << endl;
    cout << "il lui reste : " << this->nb_vie << " pt de vie" << endl;
    cout << "il a : " << this->atq << " de puisssance d'attaque"<< endl;
    cout << "Son energie est a : " << this->energie << endl;
    
}


