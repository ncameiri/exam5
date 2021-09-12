#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#include "Warlock.hpp"
#include "ATarget.hpp"
class Fireball : public ASpell
{
    public:
        Fireball();
        virtual ~Fireball();
        virtual ASpell *clone() const;
};
#endif
