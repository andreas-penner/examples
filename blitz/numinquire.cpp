// From http://www.oonumerics.org/blitz/examples/Blitz++/numinquire.cpp
//
// Blitz++ <numinquire.h> example, illustrating how to
// get at properties of numeric types.

#include <iostream>
#include <blitz/numinquire.h>

BZ_USING_NAMESPACE(blitz);

int main()
{
    double z = 1.0;

    cout << "Some inquiries into the nature of double:" << endl
         << "digits(z) = " << digits(z) << endl
         << "epsilon(z) = " << epsilon(z) << endl
         << "huge(z) = " << huge(z) << endl
         << "tiny(z) = " << tiny(z) << endl
         << "max_exponent(z) = " << max_exponent(z) << endl
         << "min_exponent(z) = " << min_exponent(z) << endl
         << "max_exponent10(z) = " << max_exponent10(z) << endl
         << "min_exponent10(z) = " << min_exponent10(z) << endl
         << "radix(z) = " << radix(z) << endl;
    
    Range r = range(z);
    cout << "range(z) = [ " << r.first() << ", " << r.last() << " ]" << endl;

    cout << endl
         << "More obscure properties:" << endl
         << "is_signed(z) = " << is_signed(z) << endl
         << "is_integer(z) = " << is_integer(z) << endl
         << "is_exact(z) = " << is_exact(z) << endl
         << "round_error(z) = " << round_error(z) << endl
         << "has_infinity(z) = " << has_infinity(z) << endl
         << "has_quiet_NaN(z) = " << has_quiet_NaN(z) << endl
         << "has_signaling_NaN(z) = " << has_signaling_NaN(z) << endl
         << "has_denorm(z) = " << has_denorm(z) << endl
         << "has_denorm_loss(z) = " << has_denorm_loss(z) << endl
         << "infinity(z) = " << infinity(z) << endl
         << "quiet_NaN(z) = " << quiet_NaN(z) << endl
         << "signaling_NaN(z) = " << signaling_NaN(z) << endl
         << "denorm_min(z) = " << denorm_min(z) << endl
         << "is_iec559(z) = " << is_iec559(z) << endl
         << "is_bounded(z) = " << is_bounded(z) << endl
         << "is_modulo(z) = " << is_modulo(z) << endl
         << "traps(z) = " << traps(z) << endl
         << "tinyness_before(z) = " << tinyness_before(z) << endl;

    return 0;
}
/* Output:

    Some inquiries into the nature of double:
    digits(z) = 53
    epsilon(z) = 2.22045e-16
    huge(z) = 1.79769e+308
    tiny(z) = 2.22507e-308
    max_exponent(z) = 1024
    min_exponent(z) = -1021
    max_exponent10(z) = 308
    min_exponent10(z) = -307
    radix(z) = 2
    range(z) = [ -307, 308 ]

    More obscure properties:
    is_signed(z) = 1
    is_integer(z) = 0
    is_exact(z) = 0
    round_error(z) = 0.5
    has_infinity(z) = 1
    has_quiet_NaN(z) = 1
    has_signaling_NaN(z) = 1
    has_denorm(z) = 1
    has_denorm_loss(z) = 0
    infinity(z) = inf
    quiet_NaN(z) = nan
    signaling_NaN(z) = nan
    denorm_min(z) = 4.94066e-324
    is_iec559(z) = 1
    is_bounded(z) = 1
    is_modulo(z) = 0
    traps(z) = 0
    tinyness_before(z) = 0
*/
