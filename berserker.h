#include"personnage.h"

class berserker : public personnage
{
private:
    /*data from personnage*/
    /*string nom;
    int nb_vie;*/
    int vie_max;/*
    int atq;
    int def;
    int vit;
    int energie;*/

public:
    berserker(string ber_nom, int ber_nb_vie);
    virtual void frappe_preventive(personnage&);
    virtual void frappe_amelioree(personnage&);
    virtual void special_attack(personnage&);
    void recevoir_degats(int degats);
    void afficher() const;
    
};




