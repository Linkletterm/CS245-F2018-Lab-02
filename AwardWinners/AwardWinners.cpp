/********************************************************************
 * AwardWinners.cpp :  
 * Program that randomly picks a movie for an award; makes use of 
 * string, vector, and random from the Standard Library.
 *
 * NOTE: This version of the program has numerous errors. 
 * Your job is to...
 *	1.) fix all bugs
 *	2.) commit your changes to your local Git repository
 *	3.) push your changes to your remote Git respository
 *	4.) submit a Pull Request to your instructor's Git project
 *
 ********************************************************************
 */

// Preprocessor directives
#include "pch.h"
#include <random>
#include <vector>
#include <iostream>
#include <string>
using std::string;
using std::vector;

int main()
{
	// Create a vector of strings; add items using a list initializer
	vector<string> movies = { "John Carter", "Operation Dumbo Drop", "C-SPAN: The Movie", "Jack & Jill" };

	// Add a 5th string to the end of the vector
	movies.push_back("Titanic 2: The Quickening");
	


	// Announce the nominees
	std::cout << "And the nominees for Best Picture (cough) are..." << std::endl;

	// Loop through the vector; print each vector element to console.
	for (auto &i : movies)
		std::cout << i << " ";
	std::cout << std::endl;

	// Set up a random number generator seeder
	std::random_device seed;

	// Create a random integer generator; chooses random ints from 1 to 5 (inclusive)
	std::uniform_int_distribution<int> rand_dist(0, 4);

	// Get the next random integer
	int pick_a_number = rand_dist(seed);

	// Get the item from the vector at the randomly-selected index
	string winner = movies[pick_a_number];

	// Convert each charcter of the 'winner' string to UPPERCASE
	for (auto &c : winner)
		c = toupper(c);

	// Print the UPPERCASE string
	std::cout << "And the winner is..." << winner << std::endl;

	return 0;
}

