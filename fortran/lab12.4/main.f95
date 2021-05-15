!computed GOTO
program main
    integer s

    write(*,*)"Press 1 for male and 2 for female and 3 for undefined:"
    read(*,*),s

    GO TO(100, 101,102),s
100 write(*,*)"Congratulation!!! you are male."
stop
101 write(*,*)"Congratulation!!! you are female."
stop
102 write(*,*)"Sorry!!! you are sex is undefined."
stop
end program
