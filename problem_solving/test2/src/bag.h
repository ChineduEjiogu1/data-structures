#ifndef BAG_H_
#define BAG_H_
class bag
{
    public:
        bag();
        static const __size_t CAPACITY = 20;
        void insert(int new_entry);
        void remove();
    private:
        int data[CAPACITY];
        __size_t count;
};

#endif BAG_H_