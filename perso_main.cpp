#include"berserker.h"
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

int main(int argc, char const *argv[])
{    
  sql::Driver *driver;
  sql::Connection *con;
  sql::Statement *stmt;
  sql::ResultSet *res;

  /* Create a connection */
  driver = get_driver_instance();
  con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
  /* Connect to the MySQL test database */
  con->setSchema("test");

  stmt = con->createStatement();
  res = stmt->executeQuery("SELECT * from test");
  
  Equipement equip(EquipementStats t,EquipementStats b,EquipementStats l,EquipementStats s);
  
  while (res->next()) {
    equip.head.health = res->getInt("health");
    }



    personnage joe("joe", 350, equip);
    personnage jack("jack", 350);
    berserker conan("conan", 1000);
    joe.frappe_preventive(jack);
    jack.frappe_amelioree(joe);
    conan.frappe_amelioree(joe);
    jack.frappe_amelioree(joe);
    conan.frappe_amelioree(jack);
    conan.frappe_amelioree(jack);
    joe.frappe_amelioree(jack);
    conan.frappe_preventive(jack);

    jack.special_attack(joe);
    conan.special_attack(joe);
    joe.afficher();
    jack.afficher();
    conan.afficher();

   

return EXIT_SUCCESS;
}
