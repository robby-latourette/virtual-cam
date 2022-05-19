#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H

namespace N
{
    class my_class
    {
    public:
        void do_something();
    };

    int main()
    {
        my_class mc;
        mc.do_something();
        return 0;
    }
}

#endif /* MY_CLASS_H */