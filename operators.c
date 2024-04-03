// Codetantra uniray L11
// 
/*
%[flags][field width][precision][modifier]
%f, %e, %g == float
%hd = short int
%ld = long int
%d = decimal integer
%lf = double
%Lf = Long float(Long Double)
%c = char
%zu = size of       : used as ("%zu",sizeof(float/char/text/etc.))
%o  = octal integer
%x  = hex integer
%u = unsigned decimal integer
%h = short interger value
%c = single character
%s = string


TERNARY OPERATOR =================(?:)
Condition? expression1:expression2;
int marks = 75, pass_marks = 50;
(marks>pass_marks)? printf("Passed"): printf("Failed");

Sizeof operator ==================()
printing: %lu or %u
finding: sizeof('data type')


================ Defining preprocessor
#define PI 3.14
#define MAX(a,b) ((a) > (b)? (a) : (b))
#define SWAP(a, b, temp) (temp = a, a = b, b = temp)
#define CONCAT(X,Y) X##Y       //Concat means concat(20,13)= 2013

READ/WRITE: single character                getchar(), putchar()
formatted                                   scanf(), printf()
string                                      gets(), puts()

#SCANNING DATES =============(YYYY.MM.DD);
scanf("%d.%d.%d", &year, &month, &date);
>>> 1982.7.18

#SCANF==================
scanf("%d,%d",&a,&b);    // here , is used so that while inputting data, the entered numbers should be seperetad by , not by space. then only it is used 

#SCANF ====================
scanf("$%f %f%%", &amount, &interest);
>>> 



#SCANNING data types with limits ===============
scanf("%3d %5f %c", %a, %b, %c);
// Read a 3 digit int value, 5 digits float value and a character using scanf()
printf("Given data: %d, %0.6f, %c\n",a, b, c);


#SCANF() IGNORING; ==================
scanf("%2d%*2d%2d%2d", &x,&y,&z);
>>>> input(252030)
>>>> x = 25, y = 30, z = undeclared: here 20 is skipped


*/