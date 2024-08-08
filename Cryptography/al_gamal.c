
#include <stdio.h>
#include <math.h>
#include <sodium.h>

// we need to generate random numbers for getting a large prime number, we will use this
// method because it is cryptographically secure
// from https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c/39475626#39475626
int get_random_number() {
    
    if (sodium_init() < 0) {
        /* panic! the library couldn't be initialized, it is not safe to use */
        return 1; 
    }
    /* myInt will be a random number between 0 and 1000 */
    return randombytes_uniform(1000);
}
// straightforward but not, if you like math, go through it, if not, gloss over

// source: https://www.geeksforgeeks.org/how-to-generate-large-prime-numbers-for-rsa-algorithm/
int get_large_prime() {
    // getting a large prime number can be hard, but geeks for geeks came in clutch and took me
    // through a clear algorithm to do it
    
    // first step: generate an n-bit odd number
    
    // Returns a random number 
    // between 2**(n-1)+1 and 2**n-1''' 
    long max;
    long min;
    
    max = 
    
}
// first we need to publish our key, since our users are definitely stupid, we will need to come up
// with a large prime ourselves and our primitive root. However, they must choose their secret integer.
int publish_public_key(int secret_integer) {
    
}
int al_gamal_encrypt(int prime, int beta, int alpha, ) {
    printf("Encrypted");
    return 5;
}


int main() {
    publish_public_key();
}
