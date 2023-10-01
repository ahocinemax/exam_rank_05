#pragma once
#include <string>
#include <iostream>

class Warlock
{
private:
    std::string _name;
    std::string _title;

    Warlock(void);
    Warlock(const Warlock &copy);
    Warlock &operator=(const Warlock &rhs);

public:
    Warlock(const std::string &name, const std::string &title);
    ~Warlock();

    void    setTitle(const std::string &title);
    void    introduce(void) const;

    const std::string &getTitle(void) const;
    const std::string &getName(void) const;
};
