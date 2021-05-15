!using array
program main
    implicit none
    integer a(5),i,j
    integer ma

    data(a(i),i=1,5)/20,-50,110,0,13/
    write(*,*)'The array is:'
    do i=1,5
        write(*,*)a(i)
    end do
    ma=a(1)
    do j=1,5
        if(ma.lt.a(j)) then !we can also use '>'or'<'  , power=**
         ma=a(j)
         endif
        end do

        write(*,*)'The greatest number is:',ma
end program main
