#include "Warlock.hpp"

Warlock::Warlock(std::string _name, std::string _title):
    name(_name),
    title(_title)
    {
      std::cout<< name<<": This looks like another boring day."<<std::endl;  
    };

Warlock::Warlock(Warlock const &rhs){
    name = rhs.name;
    title = rhs.name;
}

Warlock &Warlock::operator=(Warlock const &rhs){
    this->name = rhs.name;
    this->title = rhs.title;
    return (*this);
}
Warlock::~Warlock(){
    std::cout<< name<<": My job here is done!"<<std::endl;
}

std::string const &Warlock::getName() const{
    return(name);
}

std::string const &Warlock::getTitle() const{
    return(title);
}

void Warlock::setTitle(std::string const &_title){
    title=_title;
}

void Warlock::introduce() const{
    std::cout<< name << ": I am "<<name
    <<", "<<title<<" !"<<std::endl;
}

