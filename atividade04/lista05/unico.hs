unico lista n = (length(filter(== n) lista)) <= 1

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ unico a b