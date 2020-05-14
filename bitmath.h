/*
 * bitmath.h
 *
 * Created: 5/14/2020 5:25:07 PM
 *  Author: MAZDA
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_



#define CLEAR_BIT(var,bit)   var&=~(1<<bit)
#define SET_BIT(var,bit)     var|=(1<<bit)

#define GET_BIT(var,bit)     ((var>>bit)&1)
#define TOGGLE(var,bit)      var^=(1<<bit)







#endif /* BITMATH_H_ */