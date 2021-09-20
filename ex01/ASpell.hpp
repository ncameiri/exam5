#ifndef ASPELL_HPP
#define ASPELL_HPP

#include "Warlock.hpp"
#include "ATarget.hpp"
class ASpell{

    private:
        std::string name;
        std::string effects;
    public:

        ASpell(std::string _name, std::string _effect);
        virtual ~ASpell();
        ASpell(ASpell const &to_copy);
        ASpell &operator=(ASpell const &to_copy);
        virtual ASpell *clone() = 0;

        std::string getName() const;
        std::string getEffects() const;

        void launch(ATarget const &el);


};

#endif