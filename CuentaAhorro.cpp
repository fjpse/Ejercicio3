#include "CuentaAhorro.h"
#include <cassert>

CuentaAhorro::CuentaAhorro(std::string titular, int saldo):
    Cuenta(titular, saldo)
{
    std::cout << "Ctor CuentaAhorro de " << m_titular << std::endl;
}

CuentaAhorro::~CuentaAhorro()
{
    std::cout << "Dtor CuentaAhorro de " << m_titular << std::endl;
}

std::string CuentaAhorro::nombre(void)
{
    return "Cuenta Ahorro";
}

int CuentaAhorro::ingresar(int cantidad)
{
    assert(cantidad > 0);

    if(cantidad > 100)
    {
        m_saldo += int(float(cantidad) * 1.1);
    }
    else
    {
        m_saldo += cantidad;
    }
    return cantidad;
}
