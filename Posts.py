from enum import Enum
from abc import ABC, abstractmethod

from ImagePost import ImagePost
from SalePost import SalePost
from TextPost import TextPost


class PostType(Enum):
    TEXTPOST = "textPost"
    IMAGEPOST = "imagePost"
    SALEPOST = "salePost"


class Posts:
    like_count = 0
    comments = []
    owner = None

    def create_post(self, post_type, owner, *content):
        if post_type == post_type.TEXTPOST:
            text = content[0]
            return TextPost(text)
        elif post_type == post_type.IMAGEPOST:
            image = content[0]
            return ImagePost(image)
        elif post_type == post_type.SALEPOST:
            description = content[0]
            price = content[1]
            location = content[2]
            return SalePost(description, price, location)
        else:
            raise ValueError("Invalid post type")

    def like(self):  # continue
        self.likeCount += 1

    def comment(self, user, content):
        self.comments.append(user, content)

    @abstractmethod
    def print_info(self, user):
        pass

