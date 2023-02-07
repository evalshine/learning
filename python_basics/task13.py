class PositiveList(list):
    def append(self, x):
        if x < 1:
            raise NonPositiveError
        super().append(x)

class NonPositiveError(Exception):
    pass