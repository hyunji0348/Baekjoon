-- 코드를 입력하세요
SELECT FIRST_HALF.FLAVOR
FROM FIRST_HALF, ICECREAM_INFO
WHERE (TOTAL_ORDER > 3000) AND (INGREDIENT_TYPE = "fruit_based") AND (FIRST_HALF.FLAVOR = ICECREAM_INFO.FLAVOR)
GROUP BY FIRST_HALF.FLAVOR
ORDER BY TOTAL_ORDER DESC