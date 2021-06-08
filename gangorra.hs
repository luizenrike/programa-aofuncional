gangorra a b c d =
    if a * b == c * d
        then 0
    else if a * b > c * d
        then -1
    else 1

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    d <- readLn :: IO Int
    print $ gangorra a b c d