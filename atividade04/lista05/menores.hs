  
menores lista n = if n > length lista then lista else [x | x <- lista , x <= n]

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ menores a b