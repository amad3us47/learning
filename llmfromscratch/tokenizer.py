# tokenizer.py

from transformers import AutoTokenizer


class Tokenizer:
    def __init__(self):
        self.tokenizer = AutoTokenizer.from_pretrained("./gpt-neo-tokenizer",local_files_only=True)

    def encode(self, input_string):
        return self.tokenizer.encode(input_string, return_tensors=None)

    def decode(self, tokens):
        return self.tokenizer.decode(tokens)

    @property
    def vocab_size(self):
        return self.tokenizer.vocab_size

    @property
    def eos_token_id(self):
        return self.tokenizer.eos_token_id
