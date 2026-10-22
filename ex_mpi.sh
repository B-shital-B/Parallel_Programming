#!/bin/bash
#SBATCH --partition=cpu
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=2
#SBATCH --time=00:15:00
#SBATCH --output=%j.out
#SBATCH --error=%j.err

mpirun -np 2 ./ex
