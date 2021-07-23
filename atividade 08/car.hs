import Debug.Trace ( trace )
import Data.Function ( (&) )

data Car = Car  { pass :: Int
                , maxPass :: Int
                , gas :: Int
                , maxGas :: Int
                , km :: Int
                } deriving (Eq, Show, Read)


data Op = Op { name :: String
             , result :: Bool
             } deriving (Eq, Show, Read)

data Info = Info { car :: Car
                 , op  :: Op
                 } deriving (Eq, Show, Read)


toString (Info (Car pass maxPass gas maxGas km) (Op name result)) =
                "Car pass: " ++ show pass ++ "/" ++ show maxPass
                 ++ " gas: " ++ show gas  ++ "/" ++ show maxGas
                 ++  " km: " ++ show km
                 ++ " Operation: " ++ name ++ " Result: " ++ show result

resume :: Info -> Info
resume info = trace (toString info) info

-- cria um carro passando maxPass e maxGas - retorna sempre true.
createCar :: Int -> Int -> Info
createCar mPass mGas = Info (Car 0 mPass 0 mGas 0) (Op "create" True)


fuel :: Int -> Info -> Info
fuel valor (Info (Car pass mPass gas mGas km) _) = Info(Car pass mPass newGas mGas km)(Op "fuel" gasolina)
    where
        gasolina = gas < mGas
        newGas = if (gas+valor) >= mGas then mGas else gas+valor


embark :: Info -> Info 
embark (Info(Car pass mPass gas mGas km) _) = (Info(Car carona mPass gas mGas km) (Op "embark" embarq))
    where
     embarq = pass < mPass
     carona = if embarq then pass + 1 else pass

-- Retira uma pessoa do carro, retorna false se não tiver ninguém no carro
disembark :: Info -> Info
disembark (Info (Car pass mPass gas mGas km) _) = Info(Car newPass mPass gas mGas km)(Op "disembark" desembarq)
    where
        desembarq = pass > 0
        newPass = if desembarq then pass-1 else pass


drive :: Int -> Info -> Info 
drive valor (Info(Car pass mPass gas mGas km) _) = Info(Car pass maxPass gas2 maxGas Km2) (Op "drive" dirigir)
    where
     driving = (pass >= 1 && gas > 0)
     dirigir = driving && gas > valor
     aux = gas - valor
     km3 = if (dirigir) then (km + valor) else (km + valor + aux)
     gas2 = if (dirigir) then aux else 0

-- main = print $ resume . embark . resume. embark . resume $ createCar 2 50
main = do 
    let res = createCar 2 50 
            & resume & embark
            & resume & disembark
            & resume & disembark
            & resume & drive 10
            & resume & embark
            & resume & embark
            & resume & embark
            & resume & drive 10
            & resume & fuel 30
            & resume & fuel 30
            & resume & fuel 30
            & resume & drive 30
            & resume & drive 30
            & resume
    print res 


{-
Car pass: 0/2 gas: 0/50 km: 0 Operation: create Result: True
Car pass: 1/2 gas: 0/50 km: 0 Operation: embark Result: True
Car pass: 0/2 gas: 0/50 km: 0 Operation: disembark Result: True
Car pass: 0/2 gas: 0/50 km: 0 Operation: disembark Result: False
Car pass: 0/2 gas: 0/50 km: 0 Operation: drive Result: False
Car pass: 1/2 gas: 0/50 km: 0 Operation: embark Result: True
Car pass: 2/2 gas: 0/50 km: 0 Operation: embark Result: True
Car pass: 2/2 gas: 0/50 km: 0 Operation: embark Result: False
Car pass: 2/2 gas: 0/50 km: 0 Operation: drive Result: False
Car pass: 2/2 gas: 30/50 km: 0 Operation: fuel Result: True
Car pass: 2/2 gas: 50/50 km: 0 Operation: fuel Result: True
Car pass: 2/2 gas: 50/50 km: 0 Operation: fuel Result: False
Car pass: 2/2 gas: 20/50 km: 30 Operation: drive Result: True
Car pass: 2/2 gas: 0/50 km: 50 Operation: drive Result: False
Info {car = Car {pass = 2, maxPass = 2, gas = 0, maxGas = 50, km = 50}, op = Op {name = "drive", result = False}}
-}
