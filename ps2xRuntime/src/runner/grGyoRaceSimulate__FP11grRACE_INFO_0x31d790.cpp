#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: grGyoRaceSimulate__FP11grRACE_INFO
// Address: 0x31d790 - 0x31da28
void grGyoRaceSimulate__FP11grRACE_INFO_0x31d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("grGyoRaceSimulate__FP11grRACE_INFO_0x31d790");
#endif

    switch (ctx->pc) {
        case 0x31d7ccu: goto label_31d7cc;
        case 0x31d7d8u: goto label_31d7d8;
        case 0x31d7f8u: goto label_31d7f8;
        case 0x31d8b8u: goto label_31d8b8;
        case 0x31d9dcu: goto label_31d9dc;
        case 0x31d9ecu: goto label_31d9ec;
        case 0x31d9f8u: goto label_31d9f8;
        case 0x31da04u: goto label_31da04;
        default: break;
    }

    ctx->pc = 0x31d790u;

    // 0x31d790: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x31d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x31d794: 0x3c023526  lui         $v0, 0x3526
    ctx->pc = 0x31d794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13606 << 16));
    // 0x31d798: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31d79c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31d7a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31d7a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31d7a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31d7a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d7b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31d7b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d7b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31d7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d7bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d7c0: 0x3451d02f  ori         $s1, $v0, 0xD02F
    ctx->pc = 0x31d7c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53295);
    // 0x31d7c4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x31D7C4u;
    {
        const bool branch_taken_0x31d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7C4u;
            // 0x31d7c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7c4) {
            ctx->pc = 0x31D9B8u;
            goto label_31d9b8;
        }
    }
    ctx->pc = 0x31D7CCu;
label_31d7cc:
    // 0x31d7cc: 0x2455000c  addiu       $s5, $v0, 0xC
    ctx->pc = 0x31d7ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x31d7d0: 0xc04a422  jal         func_129088
    ctx->pc = 0x31D7D0u;
    SET_GPR_U32(ctx, 31, 0x31D7D8u);
    ctx->pc = 0x31D7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7D0u;
            // 0x31d7d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7D8u; }
        if (ctx->pc != 0x31D7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7D8u; }
        if (ctx->pc != 0x31D7D8u) { return; }
    }
    ctx->pc = 0x31D7D8u;
label_31d7d8:
    // 0x31d7d8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x31d7d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d7dc: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x31D7DCu;
    {
        const bool branch_taken_0x31d7dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7DCu;
            // 0x31d7e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7dc) {
            ctx->pc = 0x31D8DCu;
            goto label_31d8dc;
        }
    }
    ctx->pc = 0x31D7E4u;
    // 0x31d7e4: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x31d7e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31d7e8: 0x1420002f  bnez        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x31D7E8u;
    {
        const bool branch_taken_0x31d7e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7E8u;
            // 0x31d7ec: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d7e8) {
            ctx->pc = 0x31D8A8u;
            goto label_31d8a8;
        }
    }
    ctx->pc = 0x31D7F0u;
    // 0x31d7f0: 0x3c055d58  lui         $a1, 0x5D58
    ctx->pc = 0x31d7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23896 << 16));
    // 0x31d7f4: 0x34a58b65  ori         $a1, $a1, 0x8B65
    ctx->pc = 0x31d7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35685);
label_31d7f8:
    // 0x31d7f8: 0x2a3c021  addu        $t8, $s5, $v1
    ctx->pc = 0x31d7f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x31d7fc: 0x83070000  lb          $a3, 0x0($t8)
    ctx->pc = 0x31d7fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x31d800: 0x2254018  mult        $t0, $s1, $a1
    ctx->pc = 0x31d800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x31d804: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x31d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x31d808: 0x830d0001  lb          $t5, 0x1($t8)
    ctx->pc = 0x31d808u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x31d80c: 0x830c0002  lb          $t4, 0x2($t8)
    ctx->pc = 0x31d80cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x31d810: 0x64302a  slt         $a2, $v1, $a0
    ctx->pc = 0x31d810u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31d814: 0x830b0003  lb          $t3, 0x3($t8)
    ctx->pc = 0x31d814u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x31d818: 0x250f0001  addiu       $t7, $t0, 0x1
    ctx->pc = 0x31d818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31d81c: 0x830a0004  lb          $t2, 0x4($t8)
    ctx->pc = 0x31d81cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x31d820: 0x83090005  lb          $t1, 0x5($t8)
    ctx->pc = 0x31d820u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 5)));
    // 0x31d824: 0xef7018  mult        $t6, $a3, $t7
    ctx->pc = 0x31d824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x31d828: 0x83080006  lb          $t0, 0x6($t8)
    ctx->pc = 0x31d828u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 6)));
    // 0x31d82c: 0x26e9821  addu        $s3, $s3, $t6
    ctx->pc = 0x31d82cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
    // 0x31d830: 0x83070007  lb          $a3, 0x7($t8)
    ctx->pc = 0x31d830u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 24), 7)));
    // 0x31d834: 0x1e57018  mult        $t6, $t7, $a1
    ctx->pc = 0x31d834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x31d838: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x31d838u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x31d83c: 0x1ae6818  mult        $t5, $t5, $t6
    ctx->pc = 0x31d83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x31d840: 0x26d9821  addu        $s3, $s3, $t5
    ctx->pc = 0x31d840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x31d844: 0x1c56818  mult        $t5, $t6, $a1
    ctx->pc = 0x31d844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x31d848: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x31d848u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x31d84c: 0x18d6018  mult        $t4, $t4, $t5
    ctx->pc = 0x31d84cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x31d850: 0x26c9821  addu        $s3, $s3, $t4
    ctx->pc = 0x31d850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x31d854: 0x1a56018  mult        $t4, $t5, $a1
    ctx->pc = 0x31d854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x31d858: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x31d858u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x31d85c: 0x16c5818  mult        $t3, $t3, $t4
    ctx->pc = 0x31d85cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x31d860: 0x26b9821  addu        $s3, $s3, $t3
    ctx->pc = 0x31d860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x31d864: 0x1855818  mult        $t3, $t4, $a1
    ctx->pc = 0x31d864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x31d868: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x31d868u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31d86c: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x31d86cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x31d870: 0x26a9821  addu        $s3, $s3, $t2
    ctx->pc = 0x31d870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
    // 0x31d874: 0x1655018  mult        $t2, $t3, $a1
    ctx->pc = 0x31d874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x31d878: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x31d878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31d87c: 0x12a4818  mult        $t1, $t1, $t2
    ctx->pc = 0x31d87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x31d880: 0x2699821  addu        $s3, $s3, $t1
    ctx->pc = 0x31d880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x31d884: 0x1454818  mult        $t1, $t2, $a1
    ctx->pc = 0x31d884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x31d888: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31d888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31d88c: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x31d88cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x31d890: 0x2689821  addu        $s3, $s3, $t0
    ctx->pc = 0x31d890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x31d894: 0x1254018  mult        $t0, $t1, $a1
    ctx->pc = 0x31d894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x31d898: 0x25110001  addiu       $s1, $t0, 0x1
    ctx->pc = 0x31d898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31d89c: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x31d89cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x31d8a0: 0x14c0ffd5  bnez        $a2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x31D8A0u;
    {
        const bool branch_taken_0x31d8a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D8A0u;
            // 0x31d8a4: 0x2679821  addu        $s3, $s3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8a0) {
            ctx->pc = 0x31D7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31d7f8;
        }
    }
    ctx->pc = 0x31D8A8u;
label_31d8a8:
    // 0x31d8a8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x31d8a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d8ac: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x31D8ACu;
    {
        const bool branch_taken_0x31d8ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D8ACu;
            // 0x31d8b0: 0x3c045d58  lui         $a0, 0x5D58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8ac) {
            ctx->pc = 0x31D8DCu;
            goto label_31d8dc;
        }
    }
    ctx->pc = 0x31D8B4u;
    // 0x31d8b4: 0x34878b65  ori         $a3, $a0, 0x8B65
    ctx->pc = 0x31d8b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35685);
label_31d8b8:
    // 0x31d8b8: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x31d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x31d8bc: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x31d8bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d8c0: 0x2273018  mult        $a2, $s1, $a3
    ctx->pc = 0x31d8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31d8c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31d8c8: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x31d8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31d8cc: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x31d8ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d8d0: 0x62202a  slt         $a0, $v1, $v0
    ctx->pc = 0x31d8d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d8d4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31D8D4u;
    {
        const bool branch_taken_0x31d8d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D8D4u;
            // 0x31d8d8: 0x2659821  addu        $s3, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8d4) {
            ctx->pc = 0x31D8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31d8b8;
        }
    }
    ctx->pc = 0x31D8DCu;
label_31d8dc:
    // 0x31d8dc: 0x0  nop
    ctx->pc = 0x31d8dcu;
    // NOP
    // 0x31d8e0: 0x3c025d58  lui         $v0, 0x5D58
    ctx->pc = 0x31d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23896 << 16));
    // 0x31d8e4: 0x34428b65  ori         $v0, $v0, 0x8B65
    ctx->pc = 0x31d8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35685);
    // 0x31d8e8: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x31d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x31d8ec: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x31d8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x31d8f0: 0x8eab001c  lw          $t3, 0x1C($s5)
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x31d8f4: 0x8eaa0020  lw          $t2, 0x20($s5)
    ctx->pc = 0x31d8f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x31d8f8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x31d8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x31d8fc: 0x8ea90024  lw          $t1, 0x24($s5)
    ctx->pc = 0x31d8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x31d900: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31d900u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x31d904: 0x8ea80028  lw          $t0, 0x28($s5)
    ctx->pc = 0x31d904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x31d908: 0x248d0001  addiu       $t5, $a0, 0x1
    ctx->pc = 0x31d908u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31d90c: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x31d90cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x31d910: 0x6d6018  mult        $t4, $v1, $t5
    ctx->pc = 0x31d910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x31d914: 0x8ea60030  lw          $a2, 0x30($s5)
    ctx->pc = 0x31d914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x31d918: 0x8ea50034  lw          $a1, 0x34($s5)
    ctx->pc = 0x31d918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x31d91c: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x31d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x31d920: 0x26c9821  addu        $s3, $s3, $t4
    ctx->pc = 0x31d920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x31d924: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x31d924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x31d928: 0x1a26018  mult        $t4, $t5, $v0
    ctx->pc = 0x31d928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x31d92c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x31d92cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x31d930: 0x16c5818  mult        $t3, $t3, $t4
    ctx->pc = 0x31d930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x31d934: 0x26b9821  addu        $s3, $s3, $t3
    ctx->pc = 0x31d934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x31d938: 0x1825818  mult        $t3, $t4, $v0
    ctx->pc = 0x31d938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x31d93c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x31d93cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31d940: 0x14b5018  mult        $t2, $t2, $t3
    ctx->pc = 0x31d940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x31d944: 0x26a9821  addu        $s3, $s3, $t2
    ctx->pc = 0x31d944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
    // 0x31d948: 0x1625018  mult        $t2, $t3, $v0
    ctx->pc = 0x31d948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x31d94c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x31d94cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x31d950: 0x12a4818  mult        $t1, $t1, $t2
    ctx->pc = 0x31d950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x31d954: 0x2699821  addu        $s3, $s3, $t1
    ctx->pc = 0x31d954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x31d958: 0x1424818  mult        $t1, $t2, $v0
    ctx->pc = 0x31d958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x31d95c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31d95cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31d960: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x31d960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x31d964: 0x2689821  addu        $s3, $s3, $t0
    ctx->pc = 0x31d964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x31d968: 0x1224018  mult        $t0, $t1, $v0
    ctx->pc = 0x31d968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x31d96c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31d96cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31d970: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x31d970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x31d974: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x31d974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x31d978: 0x1023818  mult        $a3, $t0, $v0
    ctx->pc = 0x31d978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x31d97c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31d97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31d980: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x31d980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31d984: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x31d984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x31d988: 0xe23018  mult        $a2, $a3, $v0
    ctx->pc = 0x31d988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x31d98c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31d98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31d990: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x31d990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d994: 0x2659821  addu        $s3, $s3, $a1
    ctx->pc = 0x31d994u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x31d998: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x31d998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d99c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d9a0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x31d9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x31d9a4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x31d9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31d9a8: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x31d9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x31d9ac: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x31d9acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d9b0: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x31d9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31d9b4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x31d9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_31d9b8:
    // 0x31d9b8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x31d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31d9bc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x31d9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d9c0: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x31D9C0u;
    {
        const bool branch_taken_0x31d9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D9C0u;
            // 0x31d9c4: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9c0) {
            ctx->pc = 0x31D7CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31d7cc;
        }
    }
    ctx->pc = 0x31D9C8u;
    // 0x31d9c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31d9cc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31D9CCu;
    {
        const bool branch_taken_0x31d9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d9cc) {
            ctx->pc = 0x31D9E4u;
            goto label_31d9e4;
        }
    }
    ctx->pc = 0x31D9D4u;
    // 0x31d9d4: 0xc0c8120  jal         func_320480
    ctx->pc = 0x31D9D4u;
    SET_GPR_U32(ctx, 31, 0x31D9DCu);
    ctx->pc = 0x31D9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D9D4u;
            // 0x31d9d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320480u;
    if (runtime->hasFunction(0x320480u)) {
        auto targetFn = runtime->lookupFunction(0x320480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D9DCu; }
        if (ctx->pc != 0x31D9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        init_rnd__FUi_0x320480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D9DCu; }
        if (ctx->pc != 0x31D9DCu) { return; }
    }
    ctx->pc = 0x31D9DCu;
label_31d9dc:
    // 0x31d9dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31D9DCu;
    {
        const bool branch_taken_0x31d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D9DCu;
            // 0x31d9e0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9dc) {
            ctx->pc = 0x31D9F0u;
            goto label_31d9f0;
        }
    }
    ctx->pc = 0x31D9E4u;
label_31d9e4:
    // 0x31d9e4: 0xc0c8120  jal         func_320480
    ctx->pc = 0x31D9E4u;
    SET_GPR_U32(ctx, 31, 0x31D9ECu);
    ctx->pc = 0x320480u;
    if (runtime->hasFunction(0x320480u)) {
        auto targetFn = runtime->lookupFunction(0x320480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D9ECu; }
        if (ctx->pc != 0x31D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        init_rnd__FUi_0x320480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D9ECu; }
        if (ctx->pc != 0x31D9ECu) { return; }
    }
    ctx->pc = 0x31D9ECu;
label_31d9ec:
    // 0x31d9ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_31d9f0:
    // 0x31d9f0: 0xc0c7fb4  jal         func_31FED0
    ctx->pc = 0x31D9F0u;
    SET_GPR_U32(ctx, 31, 0x31D9F8u);
    ctx->pc = 0x31D9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D9F0u;
            // 0x31d9f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31FED0u;
    if (runtime->hasFunction(0x31FED0u)) {
        auto targetFn = runtime->lookupFunction(0x31FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D9F8u; }
        if (ctx->pc != 0x31D9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRaceFishParam__FP15RACE_FISH_PARAMP11grRACE_INFO_0x31fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D9F8u; }
        if (ctx->pc != 0x31D9F8u) { return; }
    }
    ctx->pc = 0x31D9F8u;
label_31d9f8:
    // 0x31d9f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31d9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9fc: 0xc0c7b9c  jal         func_31EE70
    ctx->pc = 0x31D9FCu;
    SET_GPR_U32(ctx, 31, 0x31DA04u);
    ctx->pc = 0x31DA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D9FCu;
            // 0x31da00: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31EE70u;
    if (runtime->hasFunction(0x31EE70u)) {
        auto targetFn = runtime->lookupFunction(0x31EE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DA04u; }
        if (ctx->pc != 0x31DA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepGyoRace__FP15RACE_FISH_PARAMP11grRACE_INFO_0x31ee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31DA04u; }
        if (ctx->pc != 0x31DA04u) { return; }
    }
    ctx->pc = 0x31DA04u;
label_31da04:
    // 0x31da04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31da04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31da08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31da08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31da0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31da0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31da10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31da10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31da14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31da14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31da18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31da18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31da1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31da1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31da20: 0x3e00008  jr          $ra
    ctx->pc = 0x31DA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DA20u;
            // 0x31da24: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31DA28u;
}
