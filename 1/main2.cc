
#include "searchtree/searchtree.hh"
#include "iostream"
int main(int argc, char** argv){

    searchTree t = searchTree("test", 42);
    t.addToTree("testooo", 69);
    t.addToTree("test123", 420);
    //t.addToTree("testobb", 422);
    //t.addToTree("feller", 50);
    //std::cout << t.match("feller");
    
}