-- 코드를 입력하세요
SELECT ao.ANIMAL_ID, ao.NAME
FROM ANIMAL_OUTS ao
WHERE ao.ANIMAL_ID NOT IN (SELECT ANIMAL_ID FROM ANIMAL_INS)
ORDER BY ao.ANIMAL_ID