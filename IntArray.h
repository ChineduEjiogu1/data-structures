#include <cstddef>
class IntArray
{
  public:
    IntArray(int number);
    IntArray(const IntArray &array);
    ~IntArray();

    int get(int index);
	void set (int index, int value);
    private:
      size_t size;
      int *data;

      bool safetyCheck(int index);
};
