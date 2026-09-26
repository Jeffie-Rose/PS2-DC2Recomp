#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterTexAnime__15mgCTextureAnimeFP15mgCTexAnimeDataP9mgCMemory
// Address: 0x13d580 - 0x13d724
void EnterTexAnime__15mgCTextureAnimeFP15mgCTexAnimeDataP9mgCMemory_0x13d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterTexAnime__15mgCTextureAnimeFP15mgCTexAnimeDataP9mgCMemory_0x13d580");
#endif

    switch (ctx->pc) {
        case 0x13d59cu: goto label_13d59c;
        default: break;
    }

    ctx->pc = 0x13d580u;

    // 0x13d580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13d588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d58c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13d58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d590: 0x80a50001  lb          $a1, 0x1($a1)
    ctx->pc = 0x13d590u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x13d594: 0xc04f518  jal         func_13D460
    ctx->pc = 0x13D594u;
    SET_GPR_U32(ctx, 31, 0x13D59Cu);
    ctx->pc = 0x13D460u;
    if (runtime->hasFunction(0x13D460u)) {
        auto targetFn = runtime->lookupFunction(0x13D460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D59Cu; }
        if (ctx->pc != 0x13D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NewTexAnimeGroupData__15mgCTextureAnimeFiP9mgCMemory_0x13d460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D59Cu; }
        if (ctx->pc != 0x13D59Cu) { return; }
    }
    ctx->pc = 0x13D59Cu;
label_13d59c:
    // 0x13d59c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D59Cu;
    {
        const bool branch_taken_0x13d59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d59c) {
            ctx->pc = 0x13D5B0u;
            goto label_13d5b0;
        }
    }
    ctx->pc = 0x13D5A4u;
    // 0x13d5a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5a8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x13D5A8u;
    {
        const bool branch_taken_0x13d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d5a8) {
            ctx->pc = 0x13D710u;
            goto label_13d710;
        }
    }
    ctx->pc = 0x13D5B0u;
label_13d5b0:
    // 0x13d5b0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x13d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13d5b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D5B4u;
    {
        const bool branch_taken_0x13d5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d5b4) {
            ctx->pc = 0x13D5C8u;
            goto label_13d5c8;
        }
    }
    ctx->pc = 0x13D5BCu;
    // 0x13d5bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5c0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x13D5C0u;
    {
        const bool branch_taken_0x13d5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d5c0) {
            ctx->pc = 0x13D710u;
            goto label_13d710;
        }
    }
    ctx->pc = 0x13D5C8u;
label_13d5c8:
    // 0x13d5c8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x13d5c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13d5cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x13d5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d5d0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x13d5d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x13d5d4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x13d5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d5d8: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x13d5d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13d5dc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x13d5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d5e0: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x13d5e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x13d5e4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x13d5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d5e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13d5ec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13d5f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13d5f4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x13d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x13d5f8: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x13d5f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13d5fc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x13d5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d600: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x13d600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x13d604: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x13d604u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d608: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x13d608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13d60c: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x13d60cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d610: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x13d610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x13d614: 0xa4430012  sh          $v1, 0x12($v0)
    ctx->pc = 0x13d614u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d618: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x13d618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13d61c: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x13d61cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d620: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x13d624: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x13d624u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d628: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x13d628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13d62c: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x13d62cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d630: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x13d630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x13d634: 0xa443001a  sh          $v1, 0x1A($v0)
    ctx->pc = 0x13d634u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d638: 0x8603001c  lh          $v1, 0x1C($s0)
    ctx->pc = 0x13d638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13d63c: 0xa443001c  sh          $v1, 0x1C($v0)
    ctx->pc = 0x13d63cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d640: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x13d640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x13d644: 0xa443001e  sh          $v1, 0x1E($v0)
    ctx->pc = 0x13d644u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d648: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x13d648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13d64c: 0xa4430020  sh          $v1, 0x20($v0)
    ctx->pc = 0x13d64cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d650: 0x86030022  lh          $v1, 0x22($s0)
    ctx->pc = 0x13d650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x13d654: 0xa4430022  sh          $v1, 0x22($v0)
    ctx->pc = 0x13d654u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d658: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x13d658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13d65c: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x13d65cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d660: 0x86030026  lh          $v1, 0x26($s0)
    ctx->pc = 0x13d660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x13d664: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x13d664u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d668: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x13d668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x13d66c: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x13d66cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d670: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x13d670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x13d674: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x13d674u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d678: 0x8203002c  lb          $v1, 0x2C($s0)
    ctx->pc = 0x13d678u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13d67c: 0xa043002c  sb          $v1, 0x2C($v0)
    ctx->pc = 0x13d67cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d680: 0x8203002d  lb          $v1, 0x2D($s0)
    ctx->pc = 0x13d680u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x13d684: 0xa043002d  sb          $v1, 0x2D($v0)
    ctx->pc = 0x13d684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d688: 0x8203002e  lb          $v1, 0x2E($s0)
    ctx->pc = 0x13d688u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x13d68c: 0xa043002e  sb          $v1, 0x2E($v0)
    ctx->pc = 0x13d68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d690: 0x9203002f  lbu         $v1, 0x2F($s0)
    ctx->pc = 0x13d690u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x13d694: 0xa043002f  sb          $v1, 0x2F($v0)
    ctx->pc = 0x13d694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 47), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d698: 0x92060030  lbu         $a2, 0x30($s0)
    ctx->pc = 0x13d698u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x13d69c: 0x92050031  lbu         $a1, 0x31($s0)
    ctx->pc = 0x13d69cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x13d6a0: 0x92040032  lbu         $a0, 0x32($s0)
    ctx->pc = 0x13d6a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x13d6a4: 0x92030033  lbu         $v1, 0x33($s0)
    ctx->pc = 0x13d6a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
    // 0x13d6a8: 0xa0460030  sb          $a2, 0x30($v0)
    ctx->pc = 0x13d6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x13d6ac: 0xa0450031  sb          $a1, 0x31($v0)
    ctx->pc = 0x13d6acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 5));
    // 0x13d6b0: 0xa0440032  sb          $a0, 0x32($v0)
    ctx->pc = 0x13d6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d6b4: 0xa0430033  sb          $v1, 0x33($v0)
    ctx->pc = 0x13d6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d6b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x13d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13d6bc: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13D6BCu;
    {
        const bool branch_taken_0x13d6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d6bc) {
            ctx->pc = 0x13D70Cu;
            goto label_13d70c;
        }
    }
    ctx->pc = 0x13D6C4u;
    // 0x13d6c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d6c8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13D6C8u;
    {
        const bool branch_taken_0x13d6c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d6c8) {
            ctx->pc = 0x13D70Cu;
            goto label_13d70c;
        }
    }
    ctx->pc = 0x13D6D0u;
    // 0x13d6d0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x13d6d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13d6d4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13d6d8: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x13d6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x13d6dc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x13d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13d6e0: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x13d6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x13d6e4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13d6e8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x13d6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d6ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d6f0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x13d6f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13d6f4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13d6f8: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x13d6f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x13d6fc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x13d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13d700: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x13d700u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x13d704: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13d704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13d708: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x13d708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
label_13d70c:
    // 0x13d70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d710:
    // 0x13d710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d718: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13d718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13d71c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D724u;
}
