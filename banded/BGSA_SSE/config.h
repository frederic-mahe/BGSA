#ifndef _CONFIG_H_
#define _CONFIG_H_

//#define READ_BUCKET_SIZE 10240
//#define READ_BUCKET_SIZE 22428800
#define READ_BUCKET_SIZE 114857600
//#define READ_BUCKET_SIZE 157286400
//#define READ_BUCKET_SIZE 54857600
//#define READ_BUCKET_SIZE 57671680


#define REF_BUCKET_COUNT 100

//#define BUFFER_SIZE 104857600
//#define BUFFER_SIZE 40960

#define CHAR_NUM 5

#define common_write_t int8_t


#define SSE_SIZE 128
#define sse_write_t common_write_t
#define sse_data_t __m128i

#define MAX_ERROR 127
#define sse_cmp_result_t uint16_t
#define sse_result_mask 0xffff
#define batch_size 16

/*
// for 64 bit
#define SSE_V_NUM 2
#define SSE_WORD_SIZE 64
#define sse_read_t uint64_t
#define sse_result_t int64_t
*/

#define SSE_V_NUM 4
#define SSE_WORD_SIZE 32
#define sse_read_t uint32_t
#define sse_result_t int32_t
#endif
