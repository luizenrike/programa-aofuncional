gerador y = zip [[x, -x] | x <- [1..]]

gerador1 = iterate gerador 0
