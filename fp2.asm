.begin
    IN num1           ; Input first number
    IN num2           ; Input second number
    IN num3           ; Input third number
    LOAD num1         ; Load num1 into register
    ADD num2          ; Add num2 to register
    ADD num3          ; Add num3 to register
    STORE sum         ; Store result in sum
    OUT sum           ; Output the sum
    HALT              ; Stop program
num1: .data 0         ; Declare num1 variable
num2: .data 0         ; Declare num2 variable
num3: .data 0         ; Declare num3 variable
sum:  .data 0         ; Declare sum variable
.end
