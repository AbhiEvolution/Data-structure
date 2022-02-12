#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int d)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->next = top;
    top = ptr;
}

int pop()
{
    int d = -9999;

    if (top == NULL)
    {
        cout << "Stack is empty!" << endl;
        return d;
    }
    else
    {
        d = top->data;
        top = top->next;
    }

    return d;
}

void print()
{
    struct node *temp = top;
    if (temp == NULL)
    {
        cout << "Stack is empty!" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int d, choice;
    cout << "\nEnter the choice\n";
    do
    {
        cout << "\n1.Push 2.Pop 3.Print 0.Exit: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Exit";
            break;
        case 1:
            cout << "Enter the number: ";
            cin >> d;
            push(d);
            break;
        case 2:
            cout << "Pop Element is: " << pop();
            break;
        case 3:
            print();
            break;
        default:
            cout << "invalid choice";
            break;
        }
    } while (choice != 0);
    cout << endl;
}