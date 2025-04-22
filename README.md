# ATM Simulation Program

This C program simulates a basic ATM with the following features:

- Check balance
- Withdraw money
- Deposit money

The program uses a menu-driven interface and functions to modularize operations. It includes input validation and handles edge cases such as insufficient balance and invalid inputs.

## Files

- `ACE_PROJECT_Suhani.c`: The main C program file containing the ATM simulation implementation.

## Compilation

To compile the program, use the following command in your terminal or command prompt:

```bash
gcc -o atm_simulator Project/ACE_PROJECT_Suhani.c
```

## Running the Program

After compilation, run the executable:

```bash
./atm_simulator
```

On Windows, you may run:

```bash
atm_simulator.exe
```

Follow the on-screen menu to perform ATM operations.

## Notes

- The initial balance is hardcoded to $1000.00.
- Withdrawals cannot exceed the current balance.
- Deposits and withdrawals must be positive amounts.

## Author

This program was created as part of a coding assignment.
