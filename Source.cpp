//integer6◦
//Дано двузначное число.Вывести вначале его левую цифру(десятки), а затем — его правую цифру(единицы).Для нахождения десятков
//использовать операцию деления нацело, для нахождения единиц — операцию взятия остатка от деления.
//int num;
//cin >> num;
//int d = num / 10; // 52  / 10 = 5   98 / 10 = 9
//int e = num % 10;  // 52 % 10  = 2  98 % 10  = 8
//cout << d << " " << e << endl;*/
//int sotni  = num / 100;
//int edenitsi = num % 10;
// 123 % 100 -> 23 / 10 -> 2 нашли десятки
//int des = (num % 100) / 10;
// 123/10 -> 12      12%10 -> 2
//int des = (num / 10) % 10;
//Integer7◦Дано двузначное число.Найти сумму и произведение его цифр
cin >> num;
int main{
int a = 33;
sp = a % 10 + a / 10;
std :: cout << (a % 10 + a / 10) << std::endl;
//Integer8.Дано двузначное число.Вывести число, полученное при перестановке цифр исходного числа.
int ab;
int ba;
cout << "Двузначное число";
cin >> ab;
ba = ab / 10 + ab % 10 * 10;
std :: cout << ab << ba << std :: endl;

}
