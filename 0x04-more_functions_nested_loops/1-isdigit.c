#include "holberton.h"

/**
 * _isdigit - this checks for numbers that are digits
 * @c: this is the ascii of the letter
 * Return: Returns 1 if upper and zero if its any other thing else
 */

int _isdigit(int c)
{
return (c >= 48 && c <= 57 ? 1 : 0);
}


Hi, Passi, nice to meet you, i've gone through the errors and currently reviewing my code,
So for the connection string, the name should be "GameDatabase" as specified in the config file, so with an adjustment it should be like this


So unfortunately unity does not permit any connection to an external database so i made use of a seperate server that connects with the Gamserver, so the Gamserver actually connects with the Server Manager which in turn connects to the database, so the errors came up because the Server did not start on the Servermanager,
 
But with this approach, i would create a console version of the server manager to suit the process of setting it up seamlessly and have everything start up at once.

Please bear with me as i work on these and get back to you. 

