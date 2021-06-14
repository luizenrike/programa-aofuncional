rotEsq :: Int -> String -> String
rotEsq n nome =  drop (n `mod` length nome) nome ++ take (n `mod` length nome) nome

main = do
    a <- readLn :: IO Int
    b <- getLine
    print $ rotEsq a b