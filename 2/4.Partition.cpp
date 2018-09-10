Node* partition(Node* head, int x) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* lhead = new Node();
    Node* l = lhead;
    Node* rhead = new Node();
    Node* r = rhead;
    Node* p = head;

    while (p != NULL) {
        if (p->val < x) {
            l->next = p;
            l = l->next;
        } else {
            r->next = p;
            r = r->next;
        }
        p = p->next;
    }

    l->next = rhead->next;
    r->next = NULL;

    return lhead->next;
}

