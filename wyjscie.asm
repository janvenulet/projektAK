.text

.global wyjscie
.type wyjscie, @function


wyjscie:

mov $1, %eax
mov $13, %ebx
int $0x80 

ret
