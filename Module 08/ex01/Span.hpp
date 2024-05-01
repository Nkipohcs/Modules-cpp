#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>

class Span {
private:
    std::vector<int> _vec;
    unsigned int _maxSize;

public:
    Span(unsigned int N) : _maxSize(N) {}
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
};

#endif
