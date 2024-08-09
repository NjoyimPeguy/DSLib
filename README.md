
# DSLib

**DSLib** is a comprehensive C++ library offering a collection of advanced data structures not found in the Standard Template Library (STL). This library is designed for developers and computer science enthusiasts who want to explore and utilize efficient, custom data structures to solve complex problems that go beyond the capabilities of the STL.

## Features

- **Trie (Prefix Tree):** Efficiently store and retrieve strings, making it perfect for applications like autocomplete and spell checking.
- **Segment Tree:** Manage and query ranges of data effectively, ideal for problems involving intervals.
- **Fenwick Tree (Binary Indexed Tree):** Perform cumulative frequency and range sum queries with ease.
- **Disjoint Set (Union-Find):** Keep track of disjoint sets, useful in network connectivity and clustering problems.
- **Suffix Tree:** Speed up substring searches, especially in large text processing.
- **Sparse Table:** Quickly solve range minimum queries after a one-time preprocessing step.
- **Skip List:** Achieve fast search, insertion, and deletion with a probabilistic twist.
- **Order Statistic Tree:** Find k-th smallest elements efficiently using augmented binary search trees.
- **B-Tree:** Handle large datasets in database management systems and filesystems.
- **Rope:** Manipulate large strings efficiently by splitting and concatenating.
- **Bloom Filter:** Save space with a probabilistic set membership structure.
- **Priority Search Tree:** Efficiently search points in multi-dimensional space.
- **2-3 Tree / 2-3-4 Tree:** Balance search trees for optimized query times.
- **KD-Tree:** Organize points in k-dimensional space for nearest neighbor searches.
- **Interval Tree:** Handle interval overlap queries efficiently.

## Installation

To use **DSLib** in your project, clone this repository and include the desired data structure header files in your C++ code.

## Usage

Each data structure comes with a well-documented header file and implementation. You can include these files in your projects to use the data structures directly.

```cpp
#include "Trie.h"

int main() {
    Trie trie;
    trie.insert("example");
    bool found = trie.search("example");
    return 0;
}
```

## Contributions

Contributions are welcome! If you have implemented a new data structure or improved an existing one, feel free to submit a pull request. Please ensure that your code is well-documented and follows the project's coding style.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

**DSLib** is inspired by the desire to explore and implement advanced data structures that are not included in the C++ STL. Thanks to the community of developers and computer science enthusiasts for the ongoing inspiration and collaboration.
