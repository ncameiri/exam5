#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"
class ATarget;
class ASpell{

    private:
        std::string name;
        std::string effects;
    
    public:

        ASpell(std::string _name, std::string  _effect);
        virtual ~ASpell();
        ASpell( ASpell const& to_copy);
        ASpell &operator = (ASpell const &to_copy);


        //GETTERS
        std::string const &getName(void);
        std::string const &getEffects(void)const;

        void launch(ATarget const &el)const;

        virtual ASpell *clone() const = 0; 
};

#endif