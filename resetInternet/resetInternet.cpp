// resetInternet.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program is IT101 in that it takes the internet and turns it off then on again

#include "pch.h"
#include <iostream>
#include <stdlib.h> // needed for system
#include <windows.h> // needed to sleep


int main()
{	
	int i;
    std::cout << "Checking availability..." << std::endl; 
	if (system(NULL)) std::cout << ("Ok") << std::endl;
	else exit (EXIT_FAILURE);

	std::cout << std::endl;
	std::cout << "Releasing IP" << std::endl;
	//i = system("ipconfig /release Ethernet"); // example to stop only one connection where Ethernet is the name of the connection to be stopped
	i = system("ipconfig /release"); // general use, undos all connections

	std::cout << std::endl;
	std::cout << "Waiting to refresh Internet..." << std::endl;
	Sleep(15000);

	//i = system("ipconfig /renew Ethernet"); // example to start only one connection where Ethernet is the name of the connection to be started
	i = system("ipconfig /renew"); // renews all connections


	return 0;
}
