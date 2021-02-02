long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long ans1=0;
    long long ans2=0;
    while(l1!=NULL)
    {
        ans1=(ans1*10+l1->data)%1000000007;
        l1=l1->next;
    }
    while(l2!=NULL)
    {
        ans2=(ans2*10+l2->data)%1000000007;
        l2=l2->next;
    }
    return (ans1*ans2)%1000000007;
}

