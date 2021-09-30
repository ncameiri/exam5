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

    std::vector<ASpell *>::iterator it_begin = this->sp_book.begin();
    std::vector<ASpell *>::iterator it_end = this->sp_book.end();
    while (it_begin != it_end)
    {
        delete *it_begin;
        ++it_begin;
    }
    this->sp_book.clear();
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

void Warlock::learnSpell(ASpell *el){
    std::vector<ASpell *>::iterator it;
    it = sp_book.begin();
    for(;it!=sp_book.end();it++){
        if((*it)->getName() == el->getName() )
            return;
    }
    sp_book.push_back(el->clone());
}

void Warlock::forgetSpell(std::string const &_spell){
    std::vector<ASpell *>::iterator it;
    it = sp_book.begin();
    for(;it!=sp_book.end();it++){
        if((*it)->getName() == _spell){
           delete (*it);
           sp_book.erase(it);
           return;
        }
}
}

void Warlock::launchSpell(std::string const &sp_name, ATarget const &el){
     std::vector<ASpell *>::iterator it;
    it = sp_book.begin();
    for(;it!=sp_book.end();it++){
        if((*it)->getName() == sp_name){
            (*it)->launch(el);
}   
}
}

