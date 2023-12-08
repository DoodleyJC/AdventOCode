#include "Path.ih"


Path::Path(std::string fullLine){

    size_t idx=0;
    
    while(fullLine.at(idx)!=' ')
    {
        d_base+= fullLine.at(idx);
        ++idx;
    }
    while(!isalnum(fullLine.at(idx)))
    {
        ++idx;
    }
    while(isalnum(fullLine.at(idx)))
    {
        d_left += fullLine.at(idx);
        ++idx;
    }
    while(!isalnum(fullLine.at(idx)))
    {
        ++idx;
    }
    while(isalnum(fullLine.at(idx)))
    {
        d_right += fullLine.at(idx);
        ++idx;
    }
}