#include<iostream>
#include<string>
using namespace std;

struct EquipementValue
{
    int health;
    int atk;
    int def;
    int speed;
};


class Equipement
{
private:
    /* data */
public:
    EquipementValue head;
    EquipementValue body;
    EquipementValue leg;
    EquipementValue shoes;
    Equipement(EquipementValue t,EquipementValue b,EquipementValue l,EquipementValue s): head(t), body(b), leg(l), shoes(s){};
    
};


