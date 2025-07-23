#!/bin/bash

# examples.sh
# A simple shell script to demonstrate basic Linux commands.

echo "📂 Creating a test directory..."
mkdir test_dir

echo "📝 Moving into test_dir..."
cd test_dir

echo "📄 Creating files..."
touch file1.txt file2.txt

echo "📑 Listing files..."
ls -l

echo "🗃️ Copying file1.txt to file3.txt..."
cp file1.txt file3.txt

echo "✏️ Adding text to file1.txt..."
echo "Hello HPC!" > file1.txt

echo "📚 Displaying file1.txt contents..."
cat file1.txt

# How to use

chmod +x examples.sh
./examples.sh


echo "🔐 Changing permissions..."
chmod +x file1.txt

echo "🧹 Cleaning up..."
cd ..
rm -r test_dir

echo "✅ Done!"
