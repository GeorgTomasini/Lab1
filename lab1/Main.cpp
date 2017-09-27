#include <WinSock2.h>

#include "Net.cpp"
#include "Net.h"
#include <iostream>
#include "Main.h"
#define ip "127.0.0.1"
#define portA 28000
#define portB 28001
int main(void)
{
	Net net;
	net.initialise();
	string input;
	cin >> input;
	if (input == "a")
	{
		
		net.setupUDP(portA, ip);
	}
	else if (input == "b")
	{
		

		net.setupUDP(portB, ip);
	}
	else {
		cout << "wrong input";
	}

	return 0;
}

int playerA()
{

	return 0;
}
int playerB()
{

	return 0;
}


