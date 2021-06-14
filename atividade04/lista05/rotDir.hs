rotDir n nome 
    | n >= 2 = reverse (take (n `mod` length nome)  (reverse nome)) ++ reverse (drop (n `mod` length nome) (reverse nome))
    | otherwise =  take (n) (reverse nome) ++ reverse (drop n (reverse nome))

main = do
    a <- readLn :: IO Int
    b <- getLine
    print $ rotDir a b