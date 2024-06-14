// Intl.h
#ifndef GUARD_INTL_H
#define GUARD_INTL_H

#include "Core.h"

class Intl : public Core {
public:
  
    Intl() : toeic(0) {}
    
    Intl(istream& is) { read(is); }

    double grade() const override;
    istream& read(istream&) override;

protected:
    Intl* clone() const override { return new Intl(*this); }

private:
    double toeic; 
};

#endif