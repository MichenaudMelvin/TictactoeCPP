#ifndef AFFSTRATEGY_H
#define AFFSTRATEGY_H

#include <string>

// interface
class AffStrategy{
    public:
        virtual ~AffStrategy(){}
        virtual std::string execute() const = 0;
};

#endif