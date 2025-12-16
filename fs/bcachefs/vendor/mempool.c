// SPDX-License-Identifier: GPL-2.0
#ifndef NO_BCACHEFS_FS

#include <linux/mempool.h>
#include <linux/slab.h>
#include <linux/types.h>

#include "vendor/mempool.h"

void *bch2_mempool_kvmalloc(gfp_t gfp_mask, void *pool_data)
{
	size_t size = (size_t)pool_data;
	return kvmalloc(size, gfp_mask);
}

void bch2_mempool_kvfree(void *element, void *pool_data)
{
	kvfree(element);
}

#endif /* NO_BCACHEFS_FS */
