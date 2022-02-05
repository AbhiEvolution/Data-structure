#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertAtBegin(int d)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = d;
    temp->next = head;
    head = temp;
}
void insertAtEnd(int d)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *ptr=head;
    if (head == NULL)
    {
        temp->data = d;
        temp->next = head;
        head = temp;
    }

    else
    {
       while(ptr != NULL)
       {
           ptr = ptr->next;
           temp->data = d;
           temp->next = NULL;
           ptr->next = temp;

       } 
  
    }
}
int print(struct node *n)
{
    int c = 0;
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
        c++;
    }
    return c;
}

int main()
{

    int d, choice, node;
    cout << "Enter the  choice: ";

    do
    {
        cout << endl
             << "1.Insert At Beginning 2.Insert At Ending 3.print -1.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the number: ";
            cin >> d;
            insertAtBegin(d);
            break;

        case 2:
            cout << "Enter the number: ";
            cin >> d;
            insertAtEnd(d);
            break;

        case 3:
            node = print(head);
            cout << endl
                 << "Number of Node: " << node << endl;
            break;
        }

    } while (choice != -1);

}
