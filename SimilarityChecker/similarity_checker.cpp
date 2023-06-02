#include <string>

class SimilarityChecker
{
public:
    int lengthPoint(std::string a, std::string b)
    {
        float point = 0.0f;
        size_t gap = abs(a.length(), b.length());
        size_t B = min(a.length(), b.length());

        return calcLengthPoint(gap, B);
    }

    int calcLengthPoint(size_t gap, size_t B)
    {
        float ratio = static_cast<float>(gap) / static_cast<float>(B);
        return static_cast<int>((1.0f - ratio) * 60.0f);
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

    size_t min(size_t a, size_t b)
    {
        if (a > b)
        {
            return b;
        }
        else
        {
            return a;
        }
    }
};