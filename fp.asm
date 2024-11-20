.begin
    ldr r0, =prompt1
    bl print_string
    bl read_number
    str r0, [num1]
    ldr r0, =prompt2
    bl print_string
    bl read_number
    str r0, [num2]
    ldr r0, =prompt3
    bl print_string
    bl read_number
    str r0, [num3]
    ldr r0, [num1]
    ldr r1, [num2]
    add r0, r0, r1
    ldr r1, [num3]
    add r0, r0, r1
    str r0, [sum]
    ldr r0, =result_msg
    bl print_string
    ldr r0, [num1]
    bl print_number
    ldr r0, [num2]
    bl print_number
    ldr r0, [num3]
    bl print_number
    ldr r0, [sum]
    bl print_number
    mov r0, #0
    mov r7, #1
    swi 0
print_string:
    mov r1, r0
    mov r2, #0
.loop:
    ldrb r3, [r1, r2]
    cmp r3, #0
    beq .done
    add r2, r2, #1
    b .loop
.done:
    mov r0, r1
    mov r1, r2
    mov r2, r0
    mov r7, #4
    swi 0
    bx lr
read_number:
    ldr r0, =input_buffer
    mov r1, #10
    mov r7, #3
    swi 0
    ldr r1, =input_buffer
    mov r0, #0
.convert_loop:
    ldrb r2, [r1], #1
    cmp r2, #10
    beq .done_convert
    sub r2, r2, #48
    mul r0, r0, #10
    add r0, r0, r2
    b .convert_loop
.done_convert:
    bx lr
print_number:
    mov r1, r0
    mov r2, #10
    mov r3, #0
    mov r4, #0
.print_loop:
    udiv r5, r1, r2
    mul r6, r5, r2
    sub r4, r1, r6
    add r4, r4, #48
    mov r7, #4
    mov r0, #1
    mov r2, #1
    swi 0
    mov r1, r5
    cmp r1, #0
    bne .print_loop
    bx lr
prompt1: .asciz "Enter the first number: "
prompt2: .asciz "Enter the second number: "
prompt3: .asciz "Enter the third number: "
result_msg: .asciz "The sum of %d, %d, and %d is: %d\n"
num1: .skip 4
num2: .skip 4
num3: .skip 4
sum: .skip 4
input_buffer: .skip 10
.end

