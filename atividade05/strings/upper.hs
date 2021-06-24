upper x = head [s | (f, s) <- lista, f == x]
    where lista = zip ['A'..'Z'] ['a'..'z'] ++ [(x, x)]


main = do
    a <- getLine
    print $ upper a
