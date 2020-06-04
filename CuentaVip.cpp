#include "CuentaVip.h"
#include <cassert>

CuentaVip::CuentaVip(std::string titular, int saldo):
    Cuenta(titular, saldo)
{
    std::cout << "Ctor CuentaVip de " << m_titular << std::endl;
}

CuentaVip::~CuentaVip()
{
    std::cout << "Dtor CuentaVip de " << m_titular << std::endl;
}

std::string CuentaVip::nombre(void)
{
    return "Cuetan Vip";
}

int CuentaVip::retirar(int cantidad)
{
    assert(cantidad > 0);

    m_saldo -= cantidad;
    return cantidad;
}
