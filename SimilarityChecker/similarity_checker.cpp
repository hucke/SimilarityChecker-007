#include <string>

class SimilarityChecker
{
public:
    int lengthPoint(std::string a, std::string b)
    {
        float point = 0.0f;
        size_t gap = abs(a.length(), b.length());

        if (a.length() > b.length())
        {
            point = (1.0f - gap / b.length()) * 60.0f;
        }
        else
        {
            point = (1.0f - gap / a.length()) * 60.0f;
        }

        return static_cast<int>(point);
    }

    size_t abs(size_t a, size_t b)
    {
        if (a > b)
        {
            return a - b;
        }
        else
        {
            return b - a;
        }
    }
};