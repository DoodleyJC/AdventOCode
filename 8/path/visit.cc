#include "path.ih"

int Path::visit(int steps){
    int visitCopy = d_lastVisit;
    d_lastVisit = steps;
    return visitCopy;
}