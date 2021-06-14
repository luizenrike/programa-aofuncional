sequencia' t n = if t == 0 then [] else [a | a <- [(t+1).. (t+n-1)]]

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    print $ sequencia a b