#!/bin/bash
#SBATCH --partition=standard
#SBATCH --nodes=2
#SBATCH --ntasks-per-node=2
#SBATCH --time=00:10:00
#SBATCH --output=%j.out
#SBATCH --error=%J.err

mpirun -np 3 ./hello
