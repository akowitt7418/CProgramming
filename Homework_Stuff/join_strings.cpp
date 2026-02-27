#include <vector>
#include <string>

std::string my_join(const std::vector<std::string>& words, std::string separ)
{
    if(words.empty())
        return "";

    std::string result = words[0];

    for(size_t i=1;i<words.size();i++){
        result += separ;
        result += words[i];
    }

    return result;
}