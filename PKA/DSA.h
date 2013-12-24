/*
Input data should already be formatted and ready for hashing
*/

#include <vector>
#include <iostream>

#include <gmpxx.h>

#include "../common/cryptomath.h"
#include "../common/includes.h"
#include "../Hashes/Hashes.h"
#include "../RNG/RNG.h"
#include "../pgptime.h"
#include "../usehash.h"

#ifndef __DSA__
#define __DSA__
// Generate new set of parameters
std::vector <mpz_class> new_DSA_public(const uint32_t & L = 1024, const uint32_t & N = 160);

// Generate new keypair with parameters
std::vector <mpz_class> DSA_keygen(std::vector <mpz_class> & pub);

// Sign hash of data
std::vector <mpz_class> DSA_sign(std::string & data, const std::vector <mpz_class> & pri, const std::vector <mpz_class> & pub);

// Verify signature on hash
bool DSA_verify(std::string & data, const std::vector <mpz_class> & sig, const std::vector <mpz_class> & pub);
#endif
