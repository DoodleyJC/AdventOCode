
#include "searchtree/searchtree.hh"
#include "iostream"
int main(int argc, char** argv){

    searchTree t = searchTree("test", 42);
    t.addToTree("testooo", 69);
    t.printTree(0);
    std::cout  << "\n first printtree done\n";
    t.addToTree("test123", 420);
    t.printTree(0);
    t.addToTree("hellothere", 21);
    t.addToTree("rosesarered", 17);
    t.printTree(0);
    t.addToTree("ro", 6);
    std::cout<< "\n\n";
    t.printTree(0);
    t.addToTree("testobb", 422);
    t.addToTree("feller", 50);
    t.printTree(0);

    std::cout << t.match("rosesarered");
    
}