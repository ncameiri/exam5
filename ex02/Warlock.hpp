#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"


class Warlock{
    private:
        std::string name;
        std::string title;

        SpellBook sp_book;


        Warlock( Warlock const &rhs);
        Warlock &operator=(Warlock const &rhs);
    public:
        Warlock(std::string _name,std::string _title);
        virtual ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &_title);

        void introduce() const;  

        void learnSpell(ASpell *el);
        void forgetSpell(std::string const &_spell);
        void launchSpell(std::string const &sp_name, ATarget const &el);


};

#endif