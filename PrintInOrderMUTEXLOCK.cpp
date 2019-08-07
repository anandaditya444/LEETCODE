//Q. 1114

class Foo {
public:
    mutex a,b;
    Foo() {
        a.lock();
        b.lock();
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        a.unlock();
    }

    void second(function<void()> printSecond) {
        a.lock();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        b.unlock();
    }

    void third(function<void()> printThird) {
        b.lock();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};