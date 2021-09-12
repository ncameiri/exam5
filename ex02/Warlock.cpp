#include "Warlock.hpp"

Warlock::Warlock(std::string const &_name, std::string const &_title): 
    name(_name),
    title(_title)
    {
        std::cout<<_name<<": This looks like another boring day.\n";
    };

Warlock::~Warlock(){
    std::cout<<name<<": My job here is done!\n";
      std::vector<ASpell *>::iterator it_begin = this->spells.begin();
    std::vector<ASpell *>::iterator it_end = this->spells.end();
    while (it_begin != it_end)
    {
        delete *it_begin;
        ++it_begin;
    }
    this->spells.clear();
}

Warlock::Warlock( Warlock const &to_copy){
    *this = to_copy;
}

Warlock Warlock::operator= (Warlock const &to_copy){
    this->name=to_copy.name;
    this->title=to_copy.title;
    return(*this);
}

std::string const &Warlock::getName() const{
    return(name);
}



std::string const &Warlock::getTitle() const{
    return(title);
}

void Warlock::setTitle(std::string const &newtitle){
    this->title = newtitle;    
}

void Warlock::introduce() const{
    std::cout<<this->getName()
    <<": I am "<<this->getName()
    <<", "<<this->getTitle()
    <<"!\n";
}

void Warlock::learnSpell(ASpell *el){
    if(!el)
        return;
    std::vector<ASpell*>::iterator it = this->spells.end();
    std::vector<ASpell*>::iterator itb;// = this->spells.begin();
    for(itb= this->spells.begin() ; itb!= it ; it++)
    {
        if((*itb)->getName() == el->getName()){
           return;
            this->spells.push_back(el->clone());
        }
    }

}

void Warlock::forgetSpell(std::string arg){
    std::vector<ASpell*>::iterator it = this->spells.end();
    std::vector<ASpell*>::iterator itb;// = this->spells.begin();
    for(itb= this->spells.begin() ; itb!= it ; itb++){
        if((*itb)->getName() == arg){
            delete *itb;
            itb = this->spells.erase(itb);
            return;

    }
}
}

void Warlock::launchSpell(std::string spname, ATarget const &el){
std::vector<ASpell*>::iterator it = this->spells.end();
    std::vector<ASpell*>::iterator itb; 
    for(itb = this->spells.begin() ; itb!= it ; it++){
        if((*itb)->getName() == spname){
        (*itb) ->launch(el); 
        }
    }
}