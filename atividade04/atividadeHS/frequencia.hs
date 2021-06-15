contador a = a + 1
frequencia lista n = sum[contador 0 | x <- lista, x == n]

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ frequencia a b