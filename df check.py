import pandas as pd
import helpful_functions

# Load your dataset
data = pd.read_csv('helpful_functions.py')

# Check if the dataset is empty using a function from helpful_functions
is_empty = check.is_dataset_empty(data)

if is_empty:
    print("The dataset is empty.")
else:
    print("The dataset contains data.")

