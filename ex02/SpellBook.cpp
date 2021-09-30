#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *el){
std::vector<ASpell *>::iterator it;
    it = book.begin();
    for(;it!=book.end();it++){

    }
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