
program sizetest

integer, parameter :: maxsize = 900
real (kind=4), dimension(:,:,:), allocatable :: A
integer :: upperindex

upperindex = maxsize-1
allocate ( A(0:upperindex,0:upperindex,0:upperindex), stat=ierr )

if ( ierr == 0 ) print *,  "Memory Allocated"

do i=0,upperindex
   do j=0,upperindex
      do k= 0,upperindex 
          A(k,j,i) = i*maxsize*maxsize + j*maxsize + k + 1.0
      enddo
   enddo
enddo

print *, A(upperindex,upperindex,upperindex)

end ! sizetest
