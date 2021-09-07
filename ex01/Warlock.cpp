#include "Warlock.hpp"

Warlock::Warlock(std::string const &_name, std::string const &_title): 
    name(_name),
    title(_title)
    {
        std::cout<<_name<<": This looks like another boring day.\n";
    };

Warlock::~Warlock(){
    std::cout<<name<<": My job here is done!\n";
}

Warlock::Warlock( Warlock const &to_copy){
    *this = to_copy;
}

Warlock Warlock::operator= (Warlock const &to_copy){
    this->name=to_copy.name;
    this->title=to_copy.title;
    return(*this);
}

std::string const Warlock::getName() const{
    return(name);
}



std::string const Warlock::getTitle() const{
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