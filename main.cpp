#include <iostream>
#include <stack>
#include <string>

template <typename T>
void print(std::stack<T>);

template <typename T>
void print(T);

int main()
{

    std::stack<unsigned> m_ind;
    std::string text{"Hello, my friend! You are my friend!"};
    std::string substring{"friend"};

    for (unsigned i{}; i < text.length() - substring.length(); ++i) {
        if (text.compare(i, substring.length(), substring) == 0) {
            m_ind.push(i);
        }
    }


    print(m_ind);
    return 0;
}

template <typename T>
void print(std::stack<T> stack)
{
    while (!stack.empty())
    {
        print(stack.top());
        stack.pop();
    }
}

template <typename T>
void print(T a)
{
    std::cout << a << std::endl;
}

