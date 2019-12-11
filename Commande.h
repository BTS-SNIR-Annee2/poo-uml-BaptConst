#ifndef COMMANDE_H
#define COMMANDE_H
#include <string>
#include <ostream>
#include <vector>

#include "Ligne.h"
#include "Client.h"

class Client;

class Commande
{
   private:
      std::string reference;
      std::string date;
      std::vector<Ligne> liste;

   public:
      Commande(std::string reference="", std::string date="");

      std::string getReference() const;
      void setReference(std::string reference);
      std::string getDate() const;
      void setDate(std::string date);
      Ligne getLigne(int numero) const;
      void setLigne(const Ligne &l);      
      
      double getTotal();
      int getNbArticles() const;
      
      void afficher();
};

#endif //COMMANDE_H
