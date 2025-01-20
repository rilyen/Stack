/* 
 * Stack.h
 *
 * Description: Implementation of a linked list-based Stack ADT class - SHSL list
 * Class Invariant: LIFO order
 *                  Top of Stack located at the back of SHSL list.
 *
 * Author:  
 * Date:    October 13, 2023
 */
 
class Stack {

    private: 

        // Description:  Nodes for a singly-linked list - Do not modify!
        class StackNode {
            public:
                int data;
                StackNode * next;
        };

        // Desc: Head of LL 
        StackNode* head;
        
/* Put your code here! */       
        

    public:
        // Constructor
        Stack();

        // Destructor
        ~Stack();

        // Returns true if the stack is empty otherwise false
        bool isEmpty() const;

        // Adds a new element to the top of the stack
        bool push(int num);

        // Desc:    Removes the top element of the stack
        //          Returns true if removal is successful otherwise false
        // PRECONDITION:    The stack is NOT empty
        bool pop();

        // Desc:            Returns the top of the stack
        // PRE-CONDITION:   The Stack is not empty
        // post-condition:  The Stack is unchanged
        // Exceptions:      Throws EmptyStackException if the stack is empty 
        int peek() const;
/* Put your code here! */   


};
