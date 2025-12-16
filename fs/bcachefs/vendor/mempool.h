#ifndef _BCACHEFS_VENDOR_MEMPOOL_H
#define _BCACHEFS_VENDOR_MEMPOOL_H

void *bch2_mempool_kvmalloc(gfp_t gfp_mask, void *pool_data);
void bch2_mempool_kvfree(void *element, void *pool_data);

static inline int bch2_mempool_init_kvmalloc_pool(mempool_t *pool, int min_nr, size_t size)
{
	return mempool_init(pool, min_nr, bch2_mempool_kvmalloc, bch2_mempool_kvfree, (void *) size);
}

#endif /* _BCACHEFS_VENDOR_MEMPOOL_H */
