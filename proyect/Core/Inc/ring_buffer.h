/*
 * ring_buffer.h
 *
 *  Created on: Oct 23, 2023
 *      Author: USUARIO
 */

#ifndef INC_RING_BUFFER_H_
#define INC_RING_BUFFER_H_

#include <stdint.h>

typedef struct{
	uint8_t *buffer;  /* Pointer to memory location "*"apuntador-direccion de memoria */
	uint16_t head;     /* to write new data, Tamaño de la cabeza, hasta cuantos bits se van a contar */
	uint16_t tail;     /*To read old data*/

	uint16_t capacity;
	uint16_t is_full; //para saber si el buffer esta lleno//
} ring_buffer_t;

void ring_buffer_init(ring_buffer_t *ring_buffer, uint8_t * buffer, uint16_t capacity);

uint8_t ring_buffer_put(ring_buffer_t *ring_buffer, uint8_t data);  /* funcion para guardar datos en el buffer*/

uint8_t ring_buffer_get(ring_buffer_t *ring_buffer, uint8_t*data);

uint16_t ring_buffer_size(ring_buffer_t*ringbuffer);

uint8_t ring_buffer_is_empty(ring_buffer_t *ring_buffer);

uint8_t ring_buffer_is_full(ring_buffer_t *ring_buffer);

void ring_buffer_reset(ring_buffer_t *ring_buffer);







#endif /* INC_RING_BUFFER_H_ */
