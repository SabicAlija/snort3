//--------------------------------------------------------------------------
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License Version 2 as published
// by the Free Software Foundation.  You may not use, modify or distribute
// this program under any other version of the GNU General Public License.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//--------------------------------------------------------------------------
// knxnetip_module_enum.h author Alija Sabic <sabic@technikum-wien.at>

#ifndef KNXNETIP_MODULE_ENUM_H
#define KNXNETIP_MODULE_ENUM_H

namespace KNXnetIPModuleEnums
{

// Peg counts
// This enum must remain synchronized with KNXnetIPModule::peg_names[] in knxnetip_tables.cc
enum PEG_COUNT { PEG_COUNT_TOTAL_FRAMES, PEG_COUNT_MAX };


}



#endif /* KNXNETIP_MODULE_ENUM_H */
