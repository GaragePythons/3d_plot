set dgrid3d 50, 50
set contour base
set object 1 rectangle from screen 0,0 to screen 1,1 fillcolor rgb"gray" behind
set xrange [-4.90:4.90]
set yrange [-4.90:4.90]
set cntrparam levels 10
unset surface
splot "dat" w l
