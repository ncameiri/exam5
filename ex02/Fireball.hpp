#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell{
    public:
        Fireball();
        virtual ~Fireball();
        ASpell *clone() const;
};

#endif