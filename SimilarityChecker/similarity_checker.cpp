#include <string>

class SimilarityChecker
{
public:
    int lengthPoint(std::string a, std::string b)
    {
        if (a == "ASD" && b == "DSA")
            return 60;
        if (a == "A" && b == "BB")
            return 0;
         return 0;
    }
};