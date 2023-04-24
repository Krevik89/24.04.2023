#pragma once


#include <iostream>
using namespace std;


// const_cast - преобразование const / или volitile
void test(const int* v) {
    int* temp;
    temp = const_cast<int*>(v);
    *temp = *v * *v;
}

// dynamic_cast
class B {
public:
    virtual void Test() {
        cout << "Test B\n\n";
    }
};
class D :public B {
public:
    void Test() {
        cout << "Test D\n\n";
    }
};

// reinterpret_cast
void test2() {
    int x;
    char* str = (char*)"This is string";
    x = reinterpret_cast<long>(str);
    cout << x;
}

// static_cast
void test3() {
    double d = static_cast<double>(5) / 6;
    cout << d;
}

void main() {

    /*int x = 10;
    cout << "x " << x << endl;
    test(&x);
    cout << "x " << x << endl;*/
    /* B* ptr_B, obj_B;
    D* ptr_D, obj_D;

    ptr_D = dynamic_cast<D*>(&obj_D);
    if (ptr_D) {
        cout << "Ok...\n";
        ptr_D->Test();
    }
    else cout << "eroro";

    ptr_B = dynamic_cast<B*>(&obj_D);
    if (ptr_B) {
        cout << "Ok...\n";
        ptr_B->Test();
    }
    else cout << "eroro";

    ptr_B = dynamic_cast<B*>(&obj_B);
    if (ptr_B) {
        cout << "Ok...\n";
        ptr_B->Test();
    }
    else cout << "eroro";

    ptr_D = dynamic_cast<D*>(&obj_B);
    if (ptr_D) {
        cout << "Ok...\n";
        ptr_D->Test();
    }
    else cout << "eroro";*/
    //test2();
}


void f() {
    //FIleOpen myfile("text.txt", "r"); 
}

class FIleOpen {
    FILE* f;
public:
    FIleOpen(const char* fname, const char* mode) {
        if (!fopen_s(&f, fname, mode)) {
            exit(0);
        }
    }
    ~FIleOpen() {
        fclose(f);
    }
};



class Temp {
public:
    Temp() {
        cout << "Temp\n";
    }
    ~Temp() {
        cout << "Temp Distruct\n";
    }
    void Test() {
        cout << "Metod Test\n";
    }
};
/*auto_ptr<Temp>ptr1(new Temp),ptr2;
    ptr2 = ptr1;
    ptr2->Test();

    Temp* ptr = ptr2.get();
    ptr->Test();

    delete[]ptr;*/
