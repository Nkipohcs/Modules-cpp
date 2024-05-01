#include "Span.hpp"
#include <stdexcept> // Include for std::length_error and std::logic_error
#include <algorithm> // For std::sort, std::max_element, std::min_element
#include <limits>    // For std::numeric_limits<int>::max()

void Span::addNumber(int num) {
    if (_vec.size() >= _maxSize) throw std::length_error("Span full");
    _vec.push_back(num);
}

int Span::shortestSpan() {
    if (_vec.size() < 2) throw std::logic_error("Not enough elements for a span");
    std::sort(_vec.begin(), _vec.end());

    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 0; i < _vec.size() - 1; ++i) {
        int diff = _vec[i + 1] - _vec[i];
        if (diff < shortest) {
            shortest = diff;
        }
    }
    return shortest;
}

int Span::longestSpan() {
    if (_vec.size() < 2) throw std::logic_error("Not enough elements for a span");
    int maxElem = *std::max_element(_vec.begin(), _vec.end());
    int minElem = *std::min_element(_vec.begin(), _vec.end());

    return maxElem - minElem;
}
