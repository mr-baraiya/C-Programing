#include <math.h>  // Required for pow()

int getDecimalValue(struct ListNode* head) {
    // Step 1: Calculate the length of the list
    int length = 0;
    struct ListNode* temp = head;
    while (temp->next != NULL) {
        length++;
        temp = temp->next;
    }

    // Step 2: Calculate decimal value
    int result = 0;
    temp = head;
    while (temp != NULL) {
        result += temp->val * pow(2, length);
        length--;
        temp = temp->next;
    }

    return result;
}
