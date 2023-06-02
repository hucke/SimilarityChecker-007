#include <string>

class SimilarityChecker
{
public:
    int lengthPoint(std::string a, std::string b)
    {
        const size_t gap = abs(a.length(), b.length());
        const size_t B = min(a.length(), b.length());

        return calcLengthPoint(gap, B);
    }

    int alphaPoint(std::string a, std::string b)
    {
        const int totalCount = getTotalCount(a + b);
        const int sameCount = getSameCount(a, b);

        return (sameCount * 40) / totalCount;
    }

private:
    inline int ch2index(char c)
    {
        return c - 'A';
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

    int getTotalCount(std::string str)
    {
        bool alpha[26] = { false, };
        for (auto ch : str)
        {
            alpha[ch2index(ch)] = true;
        }

        int result = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (alpha[i])
                result++;
        }
        return result;
    }

    int getSameCount(std::string a, std::string b)
    {
        bool alpha_a[26] = { false, };
        for (auto ch : a)
        {
            alpha_a[ch2index(ch)] = true;
        }

        bool alpha_b[26] = { false, };
        for (auto ch : b)
        {
            alpha_b[ch2index(ch)] = true;
        }

        int result = 0;
        for (int i = 0; i < 26; ++i)
        {
            if (alpha_a[i] && alpha_b[i])
                result++;
        }
        return result;
    }
};