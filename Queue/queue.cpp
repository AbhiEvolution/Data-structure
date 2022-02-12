#include <iostream>

using namespace std;

struct node
{
    int d;
    struct node *next;
};

struct node *front;
struct node *rear;

void insert(int d)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->d = d;
    if (front == NULL)
    {
        temp->next = NULL;
        front = rear = temp;
    }
    else
    {
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    }
}

int del()
{
    int d;
    d = -999;
    if (front == NULL)
    {
        cout << "Queue is empty!" << endl;
        return d;
    }
    else
    {
        d = front->d;
        front = front->next;
    }
    return d;
}

void print()
{
    struct node *temp = front;
    if (front == NULL)
    {
        cout << "Queue is empty!" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->d << " ";
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
            insert(d);
            break;
        case 2:
            cout << "Pop Element is: " << del();
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