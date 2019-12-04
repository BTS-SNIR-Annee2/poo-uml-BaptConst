#ifndef ARTICLE_H
#define ARTICLE_H

class Article
{
   private:
      string titre;
      double prix;

   public:
      Article(string titre="", double prix=0.);

      string getTitre() const;
      double getPrix() const;
      void setTitre(string titre);
      void setPrix(double prix);
};

#endif //ARTICLE_H
