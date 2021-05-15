!factrioal

program main
    integer n,f,i
    f=1
    write(*,*)'Enter number:'
    read(*,*)n
    do i=1,n
    f=f*i
    enddo

    write(*,*)"The factrioal of",n,"is",f
end program
