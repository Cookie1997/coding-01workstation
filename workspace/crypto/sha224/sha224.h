
#ifndef __SHA224_H__
#define __SHA224_H__

#include <stdint.h>

#define SHA224_DIGEST_LEN 28         	// SHA224 outputs a 28 byte digest

typedef struct _sha224_ctx_t {
	uint32_t 	total[2];          		/*!< The number of Bytes processed.  */
    uint32_t 	state[8];          		/*!< The intermediate digest state.  */
    uint8_t 	buffer[64];   			/*!< The data block being processed. */
    int32_t		is_224;                 /*!< Determines which function to use:
                                     	     0: Use SHA-256, or 1: Use SHA-224. */
} sha224_ctx_t;

void crypto_sha224_init(sha224_ctx_t *ctx);
void crypto_sha224_update(sha224_ctx_t *ctx, const uint8_t *data, uint32_t len);
void crypto_sha224_final(sha224_ctx_t *ctx, uint8_t *digest);

#endif   // __SHA224_H__
