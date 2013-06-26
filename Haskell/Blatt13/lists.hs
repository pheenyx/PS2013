last1 x = x !! (length x - 1)

last2 x = head (reverse x)

init1 x = reverse (tail (reverse x))

init2 x = take (length x - 1) x 

second (x,y) = y

splitStr n str = (take n str, drop n str)

