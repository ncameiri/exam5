#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include "ASpell.hpp"
class SpellBook{
    private:
        std::vector<ASpell *> book;
    public:
        SpellBook();
        ~SpellBook();
        SpellBook(SpellBook const &rhs);
        SpellBook &operator=(SpellBook const &rhs);
        
        void learnSpell(ASpell *el);
        void forgetSpell(std::string const &sp);
        ASpell *createSpell(std::string const &sp);
};

#endif