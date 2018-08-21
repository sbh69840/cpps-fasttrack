#include <stdio.h>
#include <math.h>
struct complex{
	float real;
	float imaginary;
};
struct inputs{
	float a;
	float b;
	float c;
};
struct real{
	float root1;
	float root2;
};
void input(struct inputs *i);
float compute(struct complex *c,struct real *r,struct inputs i);
void output(struct complex c,struct real r,float d);
void main(){
	struct inputs i;
	struct complex c;
	struct real r;
	float d;
	input(&i);
	d = compute(&c,&r,i);
	output(c,r,d);
}
void input(struct inputs *i){
	printf("Type the values of a,b,c");
	scanf("%f %f %f",&i->a,&i->b,&i->c);
}
float compute(struct complex *c,struct real *r,struct inputs i){
	float d;
	d = (i.b*i.b) -(4*i.a*i.c);
	if (d<0){
		c->real = -i.b/(2*i.a);
		c->imaginary = sqrt(-d)/(2*i.a);
	
	}
	else if (d==0){
		r->root1 = -i.b/(2*i.a);
		r->root2 = -i.b/(2*i.a);
	
	}
	else{
		r->root1 = -i.b+sqrt(d);
		r->root2 = -i.b-sqrt(d);
	}
	return d;
}
void output(struct complex c,struct real r,float d){
	if (d<0){
		printf("The roots are imaginary. %f + %fi and %f + %fi",c.real,c.imaginary,c.real,c.imaginary);
	}
	else if(d==0){
		printf("The roots are equal. %f and %f",r.root1,r.root2);
	}else{
		printf("The roots are distinct. %f and %f",r.root1,r.root2);
	}

}

		

