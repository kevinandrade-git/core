#pragma once
#include "irbnode.h"
#include <iterator>
#include <functional>
#include <list>

namespace RedBlackTree
{
template <class T>
using Action = std::function<void(T)>;


class RBTree
{
public:
    RBTree(){}
    RBTree(PIRBNode root);

    const PIRBNode getRoot() const;
    void setRoot(const PIRBNode &newRoot);

    bool TryLookup(PIRBNode templ, PIRBNode& val);
    void Insert(PIRBNode newNode);
    void Delete(PIRBNode templ, PIRBNode& deletedAlt);

    void VisitTree(Action<PIRBNode> action);
    void VisitTreeNodes(Action<PIRBNode> action);

private:
    static Color NodeColor(PIRBNode n);
    static PIRBNode MaximumNode(PIRBNode n);

    PIRBNode LookupNode(PIRBNode templ);
    void ReplaceNode(PIRBNode oldn, PIRBNode newn);
    void RotateLeft(PIRBNode n);
    void RotateRight(PIRBNode n);

    void InsertCase1(PIRBNode n);
    void InsertCase2(PIRBNode n);
    void InsertCase3(PIRBNode n);
    void InsertCase4(PIRBNode n);
    void InsertCase5(PIRBNode n);

    void DeleteCase1(PIRBNode n);
    void DeleteCase2(PIRBNode n);
    void DeleteCase3(PIRBNode n);
    void DeleteCase4(PIRBNode n);
    void DeleteCase5(PIRBNode n);
    void DeleteCase6(PIRBNode n);

    void DoVisitTree(Action<PIRBNode> action, PIRBNode walker);
    void DoVisitTreeNodes(Action<PIRBNode> action, PIRBNode walker);

public:

   class iterator : public std::iterator<std::output_iterator_tag, std::ptrdiff_t, IRBNode, IRBNode*, PIRBNode>
   {
       PIRBNode current;
       RBTree* tree;
   public:
       iterator(RBTree *tree);
       iterator& operator++();
       inline bool operator==(const iterator &other) const {return current == other.current;}
       inline bool operator!=(const iterator &other) const {return current != other.current;}
       inline PIRBNode operator*() {return current;}
   };

   iterator begin() {return iterator(this);}
   iterator end() {return iterator(nullptr);}

private:
    PIRBNode root;
};

}