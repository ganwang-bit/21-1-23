//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    void seta(int a){this->a=a;}
//    void setb(int b){this->b=b;}
////    A operator+(A &p)
////    {
////        A tmp;
////        tmp.a=this->a+p.a;
////        tmp.b=this->b+p.b;
////        return tmp;
////    }
//    void show(){cout<<a<<" "<<b<<endl;}
//    int a;
//    int b;
//};
//A operator+(A &p1,A&p2)
//{
//    A tmp;
//    tmp.a=p1.a+p2.a;
//    tmp.b=p1.b+p2.b;
//    return tmp;
//}
//int main()
//{
//    A a;
//    A b;
//    a.seta(10);
//    a.setb(10);
//    b.seta(10);
//    b.setb(10);
//    A c=a+b;
//    c.show();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A():a(0){}
//    A(int a){this->a=a;}
////    A operator+(A p)
////    {
////        A tmp;
////        tmp.a=p.a+this->a;
////        return tmp;
////    }
//    A (const A&p):a(0){cout<<"A::A(const)"<<a<<endl;}
//    friend A operator+(A p1,A p2);
//    void show(){cout<<a<<endl;}
//private:
//    int a;
//};
//A operator+(A p1,A p2)
//{
//    A tmp;
//    tmp.a=p1.a+p2.a;
//    return tmp;
//}
//int main()
//{
//    A a;
//    A b=operator+(10,a);
//    b.show();
//    return 0;
//}
//#include<iostream>
//#include<math.h>
//using namespace std;
//template <typename T>
//T operato(T &a,T &b)
//{
//    T tmp=pow(a,b);
//    return tmp;
//}
//int main()
//{
//    int a=2,b=3;
//    int c=operato<int>(a,b);
//    cout<<c<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    int a;
//    int b;
//    A (int a,int b){this->a=a;this->b=b;}
//};
//ostream&  operator<<(ostream &cout,A &p)
//{
//    cout<<p.a<<" "<<p.b;
//    return cout;
//}
//int main()
//{
//    A a(10,20);
//    cout<<a<<endl;
//    return 0;
//
//#include<iostream>
//using namespace std;
//class A
//{
//    friend ostream&operator<<(ostream &out,A p);
//public:
//    A():a(0){}
//    A& operator++()
//    {
//        a++;
//        return *this;
//    }
//    A operator++(int)
//    {
//        A tmp=*this;
//        ++a;
//        return tmp;
//    }
//    A& operator--()
//    {
//        a--;
//        return *this;
//    }
//    A operator--(int)
//    {
//        A tmp=*this;
//        --a;
//        return tmp;
//    }
//private:
//    int a;
//};
//ostream& operator<<(ostream &out,A p)
//{
//    out<<p.a;
//    return out;
//}
//int main()
//{
//    A a;
//    cout<<a++<<endl;
//    cout<<a++<<endl;
//    cout<<a++<<endl;
//    cout<<--a<<endl;
//    cout<<a--<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//    friend A&operator--(A &p);
//    friend A operator--(A &p,int);
//    friend ostream& operator<<(ostream &cout,A p);
//public:
//    A():i(0){}
//    int geti(){return i;}
//private:
//    int i;
//};
//A&operator--(A &p)
//{
//    p.i--;
//    return p;
//}
//A operator--(A &p,int )
//{
//    A tmp=p;
//    --p;
//    return tmp;
//}
//ostream &operator<<(ostream &cout,A p)
//{
//    cout<<p.i;
//    return cout;
//}
//int main()
//{
//    A a;
//    cout<<--a<<endl;
//    cout<<a--<<endl;
//    cout<<a.geti()<<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(int n){i=n;}
//    A(const A&p){i=p.i;cout<<"A::A(const)"<<endl;}
//    void show(){cout<<i<<endl;}
//private:
//    int i;
//};
//int main()
//{
//    A a(0);
//    A b=10;
//    b=a;
//    a=10;
//    a.show();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(int n):i(n){};
//    A &operator=(A&p)
//    {
//        this->i=p.i;
//        return *this;
//    }
//    void show(){cout<<i<<endl;}
//private:
//    int i;
//};
//int main()
//{
//    A a(0);
//    A b(10);
//    A c(30);
//    b.show();
//    c=b=a;
//    b.show();
//    a.show();
//    c.show();
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    if(n=0);
//    while(n++<=2);
//    printf("%d",n);
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//class Person
//{
//private:
//    string name;
//    int age;
//public:
//    Person(string n,int a):name(n),age(a){}
//    bool operator==(Person&p)
//    {
//        if(name==p.name&&age==p.age)
//            return true;
//        else
//            return false;
//    }
//    bool operator!=(Person&p)
//    {
//        if(name!=p.name||age!=p.age)
//            return true;
//        else
//            return false;
//    }
//};
//int main()
//{
//    Person p1("汤姆",18);
//    Person p2("汤姆",18);
//    if(p1==p2)
//        cout<<"p1和p2是相等的"<<endl;
//    else
//        cout<<"p1和p2是不相等的"<<endl;
//    return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class A
//{
//public:
////    void operator()(string test)S
////    {
////        cout<<test<<endl;
////    }
//private:
//    int i;
//};
//int main()
//{
//    A a();
////    A();
////    A()("hello world!");
////    a("hello world!");
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//
//    return 0;
//}
