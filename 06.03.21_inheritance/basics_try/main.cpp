#include <iostream>

class Base
{
    private:
        int _priv;
    public:
        int _publ;
    protected:
        int _prot;
};

class PublChild : public Base
{
    public:
        void checkField()
        {
            //_priv = 1;
            _publ = 2;
            _prot = 3;
        }
};

int main()
{

    return 0;
}
