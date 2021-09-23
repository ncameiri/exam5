#pragma once

#include <iostream>

class ASpell;
class ATarget{
    private:
        std::string type;

    public:
        ATarget(std::string _type);
        virtual ~ATarget();
        ATarget(ATarget const &to_copy);
        ATarget &operator=(ATarget const &to_copy);
        
        std::string const &getType() const;

        virtual ATarget *clone() const = 0;

        void getHitBySpell(ASpell const &el) const;


};
#include "ASpell.hpp"


