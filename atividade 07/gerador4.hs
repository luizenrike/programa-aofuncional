  
gerador4 = takeWhile (\x -> x > 0) . iterate (\y -> y `div` 2)