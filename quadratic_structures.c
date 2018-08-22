#include <stdio.h>
#include <math.h>
struct root{
	float real;
	float imaginary;
};
struct qequation{
	float a;
	float b;
	float c;
};
void input(struct qequation *e);
void find_roots(struct root *r1,struct root *r2,struct qequation e,float *d);
void output(struct root r1,struct root r2,float d,struct qequation e);
void main(){
	struct qequation e;
	struct root r1;
	struct root r2;
	float d;
	input(&e);
	find_roots(&r1,&r2,e,&d);
	output(r1,r2,d,e);
}
void input(struct qequation *e){
	printf("Type the values of a,b,c of quadratic equation.");
	scanf("%f %f %f",&e->a,&e->b,&e->c);
}
/*
 * compute function recieves three parameters:
 * input parameters i : coefficients a,b,c
 * Outut parameters r1,c2 : roots of the quadratic equation if the root
 * Return Parameter : Value of Discrminant
 * Note: ( return value >= 0)  If roots are not complex imaginary part of c is zero
 */
void find_roots(struct root *r1,struct root *r2,struct qequation e,float *d){
	
	*d=(e.b*e.b) -(4*e.a*e.c);
	if (*d<0){
		r1->real = -e.b/(2*e.a);
		r1->imaginary = sqrt(-*d)/(2*e.a);
	
	}
	else if (*d==0){
		r2->real = -e.b/(2*e.a);
		r2->imaginary = 0;
	
	}
	else{
		r2->real = -e.b/(2*e.a);
		r2->imaginary = sqrt(*d)/(2*e.a);
	}
}
void output(struct root r1,struct root r2,float d,struct qequation e){
	if (d<0){
		printf("The roots are imaginary. %f + %fi and %f + %fi",r1.real,r1.imaginary,r1.real,r1.imaginary);
	}
	else if(d==0){
		printf("The roots are equal. %f and %f",r2.real,r2.real);
	}else{
		printf("The roots are distinct. %f and %f", r2.real+r2.imaginary,r2.real-r2.imaginary);
	}

}

