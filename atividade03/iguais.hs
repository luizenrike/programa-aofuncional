iguais a b c =
    if a == b && b == c
        then 3
    else if a /= b && b /= c  && a /= c
        then 0
    else 
        then 2

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ iguais a b c
