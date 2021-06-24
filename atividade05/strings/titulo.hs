titulo [] fn = []

titulo (x:xs) fn 
    | x == ' ' = ' ' : titulo xs toUpper
    | otherwise = (fn x) : titulo xs toLower

titulo xs = titulo' xs toUpper

main = do
    a <- getLine
    print $ titulo a
