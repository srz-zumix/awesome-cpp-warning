template <typename T> struct A
{
    bool operator==(const T&) const;
};

struct B : public A<B> {};

bool f()
{
    return B() == B();
}
