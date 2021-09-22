#include "SpellBook.hpp"

SpellBook::SpellBook(){};

SpellBook::~SpellBook(){};

SpellBook::SpellBook(SpellBook const &to_copy):
    arr(to_copy.arr)
{};

SpellBook &SpellBook::operator=(SpellBook const &to_copy){
    arr = to_copy.arr;
    return(*this);
}


void SpellBook::learnSpell(ASpell *el){
    std::vector< ASpell *>::iterator it;

    for (it = spells.begin(); it != spells.end() ;it++){
        if((*it)->getName() == sp->getName())
            return;
    }
    spells.push_back(sp);
}

void SpellBook::forgetSpell(std::string const &spell){
 std::vector< ASpell *>::iterator it;

    for (it = spells.begin(); it != spells.end(); it++){
        if((*it)->getName() == forg){
               delete (*it);
               spells.erase(it);
               return;
        }
    }
}

ASpell *SpellBook::createSpell(std::string const &spell){

}