#ifndef JADE_STREAM_SALSA20_SALSA2012_AMD64_AVX_API_H
#define JADE_STREAM_SALSA20_SALSA2012_AMD64_AVX_API_H

#define JADE_STREAM_SALSA20_SALSA2012_AMD64_AVX_KEYBYTES 32
#define JADE_STREAM_SALSA20_SALSA2012_AMD64_AVX_NONCEBYTES 8
#define JADE_STREAM_SALSA20_SALSA2012_AMD64_AVX_ALGNAME "Salsa20/12"

#include <stdint.h>

int jade_stream_salsa20_salsa2012_amd64_avx_xor(
 uint8_t *ciphertext,
 uint8_t *plaintext,
 uint64_t length,
 uint8_t *nonce, /*NONCEBYTES*/
 uint8_t *key /*KEYBYTES*/
);

int jade_stream_salsa20_salsa2012_amd64_avx(
 uint8_t *stream,
 uint64_t length,
 uint8_t *nonce, /*NONCEBYTES*/
 uint8_t *key /*KEYBYTES*/
);


#endif
