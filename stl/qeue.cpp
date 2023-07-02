#include <iostream>
#include <queue>
using namespace std;

//queue<int> obj;
//It`s a container adapted that gives the programmer the funtionality of a queue(first-in first -out)
//provides only spcific set of functions.
// Allows to push at back and remove from every place;
//front,back, push,empty, size;
void print(std::queue<int> que){
    while(!que.empty()){
        cout<<que.front()<<endl;
        que.pop();
    }
}

int main(){
    queue<int> que;
    que.push(2);
    que.push(3);
    que.push(4);
   
    print(que);
   
    return 0;
}