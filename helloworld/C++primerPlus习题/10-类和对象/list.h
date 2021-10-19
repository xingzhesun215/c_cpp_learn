typedef unsigned long Item;
void visit_Item(Item&);

class List{
private:
    enum{MAX=10};
    Item items[MAX];
    int top;
public:
    List();
    bool isempty()const;
    bool isfull()const;
    bool add(const Item& item);
    bool visit(void(*pf)(Item&));
};