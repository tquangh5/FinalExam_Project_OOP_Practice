#pragma once
#include "Payment.h"

class DesigneStrategy
{
private:
    Payment* paymentMethod; 
public:
    void SetPaymentMethod(Payment*);
    void ExecutePayment();
};

