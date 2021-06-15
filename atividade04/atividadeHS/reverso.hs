reverso lista = reverse lista

main = do
    a <- readLn :: IO [Int]
    print $ reverso a