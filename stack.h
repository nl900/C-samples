/**
 * Implementation of a Stack class that can store items of any type
*/

#include <iostream>
#include <vector>

template<class T>
class Stack {
    private:
    std::vector<T> stack;
    
    public:
    bool empty();
    void push(const T item);
    T& top();
    void pop();

};

template<class T> 
bool Stack<T>::empty() {
    return stack.empty();
}

template<class T> 
void Stack<T>::push(const T item) {
    stack.push_back(item);
}

template<class T> 
T& Stack<T>::top() {
    try {
        return stack.back();
    } catch (const std::out_of_range& e) {
         std::cerr << e.what() << std::endl;
    }
}

template<class T> 
void Stack<T>::pop(){
    stack.pop_back();
}
