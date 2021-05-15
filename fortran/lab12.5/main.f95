!comparing numbers
program main
    real n
    write(*,*)'Enter a number:'
    read(*,*)n
    if(n)100,101,102
100 write(*,*)'You have entered negative number.'
stop
101 write(*,*)'You have entered Zero.'
stop
102 print *,'You have entered positive number.'  !x>y .and. x<y is also valid
stop
end program
