#pragma once

#include "instructions.h"
#include <string>

namespace fable2::ppc {

// Helper function to convert SPR to string
inline std::string SPRToString(SPR spr) {
    switch (spr) {
        case SPR::XER: return "XER";
        case SPR::LR: return "LR";
        case SPR::CTR: return "CTR";
        case SPR::DSISR: return "DSISR";
        case SPR::DAR: return "DAR";
        case SPR::DEC: return "DEC";
        case SPR::SDR1: return "SDR1";
        case SPR::SRR0: return "SRR0";
        case SPR::SRR1: return "SRR1";
        case SPR::SPRG0: return "SPRG0";
        case SPR::SPRG1: return "SPRG1";
        case SPR::SPRG2: return "SPRG2";
        case SPR::SPRG3: return "SPRG3";
        case SPR::EAR: return "EAR";
        case SPR::TBL: return "TBL";
        case SPR::TBU: return "TBU";
        case SPR::PVR: return "PVR";
        case SPR::IBAT0U: return "IBAT0U";
        case SPR::IBAT0L: return "IBAT0L";
        case SPR::IBAT1U: return "IBAT1U";
        case SPR::IBAT1L: return "IBAT1L";
        case SPR::IBAT2U: return "IBAT2U";
        case SPR::IBAT2L: return "IBAT2L";
        case SPR::IBAT3U: return "IBAT3U";
        case SPR::IBAT3L: return "IBAT3L";
        case SPR::DBAT0U: return "DBAT0U";
        case SPR::DBAT0L: return "DBAT0L";
        case SPR::DBAT1U: return "DBAT1U";
        case SPR::DBAT1L: return "DBAT1L";
        case SPR::DBAT2U: return "DBAT2U";
        case SPR::DBAT2L: return "DBAT2L";
        case SPR::DBAT3U: return "DBAT3U";
        case SPR::DBAT3L: return "DBAT3L";
        default: return "Unknown";
    }
}

} // namespace fable2::ppc 