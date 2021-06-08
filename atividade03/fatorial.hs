fatorial n = if n == 0 then 1 else n * fatorial(n-1)
fatorial n = foldl(*) 1 [1..n]
fatorial n = product [1..n]

main = do
    a <- readLn :: IO Int
    print $ fatorial a
