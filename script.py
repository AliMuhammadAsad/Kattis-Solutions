import pandas as pd
import re

def update_link(match):
    url = match.group(2); name = match.group(1)
    return f'<a href="{url}" target="_blank">{name}</a>'

file = 'README.md'
out = 'README.md'

with open(file, 'r') as f:
    cont = f.read()

cont = re.sub(r'\[([^\]]+)\]\(([^)]+)\)', update_link, cont)

with open(out, 'w') as f:
    f.write(cont)