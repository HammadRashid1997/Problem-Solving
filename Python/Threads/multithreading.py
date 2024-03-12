import threading

# Define a function that will run in a thread
def print_numbers():
    for i in range(1, 11):
        print(i)

# Create a thread object for the function
thread = threading.Thread(target=print_numbers)

# Start the thread
thread.start()

# The main program can continue running while the thread runs in the background
for letter in ['x', 'y', 'z']:
    print(letter)

# Wait for the thread to finish before exiting the program
thread.join()
