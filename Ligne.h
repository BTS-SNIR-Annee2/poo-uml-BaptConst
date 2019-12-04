#ifndef LIGNE_H
#define LIGNE_H

class Article;

class Ligne
{
   private:
      Article *article;
      long quantite;      

   public:
      Ligne(Article *article=NULL, long quantite=0);

      Article * getArticle() const;
      long getQuantite() const;
      void setArticle(Article *article);
      void setQuantite(long quantite);
      
      double getMontant() const;
      
      void afficher();
};

#endif //LIGNE_H