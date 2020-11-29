#include <iostream>
using namespace std;

float stack[50];
int n=50, top=-1;

  void push(float val) {
   if(top>=n-1){
      cout<<"Stack Overflow"<<endl;}
   else {
      top++;
      stack[top]=val; }

}
  void pop() {
   if(top<=-1){
      cout<<"Stack Underflow"<<endl;   }
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
  void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   {cout<<"Stack is empty";}
}
    int main() {
   float ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      if(ch == 1) {

            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);

         }
       else if (ch == 2) {
            pop();

         }
       else if(ch == 3) {
            display();

         }
       else if(ch == 4){
            cout<<"Exit"<<endl;
         }
        else {
            cout<<"Invalid Choice"<<endl;
         }

   }while(ch!=4);
   return 0;
}
