#ifndef COMMANDE_H
#define COMMANDE_H

#include <vector>

using namespace std;

#include "Ligne.h"

class Commande
{
   private:
      string reference;
      string date;
      vector<Ligne> liste;

   public:
      Commande(string reference="", string date="");

      string getReference() const;
      void setReference(string reference);
      string getDate() const;
      void setDate(string date);
      Ligne getLigne(int numero) const;
      void setLigne(const Ligne &l);      
      
      double getTotal();
      int getNbArticles() const;
      
      void afficher();
};

#endif //COMMANDE_H