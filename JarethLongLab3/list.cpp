#endif // !ITEMTYPE_H

#include "list.h"

ItemType::ItemType()
{
    item = 0;
}

RelationType ItemType::ComparedTo(ItemType item)
{
    if (item > item.Get())
        return GREATER;
    else if (item < item_.Get())
        return LESS;
    else
        return EQUAL;
}

