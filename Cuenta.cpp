#include "Cuenta.h"
#include <iostream>
#include <stdexcept>

Cuenta::Cuenta(std::string titular, long saldo) :
    m_titular(titular),
    m_saldo(saldo)
{
}

long Cuenta::consultar(void)
{
    return m_saldo;
}

long Cuenta::ingresar(long cantidad)
{
    if(cantidad < 0)
    {
        throw std::invalid_argument("cantidad");
    }
    
    m_saldo += cantidad;
    return m_saldo;
}

long Cuenta::retirar(long cantidad)
{
    if(cantidad > m_saldo)
    {
        throw std::invalid_argument("cantidad");
    }
    
    m_saldo -= cantidad;
    return m_saldo;
}

long Cuenta::transferir(long cantidad, Cuenta &cuenta)
{
    if(cantidad > m_saldo)
    {
        throw std::invalid_argument("cantidad");
    }
    
    m_saldo -= cantidad;
    cuenta.ingresar(cantidad);
    return m_saldo;
}

void Cuenta::mostrar(void)
{
    std::cout << "Cuenta de " << m_titular <<
                 " con " << m_saldo <<
                 " euros" << std::endl;
}

