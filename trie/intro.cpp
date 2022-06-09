
// is that  working only on online gdp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class TrieNode
{
public:
    char data;
    // trinode type node ka adress ess mai save hoga  like link list
    TrieNode *children[26];
    bool isTerminal;
    
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // assumption word be in caps
        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }
    
    bool searchUtil(TrieNode *root, string word){
        // base case
        if (word.length() == 0)
        {
           return   root->isTerminal ;
            
        }

        // assumption word be in caps
        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
           return false;
        }
        
        return searchUtil(child, word.substr(1));

        
    }
    
    
     bool search(string word)
    {
        return searchUtil(root, word);
    }

};

int main()
{
    Trie *t = new Trie();
    t->insertWord("abcd");
    cout << "present " << endl;
    cout << "present or not" <<" "<< t->search("abcde");

    return 0;
}