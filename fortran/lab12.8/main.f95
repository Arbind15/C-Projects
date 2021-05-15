!recording student marks
program main
    integer i,j,m(10),temp

    write(*,*),'Enter the marks of each student:'

    do i=1,10
        read(*,*)m(i)
        enddo
    write(*,*)'You have entered:'
    do i=1,10
        write(*,*),m(i)
    end do
    do i=1,9
        do j=i+1,10
            if(m(i).lt.m(j)) then
                temp=m(i)
                m(i)=m(j)
                m(j)=temp
            end if
        end do
    end do
    write(*,*),'The top three marks is:',(m(i),i=1,3)
end program
