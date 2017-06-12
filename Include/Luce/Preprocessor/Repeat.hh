#ifndef LUCE_HEADER_PREPROCESSOR_REPEAT_HH
#define LUCE_HEADER_PREPROCESSOR_REPEAT_HH
#include <Luce/Preprocessor/Configuration.hh>

#define LUCE_MACRO_REPEAT(count, repeat) LUCE_MACRO_I_REPEAT(count, repeat)
#define LUCE_MACRO_I_REPEAT(count, repeat) \
LUCE_MACRO_I_REPEAT_IO(LUCE_MACRO_I_REPEAT_##count(repeat))
#define LUCE_MACRO_I_REPEAT_IO(input) input

#define LUCE_MACRO_I_REPEAT_0(repeat)
#define LUCE_MACRO_I_REPEAT_1(repeat) LUCE_MACRO_I_REPEAT_0(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_2(repeat) LUCE_MACRO_I_REPEAT_1(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_3(repeat) LUCE_MACRO_I_REPEAT_2(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_4(repeat) LUCE_MACRO_I_REPEAT_3(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_5(repeat) LUCE_MACRO_I_REPEAT_4(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_6(repeat) LUCE_MACRO_I_REPEAT_5(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_7(repeat) LUCE_MACRO_I_REPEAT_6(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_8(repeat) LUCE_MACRO_I_REPEAT_7(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_9(repeat) LUCE_MACRO_I_REPEAT_8(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_10(repeat) LUCE_MACRO_I_REPEAT_9(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_11(repeat) LUCE_MACRO_I_REPEAT_10(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_12(repeat) LUCE_MACRO_I_REPEAT_11(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_13(repeat) LUCE_MACRO_I_REPEAT_12(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_14(repeat) LUCE_MACRO_I_REPEAT_13(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_15(repeat) LUCE_MACRO_I_REPEAT_14(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_16(repeat) LUCE_MACRO_I_REPEAT_15(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_17(repeat) LUCE_MACRO_I_REPEAT_16(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_18(repeat) LUCE_MACRO_I_REPEAT_17(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_19(repeat) LUCE_MACRO_I_REPEAT_18(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_20(repeat) LUCE_MACRO_I_REPEAT_19(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_21(repeat) LUCE_MACRO_I_REPEAT_20(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_22(repeat) LUCE_MACRO_I_REPEAT_21(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_23(repeat) LUCE_MACRO_I_REPEAT_22(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_24(repeat) LUCE_MACRO_I_REPEAT_23(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_25(repeat) LUCE_MACRO_I_REPEAT_24(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_26(repeat) LUCE_MACRO_I_REPEAT_25(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_27(repeat) LUCE_MACRO_I_REPEAT_26(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_28(repeat) LUCE_MACRO_I_REPEAT_27(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_29(repeat) LUCE_MACRO_I_REPEAT_28(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_30(repeat) LUCE_MACRO_I_REPEAT_29(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_31(repeat) LUCE_MACRO_I_REPEAT_30(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_32(repeat) LUCE_MACRO_I_REPEAT_31(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_33(repeat) LUCE_MACRO_I_REPEAT_32(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_34(repeat) LUCE_MACRO_I_REPEAT_33(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_35(repeat) LUCE_MACRO_I_REPEAT_34(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_36(repeat) LUCE_MACRO_I_REPEAT_35(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_37(repeat) LUCE_MACRO_I_REPEAT_36(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_38(repeat) LUCE_MACRO_I_REPEAT_37(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_39(repeat) LUCE_MACRO_I_REPEAT_38(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_40(repeat) LUCE_MACRO_I_REPEAT_39(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_41(repeat) LUCE_MACRO_I_REPEAT_40(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_42(repeat) LUCE_MACRO_I_REPEAT_41(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_43(repeat) LUCE_MACRO_I_REPEAT_42(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_44(repeat) LUCE_MACRO_I_REPEAT_43(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_45(repeat) LUCE_MACRO_I_REPEAT_44(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_46(repeat) LUCE_MACRO_I_REPEAT_45(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_47(repeat) LUCE_MACRO_I_REPEAT_46(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_48(repeat) LUCE_MACRO_I_REPEAT_47(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_49(repeat) LUCE_MACRO_I_REPEAT_48(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_50(repeat) LUCE_MACRO_I_REPEAT_49(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_51(repeat) LUCE_MACRO_I_REPEAT_50(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_52(repeat) LUCE_MACRO_I_REPEAT_51(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_53(repeat) LUCE_MACRO_I_REPEAT_52(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_54(repeat) LUCE_MACRO_I_REPEAT_53(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_55(repeat) LUCE_MACRO_I_REPEAT_54(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_56(repeat) LUCE_MACRO_I_REPEAT_55(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_57(repeat) LUCE_MACRO_I_REPEAT_56(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_58(repeat) LUCE_MACRO_I_REPEAT_57(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_59(repeat) LUCE_MACRO_I_REPEAT_58(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_60(repeat) LUCE_MACRO_I_REPEAT_59(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_61(repeat) LUCE_MACRO_I_REPEAT_60(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_62(repeat) LUCE_MACRO_I_REPEAT_61(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_63(repeat) LUCE_MACRO_I_REPEAT_62(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_64(repeat) LUCE_MACRO_I_REPEAT_63(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_65(repeat) LUCE_MACRO_I_REPEAT_64(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_66(repeat) LUCE_MACRO_I_REPEAT_65(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_67(repeat) LUCE_MACRO_I_REPEAT_66(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_68(repeat) LUCE_MACRO_I_REPEAT_67(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_69(repeat) LUCE_MACRO_I_REPEAT_68(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_70(repeat) LUCE_MACRO_I_REPEAT_69(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_71(repeat) LUCE_MACRO_I_REPEAT_70(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_72(repeat) LUCE_MACRO_I_REPEAT_71(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_73(repeat) LUCE_MACRO_I_REPEAT_72(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_74(repeat) LUCE_MACRO_I_REPEAT_73(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_75(repeat) LUCE_MACRO_I_REPEAT_74(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_76(repeat) LUCE_MACRO_I_REPEAT_75(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_77(repeat) LUCE_MACRO_I_REPEAT_76(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_78(repeat) LUCE_MACRO_I_REPEAT_77(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_79(repeat) LUCE_MACRO_I_REPEAT_78(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_80(repeat) LUCE_MACRO_I_REPEAT_79(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_81(repeat) LUCE_MACRO_I_REPEAT_80(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_82(repeat) LUCE_MACRO_I_REPEAT_81(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_83(repeat) LUCE_MACRO_I_REPEAT_82(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_84(repeat) LUCE_MACRO_I_REPEAT_83(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_85(repeat) LUCE_MACRO_I_REPEAT_84(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_86(repeat) LUCE_MACRO_I_REPEAT_85(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_87(repeat) LUCE_MACRO_I_REPEAT_86(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_88(repeat) LUCE_MACRO_I_REPEAT_87(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_89(repeat) LUCE_MACRO_I_REPEAT_88(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_90(repeat) LUCE_MACRO_I_REPEAT_89(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_91(repeat) LUCE_MACRO_I_REPEAT_90(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_92(repeat) LUCE_MACRO_I_REPEAT_91(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_93(repeat) LUCE_MACRO_I_REPEAT_92(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_94(repeat) LUCE_MACRO_I_REPEAT_93(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_95(repeat) LUCE_MACRO_I_REPEAT_94(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_96(repeat) LUCE_MACRO_I_REPEAT_95(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_97(repeat) LUCE_MACRO_I_REPEAT_96(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_98(repeat) LUCE_MACRO_I_REPEAT_97(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_99(repeat) LUCE_MACRO_I_REPEAT_98(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_100(repeat) LUCE_MACRO_I_REPEAT_99(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_101(repeat) LUCE_MACRO_I_REPEAT_100(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_102(repeat) LUCE_MACRO_I_REPEAT_101(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_103(repeat) LUCE_MACRO_I_REPEAT_102(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_104(repeat) LUCE_MACRO_I_REPEAT_103(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_105(repeat) LUCE_MACRO_I_REPEAT_104(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_106(repeat) LUCE_MACRO_I_REPEAT_105(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_107(repeat) LUCE_MACRO_I_REPEAT_106(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_108(repeat) LUCE_MACRO_I_REPEAT_107(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_109(repeat) LUCE_MACRO_I_REPEAT_108(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_110(repeat) LUCE_MACRO_I_REPEAT_109(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_111(repeat) LUCE_MACRO_I_REPEAT_110(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_112(repeat) LUCE_MACRO_I_REPEAT_111(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_113(repeat) LUCE_MACRO_I_REPEAT_112(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_114(repeat) LUCE_MACRO_I_REPEAT_113(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_115(repeat) LUCE_MACRO_I_REPEAT_114(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_116(repeat) LUCE_MACRO_I_REPEAT_115(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_117(repeat) LUCE_MACRO_I_REPEAT_116(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_118(repeat) LUCE_MACRO_I_REPEAT_117(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_119(repeat) LUCE_MACRO_I_REPEAT_118(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_120(repeat) LUCE_MACRO_I_REPEAT_119(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_121(repeat) LUCE_MACRO_I_REPEAT_120(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_122(repeat) LUCE_MACRO_I_REPEAT_121(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_123(repeat) LUCE_MACRO_I_REPEAT_122(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_124(repeat) LUCE_MACRO_I_REPEAT_123(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_125(repeat) LUCE_MACRO_I_REPEAT_124(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_126(repeat) LUCE_MACRO_I_REPEAT_125(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_127(repeat) LUCE_MACRO_I_REPEAT_126(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_128(repeat) LUCE_MACRO_I_REPEAT_127(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_129(repeat) LUCE_MACRO_I_REPEAT_128(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_130(repeat) LUCE_MACRO_I_REPEAT_129(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_131(repeat) LUCE_MACRO_I_REPEAT_130(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_132(repeat) LUCE_MACRO_I_REPEAT_131(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_133(repeat) LUCE_MACRO_I_REPEAT_132(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_134(repeat) LUCE_MACRO_I_REPEAT_133(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_135(repeat) LUCE_MACRO_I_REPEAT_134(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_136(repeat) LUCE_MACRO_I_REPEAT_135(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_137(repeat) LUCE_MACRO_I_REPEAT_136(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_138(repeat) LUCE_MACRO_I_REPEAT_137(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_139(repeat) LUCE_MACRO_I_REPEAT_138(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_140(repeat) LUCE_MACRO_I_REPEAT_139(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_141(repeat) LUCE_MACRO_I_REPEAT_140(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_142(repeat) LUCE_MACRO_I_REPEAT_141(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_143(repeat) LUCE_MACRO_I_REPEAT_142(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_144(repeat) LUCE_MACRO_I_REPEAT_143(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_145(repeat) LUCE_MACRO_I_REPEAT_144(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_146(repeat) LUCE_MACRO_I_REPEAT_145(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_147(repeat) LUCE_MACRO_I_REPEAT_146(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_148(repeat) LUCE_MACRO_I_REPEAT_147(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_149(repeat) LUCE_MACRO_I_REPEAT_148(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_150(repeat) LUCE_MACRO_I_REPEAT_149(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_151(repeat) LUCE_MACRO_I_REPEAT_150(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_152(repeat) LUCE_MACRO_I_REPEAT_151(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_153(repeat) LUCE_MACRO_I_REPEAT_152(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_154(repeat) LUCE_MACRO_I_REPEAT_153(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_155(repeat) LUCE_MACRO_I_REPEAT_154(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_156(repeat) LUCE_MACRO_I_REPEAT_155(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_157(repeat) LUCE_MACRO_I_REPEAT_156(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_158(repeat) LUCE_MACRO_I_REPEAT_157(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_159(repeat) LUCE_MACRO_I_REPEAT_158(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_160(repeat) LUCE_MACRO_I_REPEAT_159(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_161(repeat) LUCE_MACRO_I_REPEAT_160(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_162(repeat) LUCE_MACRO_I_REPEAT_161(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_163(repeat) LUCE_MACRO_I_REPEAT_162(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_164(repeat) LUCE_MACRO_I_REPEAT_163(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_165(repeat) LUCE_MACRO_I_REPEAT_164(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_166(repeat) LUCE_MACRO_I_REPEAT_165(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_167(repeat) LUCE_MACRO_I_REPEAT_166(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_168(repeat) LUCE_MACRO_I_REPEAT_167(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_169(repeat) LUCE_MACRO_I_REPEAT_168(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_170(repeat) LUCE_MACRO_I_REPEAT_169(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_171(repeat) LUCE_MACRO_I_REPEAT_170(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_172(repeat) LUCE_MACRO_I_REPEAT_171(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_173(repeat) LUCE_MACRO_I_REPEAT_172(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_174(repeat) LUCE_MACRO_I_REPEAT_173(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_175(repeat) LUCE_MACRO_I_REPEAT_174(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_176(repeat) LUCE_MACRO_I_REPEAT_175(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_177(repeat) LUCE_MACRO_I_REPEAT_176(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_178(repeat) LUCE_MACRO_I_REPEAT_177(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_179(repeat) LUCE_MACRO_I_REPEAT_178(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_180(repeat) LUCE_MACRO_I_REPEAT_179(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_181(repeat) LUCE_MACRO_I_REPEAT_180(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_182(repeat) LUCE_MACRO_I_REPEAT_181(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_183(repeat) LUCE_MACRO_I_REPEAT_182(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_184(repeat) LUCE_MACRO_I_REPEAT_183(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_185(repeat) LUCE_MACRO_I_REPEAT_184(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_186(repeat) LUCE_MACRO_I_REPEAT_185(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_187(repeat) LUCE_MACRO_I_REPEAT_186(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_188(repeat) LUCE_MACRO_I_REPEAT_187(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_189(repeat) LUCE_MACRO_I_REPEAT_188(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_190(repeat) LUCE_MACRO_I_REPEAT_189(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_191(repeat) LUCE_MACRO_I_REPEAT_190(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_192(repeat) LUCE_MACRO_I_REPEAT_191(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_193(repeat) LUCE_MACRO_I_REPEAT_192(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_194(repeat) LUCE_MACRO_I_REPEAT_193(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_195(repeat) LUCE_MACRO_I_REPEAT_194(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_196(repeat) LUCE_MACRO_I_REPEAT_195(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_197(repeat) LUCE_MACRO_I_REPEAT_196(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_198(repeat) LUCE_MACRO_I_REPEAT_197(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_199(repeat) LUCE_MACRO_I_REPEAT_198(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_200(repeat) LUCE_MACRO_I_REPEAT_199(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_201(repeat) LUCE_MACRO_I_REPEAT_200(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_202(repeat) LUCE_MACRO_I_REPEAT_201(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_203(repeat) LUCE_MACRO_I_REPEAT_202(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_204(repeat) LUCE_MACRO_I_REPEAT_203(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_205(repeat) LUCE_MACRO_I_REPEAT_204(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_206(repeat) LUCE_MACRO_I_REPEAT_205(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_207(repeat) LUCE_MACRO_I_REPEAT_206(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_208(repeat) LUCE_MACRO_I_REPEAT_207(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_209(repeat) LUCE_MACRO_I_REPEAT_208(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_210(repeat) LUCE_MACRO_I_REPEAT_209(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_211(repeat) LUCE_MACRO_I_REPEAT_210(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_212(repeat) LUCE_MACRO_I_REPEAT_211(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_213(repeat) LUCE_MACRO_I_REPEAT_212(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_214(repeat) LUCE_MACRO_I_REPEAT_213(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_215(repeat) LUCE_MACRO_I_REPEAT_214(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_216(repeat) LUCE_MACRO_I_REPEAT_215(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_217(repeat) LUCE_MACRO_I_REPEAT_216(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_218(repeat) LUCE_MACRO_I_REPEAT_217(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_219(repeat) LUCE_MACRO_I_REPEAT_218(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_220(repeat) LUCE_MACRO_I_REPEAT_219(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_221(repeat) LUCE_MACRO_I_REPEAT_220(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_222(repeat) LUCE_MACRO_I_REPEAT_221(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_223(repeat) LUCE_MACRO_I_REPEAT_222(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_224(repeat) LUCE_MACRO_I_REPEAT_223(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_225(repeat) LUCE_MACRO_I_REPEAT_224(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_226(repeat) LUCE_MACRO_I_REPEAT_225(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_227(repeat) LUCE_MACRO_I_REPEAT_226(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_228(repeat) LUCE_MACRO_I_REPEAT_227(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_229(repeat) LUCE_MACRO_I_REPEAT_228(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_230(repeat) LUCE_MACRO_I_REPEAT_229(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_231(repeat) LUCE_MACRO_I_REPEAT_230(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_232(repeat) LUCE_MACRO_I_REPEAT_231(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_233(repeat) LUCE_MACRO_I_REPEAT_232(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_234(repeat) LUCE_MACRO_I_REPEAT_233(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_235(repeat) LUCE_MACRO_I_REPEAT_234(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_236(repeat) LUCE_MACRO_I_REPEAT_235(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_237(repeat) LUCE_MACRO_I_REPEAT_236(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_238(repeat) LUCE_MACRO_I_REPEAT_237(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_239(repeat) LUCE_MACRO_I_REPEAT_238(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_240(repeat) LUCE_MACRO_I_REPEAT_239(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_241(repeat) LUCE_MACRO_I_REPEAT_240(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_242(repeat) LUCE_MACRO_I_REPEAT_241(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_243(repeat) LUCE_MACRO_I_REPEAT_242(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_244(repeat) LUCE_MACRO_I_REPEAT_243(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_245(repeat) LUCE_MACRO_I_REPEAT_244(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_246(repeat) LUCE_MACRO_I_REPEAT_245(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_247(repeat) LUCE_MACRO_I_REPEAT_246(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_248(repeat) LUCE_MACRO_I_REPEAT_247(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_249(repeat) LUCE_MACRO_I_REPEAT_248(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_250(repeat) LUCE_MACRO_I_REPEAT_249(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_251(repeat) LUCE_MACRO_I_REPEAT_250(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_252(repeat) LUCE_MACRO_I_REPEAT_251(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_253(repeat) LUCE_MACRO_I_REPEAT_252(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_254(repeat) LUCE_MACRO_I_REPEAT_253(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_255(repeat) LUCE_MACRO_I_REPEAT_254(repeat)##repeat
#define LUCE_MACRO_I_REPEAT_256(repeat) LUCE_MACRO_I_REPEAT_255(repeat)##repeat

#if LUCE_MACRO_PP_IS_INT_2B
#include "Detail/Repeat2B.hh"
#endif
#endif