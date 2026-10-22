# dataset.py

import torch

from datasets import load_dataset


class TinyDataset:
    def __init__(self, tokenizer, length, set_type='validation'):
        self.tokenizer = tokenizer
        self.length = length

        ds = load_dataset("roneneldan/TinyStories")
        self.data = [self.convert(d['text']) for d in ds[set_type]]

    def convert(self, text):
        """
        The returned list always has a fixed number of tokens, defined by length.
        If the tokenized result contains fewer tokens, END_OF_STRING tokens
        will be appended. Otherwise, the list will be truncated to contain
        exactly length tokens.
        """
        eos_token_id = self.tokenizer.eos_token_id

        tokens = self.tokenizer.encode(text)
        tokens += [eos_token_id] * (self.length - len(tokens))

        return tokens[:self.length]

    def __len__(self):
        return len(self.data)

    def __getitem__(self, idx):
        return torch.tensor(self.data[idx])
