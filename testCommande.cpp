#include <iostream>
#include <iomanip>

using namespace std;

#include "Commande.h"
#include "Ligne.h"
#include "Article.h"

int main() 
{
   /* Question 5 */
   Commande c1, c2("A00002", "11/04/2013");
   
   cout << "Question 5 : " << endl;
   c1.setReference("A00001");
   c1.setDate("10/04/2013");
   cout << "Référence de la commande : " << c1.getReference() << endl;
   cout << "Date de la commande      : " << c1.getDate() << endl;
   cout << "Référence de la commande : " << c2.getReference() << endl;
   cout << "Date de la commande      : " << c2.getDate() << endl;
   
   cout << endl;
   
   /* Question 6 */
   Article gratuit("A Game of Thrones - Le Trone de fer, tome 1");   
   Article a2("A Game of Thrones - Le Trone de fer, tome 2", 13.29), a3("Le Trone de fer, Tome 13 : Le Bucher d'un roi", 17.96);
   Ligne cadeau(&gratuit, 1);
   Ligne l2, l3(&a3, 2);
   Commande c("A00003", "10/04/2013");
   
   l2.setArticle(&a2);
   l2.setQuantite(3);
   
   cout << "Question 6 : " << endl; 

   c.setLigne(l2);
   c.setLigne(l3);
   c.setLigne(cadeau);
   
   c.afficher();
   cout << endl;
   
   return 0;
}
