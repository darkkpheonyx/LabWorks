// code for Non restoring algorithm
#include <iostream>

int a[5] = {0, 0, 0, 0, 0}, q[4], b[5], b2c[5];

void comp();
void nonresdiv();
void shiftleft();
void a_minus_b();
void a_plus_b();

int main()
{
    std::cout << "Enter dividend in binary form(4 bit): ";
    for (int i = 0; i < 4; i++)
    {
        std::cin >> q[i];
    }

    std::cout << "Enter divisor in binary form (5 bits): ";
    for (int i = 0; i < 5; i++)
    {
        std::cin >> b[i];
    }

    comp();

    std::cout << "\n\t[A]\t[M]\n";
    for (int i = 0; i < 4; i++)
    {
        nonresdiv();
        std::cout << "\t";

        for (int j = 0; j < 5; j++)
        {
            std::cout << a[j];
        }

        std::cout << "\t";
        for (int k = 0; k < 4; k++)
        {
            std::cout << q[k];
        }
        std::cout << std::endl;
    }

    if (a[0] == 1)
    {
        a_plus_b();
    }
    std::cout << "\t";

    for (int j = 0; j < 5; j++)
    {
        std::cout << a[j];
    }
    std::cout << "\t";

    for (int k = 0; k < 4; k++)
    {
        std::cout << q[k];
    }
    std::cout << std::endl;

    std::cout << "\n\tThe Quotient is:\t";
    for (int k = 0; k < 4; k++)
    {
        std::cout << q[k];
    }

    std::cout << "\n\tThe Remainder is:\t";
    for (int j = 0; j < 5; j++)
    {
        std::cout << a[j];
    }

    return 0;
}

void comp()
{
    int i = 4;
    do
    {
        b2c[i] = b[i];
        i--;
    } while (b[i + 1] != 1);
    while (i >= 0)
    {
        b2c[i] = (b[i] + 1) % 2;
        i--;
    }
    std::cout << "\n\tB's complement:";
    for (i = 0; i < 5; i++)
        std::cout << b2c[i];
    std::cout << std::endl;
}

void nonresdiv()
{
    shiftleft();
    if (a[0] == 0)
        a_minus_b();
    else
        a_plus_b();
    q[3] = (a[0] + 1) % 2;
}

void shiftleft()
{
    int i;
    for (i = 0; i < 4; i++)
        a[i] = a[i + 1];
    a[4] = q[0];
    for (i = 0; i < 3; i++)
        q[i] = q[i + 1];
}

void a_minus_b()
{
    int i, carry = 0, sum = 0;
    for (i = 4; i >= 0; i--)
    {
        sum = (a[i] + b2c[i] + carry);
        a[i] = sum % 2;
        carry = sum / 2;
    }
}

void a_plus_b()
{
    int i, carry = 0, sum = 0;
    for (i = 4; i >= 0; i--)
    {
        sum = (a[i] + b[i] + carry);
        a[i] = sum % 2;
        carry = sum / 2;
    }
}
