concatena lista1 lista2 = lista1 ++ lista2 -- não entendi como usar o : no lugar do ++

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ concatena a b