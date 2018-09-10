#include <stack>

bool palindrome(Node* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    Node* s = head;
    Node* f = head->next;
    stack<int> vals;
    vals.push(s->val);

    while (f != NULL && f->next != NULL) {
        s = s->next;
        f = f->next->next;
        vals.push(s->val);
    }
    if (f == NULL) {
        vals.pop();
    }

    s = s->next;
    while (!vals.empty() && s != NULL) {
        int val = vals.top();
        vals.pop();
        if (val != s->val) {
            return false;
        }
        s = s->next;
    }

    return true;
}

