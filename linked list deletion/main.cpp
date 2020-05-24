#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
}node head = NULL;

void insert(int data)
{

}

int main()
{
    int n;
    cout<<"enter no.of elements";
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        insert(x);
    }
}
