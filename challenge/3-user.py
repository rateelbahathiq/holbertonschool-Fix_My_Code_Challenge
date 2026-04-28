#!/usr/bin/python3
"""User class"""

import hashlib


class User:
    """User class"""

    def __init__(self):
        self.password = None

    def set_password(self, pwd):
        """Hash and store password"""
        self.password = hashlib.md5(pwd.encode()).hexdigest()

    def is_valid_password(self, pwd):
        """Check if password is correct"""
        return self.password == hashlib.md5(pwd.encode()).hexdigest()
