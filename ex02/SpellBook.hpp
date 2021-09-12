#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include"ASpell.hpp"

class SpellBook{
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell*);
        void forgetSpell(std::string const &st);
        ASpell* createSpell(std::string const &st);
    private:
        SpellBook( SpellBook const &to_copy);
        SpellBook operator=(SpellBook const &to_ass); 
};

#endif