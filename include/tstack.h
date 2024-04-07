#include <stdexcept>

template<typename T, int size>
class TStack {
private:
    T data[size];
    int top = 0;

public:
    void push(const T &met) {
        if (top >= size)
            throw std::overflow_error("Full!");
        data[top++] = met;
    }

    T pop() {
        if (top < 0)
            throw std::underflow_error("Empty!");
        return data[--top];
    }

    bool isEmpty() const {
        return top == 0;
    }

    const T& get() const {
        if (isEmpty())
            throw std::underflow_error("Empty!");
        return data[top - 1];
    }
};
