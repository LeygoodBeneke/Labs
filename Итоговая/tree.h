#include "node.h"

class Tree {
public:
    virtual void add(int k) = 0;
    virtual void del(int k) = 0;
    virtual int search(int k) = 0;
};