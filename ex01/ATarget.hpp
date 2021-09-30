#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"
class ASpell;
class ATarget{
    private:
        std::string type;
    public:
        ATarget(std::string const &_type);
        ~ATarget();
        ATarget(ATarget const &rhs);
        ATarget &operator=(ATarget const &rhs);

        std::string const &getType() const;

        virtual ATarget *clone() const = 0;

        void getHitBySpell(ASpell const &el)const;



};

#endif