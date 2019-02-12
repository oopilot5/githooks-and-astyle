#!/bin/bash

rf -rf .git/hooks/pre-commit.sample
cp pre-commit .git/hooks