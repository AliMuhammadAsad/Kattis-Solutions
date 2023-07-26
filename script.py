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

# Previously the .md file had links in the standard markdown format of [name](url).
# I had updated all links in this format, but on creating the site, the links would not open in a new tab
# and markdown doesn't have support for such things, but HTML does.
# But it was tedious to change each and every link with <a></a> tags, hence this script automates that process for all the links.
# Now each link opens in a new tab on the website (not in the markdown though since markdown doesn't support it)