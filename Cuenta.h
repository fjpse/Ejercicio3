#ifndef CUENTA_H
#define CUENTA_H

#include <string>

class Cuenta
{
	public:
		Cuenta(std::string titular, long saldo = 0);
		
		long consultar(void);
		long ingresar(long saldo);
		virtual long retirar(long saldo);
		virtual long transferir(long saldo, Cuenta &cuenta);
		virtual void mostrar(void);
		
	protected:
	    long m_saldo;
	    std::string m_titular;
};

#endif

