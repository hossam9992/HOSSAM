/*
 * bitmath.h
 *
 * Created: 4/3/2020 4:55:46 PM
 *  Author: MAZDA
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_
#define SET_BIT(reg, pin) reg|=(1<<pin)
#define CLR_BIT(reg, pin) reg&=~(1<<pin)
#define TOGGLE_BIT(reg, pin) reg^=(1<<pin)

// Here I'm Interested in only one bit, I don't  care about the whole register
// If I made the other approach I will get numbers like 8, 128,....etc.

#define GET_BIT(reg, pin) ((reg>>pin)&1)




#endif /* BITMATH_H_ */