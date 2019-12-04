#include <iostream>
#include <list>

using namespace std;

#include "Article.h"

int main() 
{
   /* Question 1 */
   Article a1, a2("A Game of Thrones - Le Trône de fer, tome 1", 13.29), a3("Le Trône de fer, Tome 13 : Le Bûcher d'un roi", 17.96);   
   
   cout << "Question 1 : " << endl; 
   a1.setTitre("Le Trone de fer, tome 14");
   a1.setPrix(12.);
   cout << "Titre de l'article : " << a1.getTitre() << endl;
   cout << "Prix  de l'article : " << a1.getPrix() << endl;
   cout << "Titre de l'article : " << a2.getTitre() << endl;
   cout << "Prix  de l'article : " << a2.getPrix() << endl;   
   cout << endl;
   
   /*
    * Vous devez obtenir :
    * Titre de l'article : Le Trone de fer, tome 14
    * Prix  de l'article : 12
    * Titre de l'article : A Game of Thrones - Le Trône de fer, tome 1
    * Prix  de l'article : 13.29
    * 
    */

   return 0;
}
