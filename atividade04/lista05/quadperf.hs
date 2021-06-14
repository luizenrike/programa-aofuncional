contador a = a + 1
quadperf num = if sum [contador 0 | x <- [1..num], x*x == num] == 1 then True else False

main = do
    a <- readLn :: IO Int
    print $ quadperf a