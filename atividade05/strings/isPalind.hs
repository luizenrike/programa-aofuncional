isPalind ys = ys == reverse(ys) == True
    | otherwise = False

main = do
    a <- getLine
    print $ isPalind a

