#ifndef CUENTAVIP_H
#define CUENTAVIP_H

#include "Cuenta.h"

class CuentaVip : public Cuenta
{
	public:
		CuentaVip(std::string titular, int saldo = 0);
        ~CuentaVip();

		std::string nombre(void);
        int retirar(int cantidad);
};

#endif
