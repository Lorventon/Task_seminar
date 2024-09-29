#include <iostream>
#include <stack>
#include <string>
#include <vector>

template <typename T>
void print(std::stack<T>);

template <typename T>
void print(T);

template <typename T>
void print(std::vector <T>);

int main()
{

    std::stack<unsigned> m_ind;
    std::vector<unsigned> vec1{1,2,3,4,5,6,7,8,9,10};
    std::string text{"Hello, my friend! You are my friend!"};
    std::string substring{"friend"};

    for (unsigned i{}; i < text.length() - substring.length(); ++i) {
        if (text.compare(i, substring.length(), substring) == 0) {
            m_ind.push(i);
        }
    }


    print(m_ind);
    print(vec1);
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

template <typename T>
void print(std::vector <T> vec)
{
    for (const auto& item : vec) {print(item);}
}

