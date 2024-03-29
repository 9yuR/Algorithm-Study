-- REST_INFO(REST_ID, REST_NAME, FOOD_TYPE, VIEWS, FAVORITES, PARKING_LOT, ADDRESS, TEL) --
-- REST_REVIEW(REVIEW_ID, REST_ID, MEMBER_ID, REVIEW_SCORE, REVIEW_TEXT, REVIEW_DATE) --
# SELECT REST_INFO.REST_ID, REST_NAME, FOOD_TYPE, ADDRESS, ROUND(AVG(REVIEW_SCORE), 2) AS SCORE
# FROM REST_INFO JOIN REST_REVIEW
# ON REST_INFO.REST_ID = REST_REVIEW.REST_ID
# GROUP BY REST_INFO.REST_ID
# HAVING ADDRESS LIKE '서울특별시%'
# ORDER BY SCORE DESC, FAVORITES DESC;

SELECT A.REST_ID, A.REST_NAME, A.FOOD_TYPE, A.FAVORITES, A.ADDRESS, ROUND(AVG(B.REVIEW_SCORE), 2) AS SCORE
FROM REST_INFO A JOIN REST_REVIEW B
ON A.REST_ID = B.REST_ID
WHERE ADDRESS LIKE '서울%'
GROUP BY REST_ID
ORDER BY SCORE DESC, A.FAVORITES DESC