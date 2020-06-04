#ifndef CUENTA_H
#define CUENTA_H

#include <string>
#include <iostream>

class Cuenta
{
	public:
		Cuenta(std::string titular, int saldo = 0);
        virtual ~Cuenta();
		
        virtual std::string nombre(void);

		int consultar(void);
		virtual int ingresar(int cantidad);
		virtual int retirar(int cantidad);
		int transferir(int cantidad, Cuenta &cuenta);
 		
	protected:
	    int m_saldo;
	    std::string m_titular;

    friend std::ostream& operator<<(std::ostream& os, Cuenta& cuenta);
};

#endif
