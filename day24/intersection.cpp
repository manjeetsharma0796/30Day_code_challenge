/* This is the ListNode class definition

class ListNode {
public:
	int data;
	ListNode* next;

	ListNode(int data) {
		this->data = data;
		this->next = NULL;
	}
};
*/

ListNode* getIntersectionNode(ListNode *A, ListNode *B) {
    // add your logic here
	  ListNode *ptrA = A;
    ListNode *ptrB = B;

    while (ptrA != ptrB) {
        ptrA = ptrA == nullptr ? B : ptrA->next;
        ptrB = ptrB == nullptr ? A : ptrB->next;
    }

    return ptrA;
}