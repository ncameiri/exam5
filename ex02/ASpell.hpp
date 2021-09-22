#ifndef ASPELL_HPP
#define ASPELL_HPP

#include "Warlock.hpp"
#include "ATarget.hpp"
class ATarget;
class ASpell{

    private:
        std::string name;
        std::string effects;
    public:

        ASpell(std::string _name, std::string _effect);
        virtual ~ASpell();
        ASpell(ASpell const &to_copy);
        ASpell &operator=(ASpell const &to_copy);
        virtual ASpell *clone() const = 0;

        std::string const &getName() const;
        std::string const &getEffects() const;

        void launch(ATarget const &el);


};

#endif