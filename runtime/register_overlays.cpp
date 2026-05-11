#include "../recomp/recomp_overlays.inl"
#include "librecomp/overlays.hpp"
#include "recomp.h"

extern "C" recomp_func_t func_80231630;
extern "C" recomp_func_t func_802C9B90;

void aero_register_overlays() {
    recomp::overlays::overlay_section_table_data_t sections{
        .code_sections     = section_table,
        .num_code_sections = ARRLEN(section_table),
        .total_num_sections = num_sections,
    };

    recomp::overlays::overlays_by_index_t overlays{
        .table = overlay_sections_by_index,
        .len   = ARRLEN(overlay_sections_by_index),
    };

    recomp::overlays::register_overlays(sections, overlays);

    recomp::overlays::add_loaded_function(0x80231630, func_80231630);
    recomp::overlays::add_loaded_function(0x802C9B90, func_802C9B90);
}
