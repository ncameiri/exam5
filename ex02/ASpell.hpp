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
    ASpell(std::string const &_name, std::string const &_effects);
    virtual ~ASpell();
    ASpell(ASpell const &rhs);
    ASpell &operator=(ASpell const &rhs);

    virtual ASpell *clone() const = 0;
    
    std::string const &getName() const;
    std::string const &getEffects() const;

    void launch(ATarget const &el)const;


};

#endif