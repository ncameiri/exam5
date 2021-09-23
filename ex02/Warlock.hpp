#pragma once

#include <iostream>
#include <vector>
#include <iterator>

class SpellBook;
class ATarget;
class ASpell;
class Warlock{

    private:
        std::string name;
        std::string title;


        Warlock(Warlock const &to_copy);
        Warlock &operator= (Warlock const &to_copy);
        SpellBook *_spells;
    
    public:
        Warlock(std::string _name, std::string __title);
        ~Warlock();

        //getters
        std::string const &getName() const;
        std::string const &getTitle() const;

        //setters
        void setTitle(std::string const &new_title);

        void introduce() const;

        //ex01
        void learnSpell(ASpell *sp);
        void forgetSpell(std::string const &forg);
        void launchSpell(std::string sp, ATarget const &targ);



};
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"


