#ifndef DS_CONCEPTS_HXX
#define DS_CONCEPTS_HXX

#include <ranges>

template<typename T>
concept Iterable = std::ranges::range<std::ranges::range_value_t<T>>;

#endif // DS_CONCEPTS_HXX
