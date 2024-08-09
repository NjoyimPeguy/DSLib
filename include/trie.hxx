#ifndef TRIE_HXX
#define TRIE_HXX

#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>

#include "ds_concepts.hxx"

template<typename K, typename V>
struct TrieNode
{
    bool isEndOfWord;                                 // Marks the end of a key
    std::optional<V> value;                           // Value associated with the key, if any
    std::unordered_map<K, TrieNode<K, V> *> children; // Children nodes

    TrieNode()
        : isEndOfWord(false)
        , value(std::nullopt)
    {}
};

template<typename K, typename V>
class Trie
{
public:
    Trie();

public:
    template<Iterable T>
    void insert(const T& key, const V& value = std::nullopt)
    {
        TrieNode<K, V>* currentNode = this->rootNode;

        for (const K& element : key) {
            if (currentNode->children.find(element) == currentNode->children.end()) {
                currentNode->children[element] = new TrieNode<K, V>();
            }
            currentNode = currentNode->children[element];
        }

        if (value != std::nullopt) {
            currentNode->value = value;
        }

        currentNode->isEndOfWord = true;
    }

    template<Iterable T>
    bool find(const T& key)
    {
        TrieNode<K, V>* currentNode = this->rootNode;

        for (const K& element : key) {
            if (currentNode->children.find(element) == currentNode->children.end())
                return false;

            currentNode = currentNode->children[element];
        }

        return currentNode->isEndOfWord;
    }

private:
    TrieNode<K, V>* rootNode;
};

#endif // TRIE_HXX
