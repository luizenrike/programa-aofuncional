indices x y = [snd | (fst, snd) <- filter(\z -> fst z == x) (zip y [0..length  - 1])]

main = do
    a <- getLine
    print $ indices a b
