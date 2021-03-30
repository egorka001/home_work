#ifndef head
#define head
template <typename Type>
class List
{
public:
    struct Node
    {
        Type data;
        Node* next;
        Node(Type const& d) : data(d), next(nullptr) {}
    };

private:
    Node* _root;
    int _size;

public:
    List() : _root(nullptr), _size(0) {}

    void clear()
    {
        while(_root != nullptr)
        {
            Node* tmp = _root;
            _root = _root -> next;
            delete tmp;
        }
        _size = 0;
    }

    ~List() { clear(); }
};
#endif
