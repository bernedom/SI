#!/bin/python3
import yaml
import io
import requests
import hashlib
import sys

print('Number of arguments:', len(sys.argv), 'arguments.')
print('Argument List:', str(sys.argv))
sys.exit(0)

with open("config.yml", 'r') as stream:
    data_loaded = yaml.safe_load(stream)

print(data_loaded["versions"])
new_version = dict()
data_loaded["versions"]["2.1.4"] = {'folder': 'all'}

with io.open('config_data.yaml', 'w', encoding='utf8') as outfile:
    yaml.dump(data_loaded, outfile,
              default_flow_style=False, allow_unicode=True)

r = requests.get(
    "https://github.com/bernedom/SI/archive/2.1.3.tar.gz", allow_redirects=True)
hash = hashlib.sha256(r.content).hexdigest()
print(hash)

with open("all/conandata.yml", 'r') as stream:
    conandata = yaml.safe_load(stream)

print(conandata)
conandata["sources"]["2.1.4"] = {
    'url': 'https://github.com/bernedom/SI/archive/2.1.3.tar.gz', 'sha256': hash}

with io.open('conandata_data.yaml', 'w', encoding='utf8') as outfile:
    yaml.dump(conandata, outfile,
              default_flow_style=False, allow_unicode=True)
