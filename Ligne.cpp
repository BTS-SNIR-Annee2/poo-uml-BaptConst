#include <iostream>
#include <iomanip>

using namespace std;

#include "Ligne.h"
#include "Article.h"

Ligne::Ligne(Article *article, long quantite)
{
	this-> article = article;
	this-> quantite = quantite;
}

Article* Ligne:: getArticle() const
{
	return this->article;
}
long Ligne::getQuantite() const
{
	return this->quantite;
}
void Ligne::setArticle(Article *article)
{
	this-> article = article;
}
void Ligne::setQuantite(long quantite)
{
	this->quantite = quantite;
}

double Ligne::getMontant() const
{
	double montant= quantite * article->getPrix() ;
	return montant;
}

void Ligne::afficher()
{
	 cout << setfill(' ') << setw(2) << getQuantite(); 
	 cout << "|" << setfill('.') << setw(50) << article->getTitre(); 
	 cout << "|" << setfill(' ') << setw(8) << article->getPrix();
	 cout << "|" << setfill(' ') << setw(9) << getMontant() << " euros";
}
