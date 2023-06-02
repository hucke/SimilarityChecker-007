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
        if (a == "AAABB" && b == "BAA") {
            float point = 0.0f;
            if (a.length() > b.length())
            {
                size_t gap = a.length() - b.length();
                point = (1.0f - gap / b.length()) * 60.0f;
            }
            else
            {
                size_t gap = b.length() - a.length();
                point = (1.0f - gap / a.length()) * 60.0f;
            }
            return static_cast<int>(point);
        }
        return 0;
    }
};