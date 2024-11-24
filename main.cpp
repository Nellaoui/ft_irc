#include "Server.hpp"
#include "Channel.hpp"
#include "User.hpp"

int main(int ac, char **av)
{
	if (ac != 3)
	{
		cerr << "Must be run as follows: : ./ircserv <port> <password>" << endl;
		return 1;
	}
	try
	{
		string  port = av[1];
		string password = av[2];
		Server srv;
		srv.start(av[1], av[2]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
}