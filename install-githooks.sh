#!/bin/bash

rm -rf .git/hooks/pre-commit.sample
chmod +x pre-commit
cp pre-commit .git/hooks
