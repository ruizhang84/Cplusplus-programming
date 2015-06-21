#include <iostream>
#include <cassert>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
    T list[MAX + 1];
    int top;
public:
    Stack();
    void push(const T &item);   // push item
    T pop();                    // pop stack
    const T & peek() const;     // top item in stack
    bool isEmpty() const;       // check any item in stack
};

int matching(string str1);

template <class T, int MAX>
Stack<T, MAX>::Stack():top(0){}

template <class T, int MAX>
void Stack<T, MAX>::push(const T &item){
    assert(top != MAX);
    top ++;
    list[top] = item;
}

template <class T, int MAX>
T Stack<T, MAX>::pop(){
    assert(top != 0);
    int temp = top;
    top--;
    return list[temp];
}

template <class T, int MAX>
const T& Stack<T, MAX>::peek() const{
    return list[top];
}

template <class T, int MAX>
bool Stack<T, MAX>::isEmpty() const{
    return top == 0;
}

int matching(string s){
    Stack<char> counter;
    for (int i=0; i < s.length(); i++){
        if (s[i] == '('){
            counter.push(s[i]);
        }
        else if (s[i] == ')' && counter.isEmpty() == 0){
            counter.pop();
        }
        else if (s[i] == ')'){
            return 1;
        }
    }
    
    if (counter.isEmpty()) {
        return 0;
    }
    return 1;
}

/* *********
 sample input:
 ((let)(us)(practice)((stack)(template)))
 ()you(should))(out)put(No)
 sample output:
 Yes
 No
********** */

int main(){
    string str;
    cin>>str;
    if (matching(str) == 0)
        cout << "Yes"<< endl;
    else
        cout << "No" << endl;
}