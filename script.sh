#!/bin/bash

echo iniciando el la carga
git init
git remote add origin https://github.com/allangit/respaldo.git
git add .
git commit -m "modificando los archivos"
git push origin master

