#ifndef PATH_H
#define PATH_H

#include <string>
class Path{
    std::string d_base;
    std::string d_left;
    std::string d_right;
    int d_lastVisit = 0;
    public:
        Path(std::string base, std::string left, std::string right);
        Path(std::string fullline);
        std::string getBase(){return d_base;}
        std::string getLeft(){return d_left;}
        std::string getRight(){return d_right;}
        int visit(int steps);
};







#endif