isPalind ys = ys == reverse(ys)

main = do
    a <- getLine
    print $ isPalind a

