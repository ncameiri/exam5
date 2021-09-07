#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ASpell{

    private:
        std::string name;
        std::string effects;
    
    public:

        ASpell(std::string _name, std::string  _effect);
        ~ASpell();
        ASpell( ASpell const& to_copy);
        ASpell operator = (ASpell const& to_copy);


        //GETTERS
        std::string getName(void);
        std::string getEffects(void);
};

#endif