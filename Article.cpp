#include <ostream>
#include <string>
#include "Article.h"

using namespace std;


  

Article::Article(std::string titre, double prix)
{
	this->titre =titre;
	this->prix =prix;
}

string Article::getTitre() const{
	return this->titre;
}

double Article::getPrix() const{
	return this->prix;
}

void Article::setTitre(string titre){
	this->titre = titre;
}

void Article::setPrix(double prix){
	this->prix = prix;
}

