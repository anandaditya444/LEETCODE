//Q. 1115

class FooBar {
private:
    int n;

public:
    mutex a,b;
    FooBar(int n) {
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        for (int i = 0; i < n; i++) {
            b.lock();
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            a.unlock();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            a.lock();       
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            b.unlock();
        }
    }
};