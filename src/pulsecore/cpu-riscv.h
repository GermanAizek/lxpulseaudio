#ifndef foocpuriscvhfoo
#define foocpuriscvhfoo

/***
  This file is part of PulseAudio.

  Copyright (c) 2024 Institue of Software Chinese Academy of Sciences (ISCAS).

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation; either version 2.1 of the License,
  or (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with PulseAudio; if not, see <http://www.gnu.org/licenses/>.
***/

#include <stdint.h>
#include <pulsecore/macro.h>

#ifndef PACKAGE
#error "Please include config.h before including this file!"
#endif

typedef enum pa_cpu_riscv_flag {
    PA_CPU_RISCV_V      = (1 << 0),
} pa_cpu_riscv_flag_t;

void pa_cpu_get_riscv_flags(pa_cpu_riscv_flag_t *flags);
bool pa_cpu_init_riscv (pa_cpu_riscv_flag_t *flags);

#ifdef HAVE_RVV
void pa_convert_func_init_rvv(pa_cpu_riscv_flag_t flags);
#endif

#endif /* foocpuxriscvhfoo */
