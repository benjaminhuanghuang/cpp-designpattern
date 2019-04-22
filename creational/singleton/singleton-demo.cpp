class A
{
public:
  static A &getInstance();

private:
  A();
};

A &A::getInstance()
{
  static A a;
  return a;
}