#include "persistent_data.h"
#include <cstring>

bool PersistentData::VerifySignature() const
{
    char sig[4] = EXT_SIGNATURE;

    return memcmp(Signature, sig, sizeof(Signature)) == 0;
}

bool PersistentData::VerifyVersion() const
{
    return Version <= EXT_VERSION;
}
