#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mt-plat/battery_meter.h>

/* ============================================================*/
/* define*/
/* ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R	16900
#define RBAT_PULL_DOWN_R	30000
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R	61900
#define RBAT_PULL_DOWN_R	100000
#endif
#define RBAT_PULL_UP_VOLT	1800



/* ============================================================*/
/* ENUM*/
/* ============================================================*/

/* ============================================================*/
/* structure*/
/* ============================================================*/

/* ============================================================*/
/* typedef*/
/* ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================*/
/* External Variables*/
/* ============================================================*/

/* ============================================================*/
/* External function*/
/* ============================================================*/

/* ============================================================*/
/* <DOD, Battery_Voltage> Table*/
/* ============================================================*/
#if (BAT_NTC_10 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 68237},
		{-15, 53650},
		{-10, 42506},
		{ -5, 33892},
		{  0, 27219},
		{  5, 22021},
		{ 10, 17926},
		{ 15, 14674},
		{ 20, 12081},
		{ 25, 10000},
		{ 30, 8315},
		{ 35, 6948},
		{ 40, 5834},
		{ 45, 4917},
		{ 50, 4161},
		{ 55, 3535},
		{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	};
#endif

/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
{0  , 4349},
{1  , 4302},
{2  , 4267},
{3  , 4244},
{4  , 4223},
{5  , 4205},
{6  , 4189},
{7  , 4173},
{7  , 4158},
{8  , 4144},
{9  , 4131},
{10 , 4119},
{11 , 4107},
{12 , 4096},
{13 , 4085},
{14 , 4075},
{15 , 4064},
{16 , 4052},
{17 , 4040},
{18 , 4026},
{19 , 4013},
{20 , 4000},
{21 , 3988},
{21 , 3976},
{22 , 3966},
{23 , 3956},
{24 , 3947},
{25 , 3939},
{26 , 3932},
{27 , 3924},
{28 , 3918},
{29 , 3911},
{30 , 3905},
{31 , 3898},
{32 , 3892},
{33 , 3886},
{34 , 3880},
{35 , 3873},
{36 , 3867},
{36 , 3862},
{37 , 3856},
{38 , 3850},
{39 , 3845},
{40 , 3839},
{41 , 3834},
{42 , 3828},
{43 , 3823},
{44 , 3819},
{45 , 3814},
{46 , 3809},
{47 , 3805},
{48 , 3801},
{49 , 3797},
{50 , 3793},
{50 , 3790},
{51 , 3786},
{52 , 3783},
{53 , 3779},
{54 , 3776},
{55 , 3774},
{56 , 3770},
{57 , 3768},
{58 , 3765},
{59 , 3762},
{60 , 3760},
{61 , 3757},
{62 , 3755},
{63 , 3752},
{64 , 3750},
{64 , 3748},
{65 , 3745},
{66 , 3742},
{67 , 3740},
{68 , 3738},
{69 , 3735},
{70 , 3732},
{71 , 3730},
{72 , 3727},
{73 , 3724},
{74 , 3721},
{75 , 3718},
{76 , 3716},
{77 , 3712},
{78 , 3709},
{79 , 3706},
{79 , 3703},
{80 , 3699},
{81 , 3695},
{82 , 3691},
{83 , 3687},
{84 , 3683},
{85 , 3678},
{86 , 3673},
{87 , 3668},
{88 , 3663},
{89 , 3658},
{90 , 3651},
{91 , 3645},
{92 , 3638},
{93 , 3630},
{93 , 3623},
{94 , 3613},
{95 , 3604},
{96 , 3593},
{97 , 3581},
{98 , 3568},
{99 , 3498},
{100, 3400},
{100, 3400},
{100, 3400},
{100, 3400},
{100, 3400},
{100, 3400},
{100, 3400},
{100, 3400} 
};

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
{0   ,   4345},
{1   ,   4323},
{2   ,   4296},
{3   ,   4272},
{4   ,   4254},
{4   ,   4239},
{5   ,   4224},
{6   ,   4210},
{7   ,   4197},
{8   ,   4185},
{9   ,   4173},
{10  ,   4161},
{11  ,   4150},
{12  ,   4138},
{13  ,   4127},
{13  ,   4116},
{14  ,   4105},
{15  ,   4095},
{16  ,   4086},
{17  ,   4077},
{18  ,   4068},
{19  ,   4059},
{20  ,   4049},
{21  ,   4037},
{21  ,   4025},
{22  ,   4011},
{23  ,   3998},
{24  ,   3986},
{25  ,   3974},
{26  ,   3963},
{27  ,   3954},
{28  ,   3946},
{29  ,   3938},
{29  ,   3932},
{30  ,   3925},
{31  ,   3920},
{32  ,   3913},
{33  ,   3907},
{34  ,   3901},
{35  ,   3895},
{36  ,   3889},
{37  ,   3883},
{38  ,   3877},
{38  ,   3871},
{39  ,   3866},
{40  ,   3860},
{41  ,   3854},
{42  ,   3849},
{43  ,   3844},
{44  ,   3838},
{45  ,   3833},
{46  ,   3828},
{46  ,   3824},
{47  ,   3819},
{48  ,   3814},
{49  ,   3810},
{50  ,   3805},
{51  ,   3801},
{52  ,   3797},
{53  ,   3794},
{54  ,   3790},
{54  ,   3787},
{55  ,   3783},
{56  ,   3780},
{57  ,   3777},
{58  ,   3774},
{59  ,   3772},
{60  ,   3769},
{61  ,   3767},
{62  ,   3764},
{63  ,   3762},
{63  ,   3760},
{64  ,   3758},
{65  ,   3755},
{66  ,   3753},
{67  ,   3751},
{68  ,   3749},
{69  ,   3747},
{70  ,   3744},
{71  ,   3742},
{71  ,   3740},
{72  ,   3738},
{73  ,   3735},
{74  ,   3733},
{75  ,   3730},
{76  ,   3727},
{77  ,   3725},
{78  ,   3722},
{79  ,   3719},
{80  ,   3716},
{80  ,   3713},
{81  ,   3709},
{82  ,   3706},
{83  ,   3702},
{84  ,   3698},
{85  ,   3694},
{86  ,   3689},
{87  ,   3684},
{88  ,   3679},
{88  ,   3673},
{89  ,   3666},
{90  ,   3659},
{91  ,   3651},
{92  ,   3643},
{93  ,   3633},
{94  ,   3621},
{95  ,   3608},
{96  ,   3592},
{96  ,   3574},
{97  ,   3552},
{98  ,   3526},
{99  ,   3491},
{100 ,   3400},
{100 ,   3400},
{100 ,   3400} 
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
{0    ,   4353 },
{1    ,   4328},
{2    ,   4311 },
{3    ,   4296 },
{4    ,   4283 },
{4    ,   4271 },
{5    ,   4261 },
{6    ,   4250 },
{7    ,   4240 },
{8    ,   4229 },
{9    ,   4219 },
{10   ,   4209 },
{11   ,   4199 },
{11   ,   4189 },
{12   ,   4179 },
{13   ,   4170 },
{14   ,   4160 },
{15   ,   4151 },
{16   ,   4141 },
{17   ,   4132 },
{18   ,   4122 },
{18   ,   4113 },
{19   ,   4103 },
{20   ,   4094 },
{21   ,   4084 },
{22   ,   4075 },
{23   ,   4067 },
{24   ,   4060 },
{25   ,   4054 },
{26   ,   4046 },
{26   ,   4036 },
{27   ,   4022 },
{28   ,   4007 },
{29   ,   3994 },
{30   ,   3982 },
{31   ,   3973 },
{32   ,   3966 },
{33   ,   3960 },
{33   ,   3954 },
{34   ,   3948 },
{35   ,   3942 },
{36   ,   3935 },
{37   ,   3928 },
{38   ,   3921 },
{39   ,   3914 },
{40   ,   3907 },
{41   ,   3900 },
{41   ,   3894 },
{42   ,   3887 },
{43   ,   3881 },
{44   ,   3875 },
{45   ,   3868 },
{46   ,   3863 },
{47   ,   3858 },
{48   ,   3852 },
{48   ,   3847 },
{49   ,   3842 },
{50   ,   3837 },
{51   ,   3833 },
{52   ,   3829 },
{53   ,   3824 },
{54   ,   3820 },
{55   ,   3816 },
{55   ,   3812 },
{56   ,   3809 },
{57   ,   3805 },
{58   ,   3801 },
{59   ,   3798 },
{60   ,   3795 },
{61   ,   3792 },
{62   ,   3788 },
{63   ,   3785 },
{63   ,   3782 },
{64   ,   3779 },
{65   ,   3776 },
{66   ,   3774 },
{67   ,   3771 },
{68   ,   3769 },
{69   ,   3766 },
{70   ,   3763 },
{70   ,   3761 },
{71   ,   3759 },
{72   ,   3757 },
{73   ,   3754 },
{74   ,   3752 },
{75   ,   3750 },
{76   ,   3748 },
{77   ,   3745 },
{77   ,   3743 },
{78   ,   3740 },
{79   ,   3737 },
{80   ,   3734 },
{81   ,   3731 },
{82   ,   3727 },
{83   ,   3724 },
{84   ,   3720 },
{85   ,   3716 },
{85   ,   3711 },
{86   ,   3706 },
{87   ,   3701 },
{88   ,   3696 },
{89   ,   3691 },
{90   ,   3687 },
{91   ,   3685 },
{92   ,   3682 },
{92   ,   3678 },
{93   ,   3674 },
{94   ,   3668 },
{95   ,   3657 },
{96   ,   3639 },
{97   ,   3612 },
{98   ,   3575 },
{99   ,   3524 },
{99   ,   3456 },
{100  ,   3400 } 
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
{0    ,   4343 },
{1    ,   4324 },
{2    ,   4309 },
{3    ,   4295 },
{4    ,   4282 },
{4    ,   4271 },
{5    ,   4259 },
{6    ,   4248 },
{7    ,   4237 },
{8    ,   4227 },
{9    ,   4217 },
{10   ,   4206 },
{11   ,   4196 },
{12   ,   4187 },
{12   ,   4177 },
{13   ,   4167 },
{14   ,   4157 },
{15   ,   4148 },
{16   ,   4138 },
{17   ,   4129 },
{18   ,   4120 },
{19   ,   4111 },
{19   ,   4102 },
{20   ,   4093 },
{21   ,   4083 },
{22   ,   4075 },
{23   ,   4066 },
{24   ,   4058 },
{25   ,   4049 },
{26   ,   4040 },
{27   ,   4032 },
{27   ,   4024 },
{28   ,   4015 },
{29   ,   4007 },
{30   ,   4000 },
{31   ,   3992 },
{32   ,   3984 },
{33   ,   3977 },
{34   ,   3969 },
{35   ,   3962 },
{35   ,   3955 },
{36   ,   3948 },
{37   ,   3940 },
{38   ,   3933 },
{39   ,   3925 },
{40   ,   3918 },
{41   ,   3910 },
{42   ,   3902 },
{42   ,   3894 },
{43   ,   3886 },
{44   ,   3879 },
{45   ,   3871 },
{46   ,   3865 },
{47   ,   3859 },
{48   ,   3853 },
{49   ,   3847 },
{50   ,   3842 },
{50   ,   3837 },
{51   ,   3833 },
{52   ,   3829 },
{53   ,   3825 },
{54   ,   3821 },
{55   ,   3817 },
{56   ,   3813 },
{57   ,   3810 },
{58   ,   3806 },
{58   ,   3802 },
{59   ,   3799 },
{60   ,   3796 },
{61   ,   3793 },
{62   ,   3790 },
{63   ,   3787 },
{64   ,   3784 },
{65   ,   3781 },
{65   ,   3779 },
{66   ,   3776 },
{67   ,   3773 },
{68   ,   3770 },
{69   ,   3768 },
{70   ,   3765 },
{71   ,   3762 },
{72   ,   3758 },
{73   ,   3754 },
{73   ,   3750 },
{74   ,   3746 },
{75   ,   3743 },
{76   ,   3739 },
{77   ,   3735 },
{78   ,   3732 },
{79   ,   3728 },
{80   ,   3725 },
{81   ,   3722 },
{81   ,   3720 },
{82   ,   3717 },
{83   ,   3713 },
{84   ,   3708 },
{85   ,   3703 },
{86   ,   3699 },
{87   ,   3694 },
{88   ,   3689 },
{89   ,   3683 },
{89   ,   3677 },
{90   ,   3673 },
{91   ,   3672 },
{92   ,   3671 },
{93   ,   3669 },
{94   ,   3667 },
{95   ,   3663 },
{96   ,   3653 },
{96   ,   3629 },
{97   ,   3592 },
{98   ,   3544 },
{99   ,   3483 },
{100  ,   3400 },
{100  ,   3400 }
};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0}
};

/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = {
{1003  ,  4349 },
{1003  ,  4302 },
{1064  ,  4267 },
{1052  ,  4244 },
{1005  ,  4223 },
{1030  ,  4205 },
{984   ,  4189 },
{975   ,  4173 },
{964   ,  4158 },
{971   ,  4144 },
{943   ,  4131 },
{932   ,  4119 },
{941   ,  4107 },
{915   ,  4096 },
{908   ,  4085 },
{914   ,  4075 },
{893   ,  4064 },
{883   ,  4052 },
{879   ,  4040 },
{869   ,  4026 },
{869   ,  4013 },
{852   ,  4000 },
{846   ,  3988 },
{843   ,  3976 },
{835   ,  3966 },
{831   ,  3956 },
{838   ,  3947 },
{832   ,  3939 },
{825   ,  3932 },
{825   ,  3924 },
{832   ,  3918 },
{830   ,  3911 },
{828   ,  3905 },
{820   ,  3898 },
{827   ,  3892 },
{819   ,  3886 },
{827   ,  3880 },
{820   ,  3873 },
{827   ,  3867 },
{829   ,  3862 },
{820   ,  3856 },
{830   ,  3850 },
{821   ,  3845 },
{822   ,  3839 },
{836   ,  3834 },
{822   ,  3828 },
{839   ,  3823 },
{825   ,  3819 },
{841   ,  3814 },
{843   ,  3809 },
{830   ,  3805 },
{830   ,  3801 },
{836   ,  3797 },
{849   ,  3793 },
{851   ,  3790 },
{837   ,  3786 },
{838   ,  3783 },
{839   ,  3779 },
{842   ,  3776 },
{846   ,  3774 },
{846   ,  3770 },
{847   ,  3768 },
{849   ,  3765 },
{851   ,  3762 },
{853   ,  3760 },
{856   ,  3757 },
{856   ,  3755 },
{879   ,  3752 },
{862   ,  3750 },
{867   ,  3748 },
{865   ,  3745 },
{889   ,  3742 },
{869   ,  3740 },
{893   ,  3738 },
{895   ,  3735 },
{875   ,  3732 },
{879   ,  3730 },
{879   ,  3727 },
{878   ,  3724 },
{882   ,  3721 },
{886   ,  3718 },
{912   ,  3716 },
{896   ,  3712 },
{890   ,  3709 },
{893   ,  3706 },
{894   ,  3703 },
{910   ,  3699 },
{897   ,  3695 },
{915   ,  3691 },
{915   ,  3687 },
{902   ,  3683 },
{904   ,  3678 },
{905   ,  3673 },
{918   ,  3668 },
{907   ,  3663 },
{911   ,  3658 },
{909   ,  3651 },
{911   ,  3645 },
{928   ,  3638 },
{933   ,  3630 },
{914   ,  3623 },
{932   ,  3613 },
{936   ,  3604 },
{936   ,  3593 },
{939   ,  3581 },
{922   ,  3568 },
{924   ,  3498 },
{945   ,  3400 },
{945   ,  3400 },
{945   ,  3400 },
{945   ,  3400 },
{945   ,  3400 },
{945   ,  3400 },
{945   ,  3400 },
{945   ,  3400 } 
};

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = {
{247   ,    4345 },
{247   ,    4323 },
{593   ,    4296 },
{667   ,    4272 },
{671   ,    4254 },
{659   ,    4239 },
{656   ,    4224 },
{654   ,    4210 },
{648   ,    4197 },
{637   ,    4185 },
{636   ,    4173 },
{627   ,    4161 },
{626   ,    4150 },
{617   ,    4138 },
{610   ,    4127 },
{610   ,    4116 },
{605   ,    4105 },
{599   ,    4095 },
{593   ,    4086 },
{594   ,    4077 },
{590   ,    4068 },
{588   ,    4059 },
{582   ,    4049 },
{574   ,    4037 },
{573   ,    4025 },
{568   ,    4011 },
{562   ,    3998 },
{559   ,    3986 },
{553   ,    3974 },
{551   ,    3963 },
{552   ,    3954 },
{549   ,    3946 },
{550   ,    3938 },
{551   ,    3932 },
{547   ,    3925 },
{548   ,    3920 },
{547   ,    3913 },
{550   ,    3907 },
{550   ,    3901 },
{548   ,    3895 },
{546   ,    3889 },
{547   ,    3883 },
{551   ,    3877 },
{548   ,    3871 },
{551   ,    3866 },
{548   ,    3860 },
{549   ,    3854 },
{550   ,    3849 },
{550   ,    3844 },
{551   ,    3838 },
{554   ,    3833 },
{552   ,    3828 },
{558   ,    3824 },
{557   ,    3819 },
{556   ,    3814 },
{557   ,    3810 },
{558   ,    3805 },
{561   ,    3801 },
{565   ,    3797 },
{566   ,    3794 },
{564   ,    3790 },
{569   ,    3787 },
{568   ,    3783 },
{570   ,    3780 },
{577   ,    3777 },
{575   ,    3774 },
{581   ,    3772 },
{582   ,    3769 },
{585   ,    3767 },
{588   ,    3764 },
{587   ,    3762 },
{593   ,    3760 },
{595   ,    3758 },
{597   ,    3755 },
{600   ,    3753 },
{604   ,    3751 },
{606   ,    3749 },
{605   ,    3747 },
{606   ,    3744 },
{611   ,    3742 },
{613   ,    3740 },
{616   ,    3738 },
{620   ,    3735 },
{624   ,    3733 },
{631   ,    3730 },
{632   ,    3727 },
{635   ,    3725 },
{645   ,    3722 },
{649   ,    3719 },
{653   ,    3716 },
{658   ,    3713 },
{655   ,    3709 },
{659   ,    3706 },
{672   ,    3702 },
{665   ,    3698 },
{682   ,    3694 },
{678   ,    3689 },
{679   ,    3684 },
{698   ,    3679 },
{687   ,    3673 },
{695   ,    3666 },
{711   ,    3659 },
{717   ,    3651 },
{722   ,    3643 },
{711   ,    3633 },
{729   ,    3621 },
{734   ,    3608 },
{723   ,    3592 },
{727   ,    3574 },
{751   ,    3552 },
{758   ,    3526 },
{749   ,    3491 },
{773   ,    3400 },
{773   ,    3400 },
{773   ,    3400 } 
};

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = {
{147   ,	4353  },
{147   ,  4328  },
{146   ,  4311  },
{146   ,  4296  },
{144   ,  4283  },
{144   ,  4271  },
{144   ,  4261  },
{142   ,  4250  },
{142   ,  4240  },
{142   ,  4229  },
{140   ,  4219  },
{141   ,  4209  },
{140   ,  4199  },
{140   ,  4189  },
{136   ,  4179  },
{139   ,  4170  },
{138   ,  4160  },
{138   ,  4151  },
{137   ,  4141  },
{137   ,  4132  },
{137   ,  4122  },
{137   ,  4113  },
{136   ,  4103  },
{137   ,  4094  },
{135   ,  4084  },
{135   ,  4075  },
{135   ,  4067  },
{136   ,  4060  },
{134   ,  4054  },
{134   ,  4046  },
{134   ,  4036  },
{135   ,  4022  },
{134   ,  4007  },
{133   ,  3994  },
{134   ,  3982  },
{134   ,  3973  },
{134   ,  3966  },
{133   ,  3960  },
{134   ,  3954  },
{134   ,  3948  },
{134   ,  3942  },
{133   ,  3935  },
{133   ,  3928  },
{133   ,  3921  },
{133   ,  3914  },
{132   ,  3907  },
{133   ,  3900  },
{133   ,  3894  },
{133   ,  3887  },
{134   ,  3881  },
{133   ,  3875  },
{132   ,  3868  },
{133   ,  3863  },
{133   ,  3858  },
{133   ,  3852  },
{133   ,  3847  },
{133   ,  3842  },
{133   ,  3837  },
{133   ,  3833  },
{134   ,  3829  },
{134   ,  3824  },
{133   ,  3820  },
{134   ,  3816  },
{134   ,  3812  },
{134   ,  3809  },
{135   ,  3805  },
{134   ,  3801  },
{135   ,  3798  },
{134   ,  3795  },
{136   ,  3792  },
{136   ,  3788  },
{137   ,  3785  },
{136   ,  3782  },
{136   ,  3779  },
{136   ,  3776  },
{137   ,  3774  },
{138   ,  3771  },
{139   ,  3769  },
{138   ,  3766  },
{137   ,  3763  },
{138   ,  3761  },
{140   ,  3759  },
{139   ,  3757  },
{140   ,  3754  },
{140   ,  3752  },
{141   ,  3750  },
{141   ,  3748  },
{140   ,  3745  },
{140   ,  3743  },
{141   ,  3740  },
{143   ,  3737  },
{143   ,  3734  },
{142   ,  3731  },
{142   ,  3727  },
{144   ,  3724  },
{144   ,  3720  },
{144   ,  3716  },
{144   ,  3711  },
{146   ,  3706  },
{145   ,  3701  },
{146   ,  3696  },
{145   ,  3691  },
{147   ,  3687  },
{149   ,  3685  },
{149   ,  3682  },
{149   ,  3678  },
{150   ,  3674  },
{154   ,  3668  },
{156   ,  3657  },
{160   ,  3639  },
{163   ,  3612  },
{169   ,  3575  },
{175   ,  3524  },
{184   ,  3456  },
{199   ,  3400  } 
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = {
{111   ,    4343},
{111   ,    4324},
{111   ,    4309},
{111   ,    4295},
{111   ,    4282},
{112   ,    4271},
{113   ,    4259},
{111   ,    4248},
{111   ,    4237},
{113   ,    4227},
{113   ,    4217},
{114   ,    4206},
{113   ,    4196},
{115   ,    4187},
{114   ,    4177},
{113   ,    4167},
{113   ,    4157},
{114   ,    4148},
{112   ,    4138},
{113   ,    4129},
{112   ,    4120},
{117   ,    4111},
{112   ,    4102},
{112   ,    4093},
{117   ,    4083},
{112   ,    4075},
{112   ,    4066},
{113   ,    4058},
{112   ,    4049},
{113   ,    4040},
{112   ,    4032},
{112   ,    4024},
{112   ,    4015},
{112   ,    4007},
{113   ,    4000},
{111   ,    3992},
{112   ,    3984},
{113   ,    3977},
{112   ,    3969},
{111   ,    3962},
{113   ,    3955},
{115   ,    3948},
{112   ,    3940},
{114   ,    3933},
{114   ,    3925},
{114   ,    3918},
{113   ,    3910},
{114   ,    3902},
{113   ,    3894},
{114   ,    3886},
{115   ,    3879},
{114   ,    3871},
{114   ,    3865},
{114   ,    3859},
{113   ,    3853},
{115   ,    3847},
{115   ,    3842},
{116   ,    3837},
{113   ,    3833},
{118   ,    3829},
{115   ,    3825},
{114   ,    3821},
{113   ,    3817},
{113   ,    3813},
{113   ,    3810},
{113   ,    3806},
{112   ,    3802},
{112   ,    3799},
{113   ,    3796},
{113   ,    3793},
{113   ,    3790},
{114   ,    3787},
{115   ,    3784},
{117   ,    3781},
{114   ,    3779},
{116   ,    3776},
{117   ,    3773},
{118   ,    3770},
{118   ,    3768},
{117   ,    3765},
{117   ,    3762},
{117   ,    3758},
{117   ,    3754},
{117   ,    3750},
{118   ,    3746},
{119   ,    3743},
{118   ,    3739},
{119   ,    3735},
{119   ,    3732},
{120   ,    3728},
{118   ,    3725},
{117   ,    3722},
{118   ,    3720},
{119   ,    3717},
{120   ,    3713},
{119   ,    3708},
{120   ,    3703},
{117   ,    3699},
{120   ,    3694},
{120   ,    3689},
{120   ,    3683},
{120   ,    3677},
{119   ,    3673},
{120   ,    3672},
{121   ,    3671},
{123   ,    3669},
{122   ,    3667},
{121   ,    3663},
{120   ,    3653},
{123   ,    3629},
{124   ,    3592},
{122   ,    3544},
{125   ,    3483},
{127   ,    3400},
{127   ,    3400} 
};

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = {
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0},	
{0	,		0}
};

/* ============================================================*/
/* function prototype*/
/* ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif

