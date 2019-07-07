/*
 * Copyright (c) 2017 Contributors as noted in the AUTHORS file
 *
 * This file is part of Solo5, a sandboxed execution environment.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose with or without fee is hereby granted, provided
 * that the above copyright notice and this permission notice appear
 * in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT,
 * NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include "../hvt/bindings.h"

solo5_result_t solo5_block_acquire(const char *name __attribute__((unused)),
        solo5_handle_t *handle __attribute__((unused)),
        struct solo5_block_info *info __attribute__((unused)))
{
    return SOLO5_R_EUNSPEC;
}

solo5_result_t solo5_block_write(solo5_handle_t handle __attribute__((unused)),
        solo5_off_t offset __attribute__((unused)),
        const uint8_t *buf __attribute__((unused)),
        size_t size __attribute__((unused)))
{
    return SOLO5_R_EUNSPEC;
}

solo5_result_t solo5_block_read(solo5_handle_t handle __attribute__((unused)),
        solo5_off_t offset __attribute__((unused)),
        uint8_t *buf __attribute__((unused)),
        size_t size __attribute__((unused)))
{
    return SOLO5_R_EUNSPEC;
}

void block_init(struct hvt_boot_info *bi __attribute__((unused)))
{
}
