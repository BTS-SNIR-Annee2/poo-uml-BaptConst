#include <iostream>
#include <iomanip>

using namespace std;

#include "Ligne.h"
#include "Article.h"

int main() 
{
   /* Question 2 */
   Ligne l1;
   
   cout << "Question 2 : " << endl;
   cout << "Quantité commandée pour cette ligne de commande : " << l1.getQuantite() << endl;
   cout << endl;
   
   /*
    * Vous devez obtenir :
    * Quantité commandée pour cette ligne de commande : 0
    * 
    */
   
   
   /* Question 3 */
   Article a1, a2("A Game of Thrones - Le Trone de fer, tome 1", 13.29), a3("Le Trone de fer, Tome 13 : Le Bucher d'un roi", 17.96);
   a1.setTitre("Le Trone de fer, tome 14");
   a1.setPrix(12.);
   
   Ligne l2, l3(&a3, 0);
   
   cout << "Question 3 : " << endl; 
   l2.setArticle(&a2);
   l2.setQuantite(3);
   cout << "Quantité commandée pour cette ligne de commande : " << l2.getQuantite() << endl;
   cout << "Titre de l'article : " << l2.getArticle()->getTitre() << endl;
   cout << "Prix  de l'article : " << l2.getArticle()->getPrix() << endl;
   cout << "Total pour cette ligne : " << l2.getMontant() << endl;
   cout << "Quantité commandée pour cette ligne de commande : " << l3.getQuantite() << endl;
   cout << "Titre de l'article : " << l3.getArticle()->getTitre() << endl;
   cout << "Prix  de l'article : " << l3.getArticle()->getPrix() << endl;
   cout << "Total pour cette ligne : " << l3.getMontant() << endl;
   cout << endl;
   
   /*
    * Vous devez obtenir :
    * Quantité commandée pour cette ligne de commande : 3
    * Titre de l'article : A Game of Thrones - Le Trone de fer, tome 1
    * Prix  de l'article : 13.29
    * Total pour cette ligne : 39.87
    * Quantité commandée pour cette ligne de commande : 0
    * Titre de l'article : Le Trone de fer, Tome 13 : Le Bucher d'un roi
    * Prix  de l'article : 17.96
    * Total pour cette ligne : 0
    * 
    */
   
   
   /* Question 4 */
   cout << "Question 4 : " << endl; 

   l1.setArticle(&a1);
   l1.setQuantite(2);
   
   cout << setfill(' ') << setw(3) << "Qte"; 
   cout << "|" << setfill(' ') << setw(50) << "Description"; 
   cout << "|" << setfill(' ') << setw(8) << "Prix uni"; 
   cout << "|" << setfill(' ') << setw(15) << "Total\n";
   cout << setfill('-') << setw(80) << "\n";
   
   l1.afficher();
   cout << endl;
   l2.afficher();
   cout << endl;
   l3.afficher();
   cout << endl;
   cout << endl;   
   
   /*
    * Vous devez obtenir :
    * Qte|                                       Description|Prix uni|         Total
    * -------------------------------------------------------------------------------
    *   2|..........................Le Trone de fer, tome 14|      12|      24 euros
    *   3|.......A Game of Thrones - Le Trone de fer, tome 1|   13.29|   39.87 euros
    *   0|.....Le Trone de fer, Tome 13 : Le Bucher d'un roi|   17.96|       0 euros
    * 
    */
   
   return 0;
}
