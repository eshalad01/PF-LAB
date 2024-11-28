#include <stdio.h>
#include <string.h>
struct Invoice {
    char partnumber[20];
    char partdescription[50];
    int quantity;
    float priceperitem;
};
int main() {
    struct Invoice invoice;
    strcpy(invoice.partnumber, "099xyz");
    strcpy(invoice.partdescription, "Fiber Cables");
    invoice.quantity = 3;
    invoice.priceperitem = 210.5;

    if (invoice.quantity < 0) {
        invoice.quantity = 0;
    }
    if (invoice.priceperitem < 0) {
        invoice.priceperitem = 0;
    }
    float invoiceamount = invoice.quantity * invoice.priceperitem;
    printf("Invoice Details:\n");
    printf("Part Number: %s\n", invoice.partnumber);
    printf("Part Description: %s\n", invoice.partdescription);
    printf("Quantity: %d\n", invoice.quantity);
    printf("Price per Item: $%.2f\n", invoice.priceperitem);
    printf("Invoice Amount: $%.2f\n", invoiceamount);

    return 0;
}
