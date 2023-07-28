#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#pragma once

class Brain {
public:   
    Brain( void );
    Brain( Brain &copy );
    void operator=(Brain &other);
    ~Brain();
    std::string ideas[100];

};

#endif
