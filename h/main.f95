! A fortran95 program for G95
! By WQY
program main
  implicit none
  integer n1, n2, nx
  data n1, n2/0,1/

  do
    nx=n1+n2
    n1=n2
    n2=nx
    write(*,*),nx
    until(nx<500)
  write(*,*) "Hello World!"
  re_i = system("pause")
end
