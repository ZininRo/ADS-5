#ifndef TSTACK_H
#define TSTACK_H

template <class T, int size>
class TStack {
    T data[size];
    int top;

public:
    TStack() : top(-1) {}

    void push(const T& value) {
        if (top >= size - 1) {
            return;
        }
        data[++top] = value;
    }

    T pop() {
        if (top < 0) {
            return T();
        }
        return data[top--];
    }

    const T& get() const {
        if (top < 0) {
            return T();
        }
        return data[top];
    }

    bool isEmpty() const {
        return top == -1;
    }

};

#endif // TSTACK_H
