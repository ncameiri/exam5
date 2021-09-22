#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "Warlock.hpp"

class SpellBook{
    private:
        SpellBook(SpellBook const &to_copy);
        SpellBook &operator=(SpellBook const &to_copy);
        

        std::vector<ASpell *> arr;
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *el);
        void forgetSpell(std::string const &spell);
        ASpell *createSpell(std::string const &spell);


};


#endif