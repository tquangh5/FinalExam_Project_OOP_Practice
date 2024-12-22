#include "DesigneStrategy.h"

void DesigneStrategy::SetPaymentMethod(Payment* method)
{
    paymentMethod = method;
}
void DesigneStrategy::ExecutePayment()
{
    if (paymentMethod)
    {
        paymentMethod->PaymentMethod();
    }
    else
    {
        cout << "No payment method set.\n";
    }
}