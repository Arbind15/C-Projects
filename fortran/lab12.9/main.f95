!matrix addition
program matrix
    integer m1(3,3),m2(3,3),m(3,3)

    write(*,*)'Enter the element of first matrix:'
    do i=1,3
    read(*,*),(m1(i,j),j=1,3)
    enddo
    write(*,*)'Enter the element of second matrix:'
    do i=1,3
    read(*,*),(m2(i,j),j=1,3)
    enddo
    do i=1,3
        do j=1,3
            m(i,j)=m1(i,j)+m2(i,j)
        end do
    end do
    write(*,*)'The sum of matrix is::'
    do i=1,3
    write(*,*),(m(i,j),j=1,3)
    enddo
end program
