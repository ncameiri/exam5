#include "SpellBook.hpp"
SpellBook::SpellBook(){};

SpellBook::~SpellBook(){};

SpellBook::SpellBook(SpellBook const &rhs){}

SpellBook &SpellBook::operator=(SpellBook const &rhs){return(*this);}

void SpellBook::learnSpell(ASpell *el){
std::vector<ASpell *>::iterator it;
    it = book.begin();
    for(;it!=book.end();it++){
        if((*it)->getName() == el->getName()){
            return;
        }

    }
    book.push_back(el->clone());
}

void SpellBook::forgetSpell(std::string const &sp){
     std::vector<ASpell *>::iterator it;
    it = book.begin();
    for(;it!=book.end();it++){
        if((*it)->getName() == sp){
           delete (*it);
           book.erase(it);
           return;
        }
}
}

ASpell *SpellBook::createSpell(std::string const &sp){
         std::vector<ASpell *>::iterator it;
    it = book.begin();
    for(;it!=book.end();it++){
        if((*it)->getName() == sp){
           return (*it);
}   
}
return NULL;
}