#pragma once
#include <string>
using std::string;

namespace TD
{
	class TD_Boucles {

	public: 
		static int Addition(int, int);
		static int MultiplicationN(int, int);
		static int MultiplicationZ(int, int);
		static int Puissance(int, int);
		static int Fibonacci(int);
		static int Mirroir(int);
		static int Quotient(int, int);
		static int Factorielle(int);
		static int FactorielleCalculbre(int);
	};


	class TD_Strings {
	public: 
		static int Recherche(string);
		static int Appartient(string, char);
		static bool Palindrome(string);
		static bool EstPhrase(string);
		static int Sous_chaine(string, string);
		static int Sous_palindrome(string);
	};


	class TD_Imperative {
	public: 
		static bool test(int);
		static int sum_digits(int);
		static int product_digit(int);
		static int abs(int);
		static int loop(int);
		static int List_to_9(int);
	};
}