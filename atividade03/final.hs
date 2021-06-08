final a b =  reverse(take indice(reverse lista))

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ final a b   
