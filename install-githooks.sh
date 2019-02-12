#!/bin/bash

rm -rf .git/hooks/pre-commit.sample
cp pre-commit .git/hooks
