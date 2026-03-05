/**
 * @file        src/hooks.cpp
 *
 * @brief       Function hooks and replacements for guest module runtime.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */

#include "generated/Fable2_init.h"
#include <rex/ppc.h>

namespace {

// GetFileSectorInfo replacement — the game queries disc sector positions to
// optimize read ordering. return 0 (no sector info).
ppc_u32_result_t GetFileSectorInfo_entry(ppc_u32_t handle) {
    return 0;
}

}  // namespace

PPC_HOOK(sub_82CC7BB8, GetFileSectorInfo_entry)

PPC_STUB(__imp__XamShowGamerCardUIForXUID);
PPC_STUB(__imp__XamShowAchievementsUI);
PPC_STUB(__imp__XamShowMarketplaceUI);
PPC_STUB(__imp__IoInvalidDeviceRequest);
PPC_STUB(__imp__ObReferenceObject);
PPC_STUB(__imp__IoDeleteDevice);
PPC_STUB(__imp__IoCompleteRequest);
PPC_STUB(__imp__RtlUpcaseUnicodeChar);
PPC_STUB(__imp__ObIsTitleObject);
PPC_STUB(__imp__IoCheckShareAccess);
PPC_STUB(__imp__IoRemoveShareAccess);
PPC_STUB(__imp__XNetLogonGetTitleID);
PPC_STUB(__imp__NetDll_WSAGetOverlappedResult);
PPC_STUB(__imp__NetDll_XNetRegisterKey);
PPC_STUB(__imp__NetDll_XNetUnregisterKey);
PPC_STUB(__imp__NetDll_XNetUnregisterInAddr);
PPC_STUB(__imp__NetDll_XNetConnect);
PPC_STUB(__imp__NetDll_XNetGetConnectStatus);
PPC_STUB(__imp__IoSetShareAccess);
PPC_STUB(__imp__XamUserGetMembershipTierFromXUID);
PPC_STUB(__imp__XamUserGetOnlineCountryFromXUID);
PPC_STUB(__imp__XamVoiceSubmitPacket);
