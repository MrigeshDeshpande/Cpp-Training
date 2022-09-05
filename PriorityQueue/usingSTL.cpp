#include <iostream> 
#include <queue> 
using namespace std; 
   
void displaypq(priority_queue <int> pq) 
{ 
    priority_queue <int> pqueue = pq; 
    while (!pqueue.empty()) 
    { 
        cout << '\t' << pqueue.top(); 
        pqueue.pop(); 
    } 
    cout << '\n'; 
} 
   
int main () 
{ 
    priority_queue <int> pq; 
pq.push(1); 
pq.push(3); 
pq.push(5); 
pq.push(7); 
pq.push(9); 
   
cout << "Size of the queue(pq.size()): " << pq.size(); 
cout << "\nTop element of the queue(pq.top()): " << pq.top(); 
cout << "\nThe priority queue pq is : "; 
displaypq(pq); 
     
cout << "\nPriority queue, after pq.pop() operation : "; 
pq.pop(); 
displaypq(pq); 
   
return 0; 
}