! A fortran95 program for G95
! By WQY
!program main
 ! implicit none
  !real r,a

  !write(*,*),"Enter the radius of circle:"
  !read(*,*),r
  !a=3.14*r*r
  !write(*,*),"The area is:",a

!end

program array
    character c(10)
    do i=1,10
read(*,*),c(i)
end do
do i=1,10
print *,c(i)
end do
print *,c
end program
