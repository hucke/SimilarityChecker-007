#include <iostream>

#include "../SimilarityChecker/similarity_checker.cpp"

int main(int argc, char* argv[])
{
    SimilarityChecker checker;
    std::cout << checker.alphaPoint("ASD", "DSA");

    return 0;
}
