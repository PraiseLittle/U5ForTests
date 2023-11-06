import re
import os

list_paths ={ 'Functions/group__RTC__Exported__Functions__Write__Init.md',
'Functions/group__RTC__Exported__Functions__WakeUp__Timer.md',
'Functions/group__RTC__Exported__Functions__Timestamp.md',
'Functions/group__RTC__Exported__Functions__Output.md',
'Functions/group__RTC__Exported__Functions__Low__Power.md',
'Functions/group__RTC__Exported__Functions__IRQ.md',
'Functions/group__RTC__Exported__Functions__Config.md',
'Functions/group__RTC__Exported__Functions__Callback.md',
'Functions/group__RTC__Exported__Functions__Calibration.md',
'Functions/group__RTC__Exported__Functions__Calendar.md'
}

for document_path_part in list_paths:


    document_path = '../docs/RTC/' +  document_path_part

    with open(document_path, 'r') as file:
        # Read all the lines of the file into a list
        lines = file.readlines()

    # Define the regular expression pattern to match the string format
    pattern = r'\[(.*?)\]\(.*?\)'

    # Use re.sub to replace the matched pattern with just the text inside the square brackets

    for i in range(len(lines)):
        # Example: Add a prefix to each line
        lines[i] = re.sub(pattern, r'\1', lines[i])

    with open(document_path, 'w') as file:
        # Write the modified lines back to the file
        file.writelines(lines)