#include"berserker.h"

berserker::berserker(string ber_nom, int ber_nb_vie) : personnage()
{
    this->nom = ber_nom;
    this->nb_vie = ber_nb_vie;
    this->vie_max = ber_nb_vie;
    this->atq = 200;
    this->def = 110;
    this->vit = 30;
    this->energie = 0;
}


void berserker::frappe_preventive(personnage &cible){
    cout << this->nom << " a declenché la frappe punitive " << endl;
    cible.recevoir_degats(0.3 * this->vie_max);
    this->nb_vie -= 0.1 * this->nb_vie;
    this->energie += 20;
}

void berserker::frappe_amelioree(personnage &cible){
    cout << this->nom << " a declenché coup déchainé" << endl;
    cible.recevoir_degats(0.5 * this->vie_max);
    this->nb_vie -= 0.15 * this->nb_vie;
    this->energie += 30;
}

void berserker::special_attack(personnage &cible){
    if(this->energie >= 100){
        cout << this->nom << " a declenché mouvement alpha " << endl;
        cible.recevoir_degats(0.75 * this->vie_max);
        this->nb_vie += 0.5 * this->vie_max;
        this->energie -= 100;
        if(nb_vie > vie_max){
            nb_vie = vie_max;
        }
    } else {
        cout << this->nom << " n'a pas assez d'energie pour lancer son attaque speciale" << endl;
    }
}

void berserker::recevoir_degats(int degats){
    int dgts = degats - this->def;
    cout << this->nom << " a recu " << dgts << " pts de degats" << endl;
    this->nb_vie -= dgts;
}


void berserker::afficher() const{
    cout << "Ce perso est : " << nom << endl;
    cout << "il lui reste : " << nb_vie << " pt de vie" << endl;
    cout << "il a : " << atq << " de puisssance d'attaque"<< endl;
    cout << "Son energie est a : " << energie << endl;
    
}