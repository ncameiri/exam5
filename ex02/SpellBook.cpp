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

    for (it = arr.begin(); it != arr.end() ;it++){
        if((*it)->getName() == el->getName())
            return;
    }
    arr.push_back(el);
}

void SpellBook::forgetSpell(std::string const &spell){
 std::vector< ASpell *>::iterator it;

    for (it = arr.begin(); it != arr.end(); it++){
        if((*it)->getName() == spell){
               delete (*it);
              arr.erase(it);
               return;
        }
    }
}

ASpell *SpellBook::createSpell(std::string const &spell){
      std::vector< ASpell *>::iterator it;
     for (it = arr.begin(); it != arr.end(); it++){
        if((*it)->getName() == spell){
           return (*it);
        }
     }
     return NULL;

}