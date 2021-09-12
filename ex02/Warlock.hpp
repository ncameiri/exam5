#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <vector>
#include <iterator>
#include "ASpell.hpp"
#include "ATarget.hpp"
class Warlock {

    private:
    std::string name;
    std::string title;
    std::vector<ASpell*> spells;

    Warlock( Warlock const &to_copy);
    Warlock operator= (Warlock const &to_copy);
    public:
    ~Warlock();
    Warlock(std::string const&_name, std::string const&_title);

    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(std::string const &newtitle);
    void introduce() const;
    
    void learnSpell(ASpell *el);
    void forgetSpell(std::string arg);
    void launchSpell(std::string spname, ATarget const &el);
};
#endif