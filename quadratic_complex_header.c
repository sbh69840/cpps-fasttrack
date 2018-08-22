#include <stdio.h>
#include <math.h>
#include <complex.h>
struct roots{
    float real1;
    float real2;
    float complex imaginary1;
    float complex imaginary2;
};
struct quadratic{
    float a;
    float b;
    float c;
};
void input(struct quadratic *q);
void compute(struct roots *r,struct quadratic q,float *d);
void output(struct roots r,float d);
void main(){
    struct roots r;
    struct quadratic q;
    float d;
    input(&q);
    compute(&r,q,&d);
    output(r,d);
}
void input(struct quadratic *q){
    printf("Type the three coefficients of quadratic equation.");
    scanf("%f %f %f",&q->a,&q->b,&q->c);
}
/*
 * compute function recieves three parameters:
 * input parameters q : coefficients a,b,c
 * Outut parameters r,d : roots of the quadratic equation and value of d
 * Return Parameter : Value of Discrminant
 * Note: ( return value >= 0)  If roots are not complex imaginary parts of r is zero
 */
void compute(struct roots *r,struct quadratic q,float *d){
    *d=(q.b*q.b)-(4*q.a*q.c);
    if (*d<0){
        r->real1=(-q.b)/(2*q.a);
        r->real2=r->real1;
        float complex c = ((*d)/(4*q.a*q.a));
        r->imaginary1=csqrt(c);
        r->imaginary2=r->imaginary1;
    }
    else if (*d==0){
        r->real1=(-q.b)/(2*q.a);
        r->real2=r->real1;
        r->imaginary1=0*I;
        r->imaginary2=r->imaginary1;
    }
    else{
        r->real1=(-q.b+sqrtf(*d))/(2*q.a);
        r->real2=(-q.b-sqrtf(*d))/(2*q.a);
        r->imaginary1=0*I;
        r->imaginary2=r->imaginary1;
    }
}
void output(struct roots r,float d){
    if (d<0){
        printf("The roots are complex %f + %fi and %f - %fi",r.real1,cimag(r.imaginary1),r.real2,cimag(r.imaginary2));
    }
    else if (d==0){
        printf("The roots are real and equal %f and %f",r.real1,r.real2);
    }
    else{
        printf("The roots are real and distinct %f and %f",r.real1,r.real2);
    }
}
