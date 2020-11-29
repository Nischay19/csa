#include <bits/stdc++.h>
using namespace std;

int queue[50], n = 150, front = - 1, rear = - 1;

  void enqueue(int value) {
   if (rear == n - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>value;
      rear++;
      queue[rear] = value;
   }
}
  void dequeue() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
  void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements present are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" "<<endl;
         //cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1. Insert element to queue"<<endl;
   cout<<"2. Delete element from queue"<<endl;
   cout<<"3. Display all the elements of the queue"<<endl;
   cout<<"4. Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin<<ch;
      if(ch==1){
           enqueue();
               }
      else if(ch==2){
            dequeue();
               }
      else if(ch==3){
            Display();
              }
       else if(ch==4){
             cout<<"Exit"<<endl;
         break;
              }
        else{
                cout<<"Invalid"<<endl;
              }

   } while(ch!=4);
   return 0;
}
