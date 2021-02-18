#ifndef ITEMTYPE_H
#define ITEMTYPE_H

const int MAXITEMS = 50;
typedef int type;

enum RelationType
{
    LESS,
    GREATER,
    EQUAL
};

class ItemType
{
public:
    ItemType();
    RelationType ComparedTo(ItemType item);
    void Set(type item) { item = item; };
    type Get() { return item; };
    type getValue() { return item; };

private:
    type item;
};
