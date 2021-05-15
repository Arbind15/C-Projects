! A fortran95 program for G95
! By WQY
program main
  implicit none
  integer i,sum,j
  sum=0

  do i=1,4
    do j=1,i
        sum=sum+j
    end do
  end do
  write(*,*),'Sum=',sum
end
