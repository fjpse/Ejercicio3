#include "Cuenta.h"
#include <iostream>
#include <stdexcept>
#include <cassert>
#include <algorithm>

Cuenta::Cuenta(std::string titular, int saldo):
    m_titular(titular),
    m_saldo(saldo)
{
    std::cout << "Ctor Cuenta de " << m_titular << std::endl;
}

Cuenta::~Cuenta()
{
    std::cout << "Dtor Cuenta de " << m_titular << std::endl;
}

int Cuenta::consultar(void)
{
    return m_saldo;
}

int Cuenta::ingresar(int cantidad)
{
    assert(cantidad > 0);

    m_saldo += cantidad;
    return cantidad;
}

int Cuenta::retirar(int cantidad)
{
    assert(cantidad > 0);

    if(m_saldo > 0)
    {
        cantidad = std::min(cantidad, m_saldo);
        m_saldo -= cantidad;
        return cantidad;
    }
    else
    {
        return 0;
    }
}

int Cuenta::transferir(int cantidad, Cuenta &cuenta)
{
    return cuenta.ingresar(retirar(cantidad));
}

std::string Cuenta::nombre(void)
{
    return "Cuenta";
}

std::ostream& operator<<(std::ostream& os, Cuenta& cuenta)
{
    os  << cuenta.nombre()
        << " - Titular: "
        << cuenta.m_titular
        << " - Saldo: "
        << cuenta.m_saldo
        << std::endl;

    return os;
}
