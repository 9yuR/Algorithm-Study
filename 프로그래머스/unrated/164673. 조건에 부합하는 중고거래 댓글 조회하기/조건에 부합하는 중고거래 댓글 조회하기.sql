-- USED_GOODS_BOARD(BOARD_ID, WRITER_ID, TITLE, CONTENTS, PRICE, CREEATED_DATE, STATUS, VIEWS) --
-- USED_GOODS_REPLY(REPLY_ID, BOARD_ID, WRITER_ID, CONTENTS, CREATED_DATE) --

SELECT 
    B.TITLE, 
    B.BOARD_ID, 
    Y.REPLY_ID, 
    Y.WRITER_ID, 
    Y.CONTENTS, 
    DATE_FORMAT(Y.CREATED_DATE, '%Y-%m-%d') AS CREATED_DATE
FROM USED_GOODS_BOARD B JOIN USED_GOODS_REPLY Y
ON B.BOARD_ID = Y.BOARD_ID
WHERE B.CREATED_DATE LIKE '2022-10%'
ORDER BY CREATED_DATE, TITLE ASC;