#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;
class Warlock{

    private:
        std::string name;
        std::string title;

        SpellBook spells;

        Warlock(Warlock const &to_copy);
        Warlock &operator=(Warlock const &to_copy);
    
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

#endif
