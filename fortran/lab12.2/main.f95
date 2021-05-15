!reading three integer of same width
program main
    integer a,b,c

    write(*,*),"Enter three integer(width=1) to be stored:"
    read(*,101),a,b,c
    write(*,102),"You have entered:",a,',',b,'and',c
101 Format(I1,I1,I1)
102 Format(A18,I1,A1,I1,A3,I1)

end
