struct Node
{
  int data;
  Node *next;
  Node (int x)
  {
    data = x;
    next = NULL;
  }
}

//Write a function “insert_any()” for inserting a node at any given position of the linked list. Assume
position starts at 0.
Node insert_any(Node *head, int pos, int data)
{
 Node *temp = new Node(data);
 if(pos == 1)
 {
  temp->next = head;
  return temp;
 }
 Node *curr = head;
 for( int i=0; i<pos&&curr!=NULL; i++)
 {
  curr = curr->next;
 }
 temp->next = curr->next;
 curr->next = temp;
 return head;
}

//Write a function “delete_beg()” for deleting a node from the beginning of the linked list.
Node *delete_beg(Node *head)
{
  if(head == NULL)
  {
    return NULL;
  }
  else
  {
    Node *temp = head->next;
    del head;
    return temp;
  }
}

//Write a function “delete_end()” for deleting a node from the end of the linked list.
Node *delete_end(Node *head)
{
  if(head == NULL)
  {
    return NULL;
  }
  else{
    Node *curr = head;
    while(curr->next->next != NULL)
    {
      curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
  }
} 



