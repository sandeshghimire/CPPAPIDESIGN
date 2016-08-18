#include <iostream>
#include <memory>
#include "AirlineTicket.h"

using namespace std;

int main()
{
	AirlineTicket myTicket;  // Stack-based AirlineTicket
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);

	int cost = myTicket.calculatePriceInDollars();
	cout << "This ticket will cost $" << cost << endl;

#ifdef  CPP_14
    // Heap-based AirlineTicket with smart pointer
	auto myTicket2 = make_unique<AirlineTicket>();
	myTicket2->setPassengerName("Laudimore M. Hallidue");
	myTicket2->setNumberOfMiles(2000);
	myTicket2->setHasEliteSuperRewardsStatus(true);
	int cost2 = myTicket2->calculatePriceInDollars();
	cout << "This other ticket will cost $" << cost2 << endl;
#endif /*CPP_14*/


	// No need to delete myTicket2, happens automatically
    // Heap-based AirlineTicket without smart pointer (not recommended)
	AirlineTicket* myTicket3 = new AirlineTicket();
	delete myTicket3;


	return 0;
} 
