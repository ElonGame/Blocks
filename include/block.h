#ifndef BLOCK_H
#define BLOCK_H

#include <stdint.h>
#include "custommath.h"
#include "directions.h"

enum block_id {AIR = 0, STONE, DIRT, GRASS, SAND, BEDROCK, WATER, ERR};

typedef enum block_id blockid_t;

typedef struct {
	blockid_t id;
	union {
		void *pointer;
		uint8_t number;
	} metadata;
} block_t;

typedef struct {
	uint8_t issolid;
	vec3_t color;
	char *name;
} blockdata_t;

int block_issolid(block_t b);
vec3_t block_getcolor(blockid_t);


#endif //BLOCK_H
