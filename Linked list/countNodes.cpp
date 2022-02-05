#include <iostream>

using namespace std;

struct node
{
  int data;
  struct node *next;
};
struct node *head, *tail = NULL;
void insert(int d)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  if (head == NULL)
  {
    temp->data = d;
    temp->next = head;
    head = tail = temp;
  }

  else
  {
    tail->next = temp;
    temp->data = d;
    temp->next = NULL;
    tail = temp;
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
         << "1.Insert 2.print -1.Exit" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "Enter the number: ";
      cin >> d;
      insert(d);
      break;
    case 2:
      node = print(head);
      cout << endl
           << "Number of Node: " << node << endl;
      break;
    }

  } while (choice != -1);
  cout << "Number of nodes: " << d;
  cout << endl;
}
