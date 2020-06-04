#include "CuentaVip.h"
#include <iostream>

CuentaVip::CuentaVip(std::string titular, long saldo):
    Cuenta(titular, saldo)
{
}

void CuentaVip::mostrar(void)
{
    std::cout << "Cuenta VIP de " << m_titular <<
                 " con " << m_saldo <<
                 " euros" << std::endl;
}

