#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetActionScript__FP10CRunScriptPcP9mgCMemory
// Address: 0x2d20d0 - 0x2d2158
void SetActionScript__FP10CRunScriptPcP9mgCMemory_0x2d20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActionScript__FP10CRunScriptPcP9mgCMemory_0x2d20d0");
#endif

    switch (ctx->pc) {
        case 0x2d20fcu: goto label_2d20fc;
        case 0x2d210cu: goto label_2d210c;
        case 0x2d2128u: goto label_2d2128;
        case 0x2d213cu: goto label_2d213c;
        default: break;
    }

    ctx->pc = 0x2d20d0u;

    // 0x2d20d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d20d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d20d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d20d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d20d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d20dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d20e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d20e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d20e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d20e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d20e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d20ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20f0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2d20f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d20f4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2D20F4u;
    SET_GPR_U32(ctx, 31, 0x2D20FCu);
    ctx->pc = 0x2D20F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D20F4u;
            // 0x2d20f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20FCu; }
        if (ctx->pc != 0x2D20FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20FCu; }
        if (ctx->pc != 0x2D20FCu) { return; }
    }
    ctx->pc = 0x2D20FCu;
label_2d20fc:
    // 0x2d20fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d20fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2100: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2d2100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d2104: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2D2104u;
    SET_GPR_U32(ctx, 31, 0x2D210Cu);
    ctx->pc = 0x2D2108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2104u;
            // 0x2d2108: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D210Cu; }
        if (ctx->pc != 0x2D210Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D210Cu; }
        if (ctx->pc != 0x2D210Cu) { return; }
    }
    ctx->pc = 0x2D210Cu;
label_2d210c:
    // 0x2d210c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d210cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2110: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d2110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2114: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2d2114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d211c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2d211cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d2120: 0xc061c3c  jal         func_1870F0
    ctx->pc = 0x2D2120u;
    SET_GPR_U32(ctx, 31, 0x2D2128u);
    ctx->pc = 0x2D2124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2120u;
            // 0x2d2124: 0x24090200  addiu       $t1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1870F0u;
    if (runtime->hasFunction(0x1870F0u)) {
        auto targetFn = runtime->lookupFunction(0x1870F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2128u; }
        if (ctx->pc != 0x2D2128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load__10CRunScriptFP14RS_PROG_HEADERP12RS_STACKDATAiP11RS_CALLDATAi_0x1870f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2128u; }
        if (ctx->pc != 0x2D2128u) { return; }
    }
    ctx->pc = 0x2D2128u;
label_2d2128:
    // 0x2d2128: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2d2128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2d212c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2130: 0x24a5d440  addiu       $a1, $a1, -0x2BC0
    ctx->pc = 0x2d2130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956096));
    // 0x2d2134: 0xc061c74  jal         func_1871D0
    ctx->pc = 0x2D2134u;
    SET_GPR_U32(ctx, 31, 0x2D213Cu);
    ctx->pc = 0x2D2138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2134u;
            // 0x2d2138: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (runtime->hasFunction(0x1871D0u)) {
        auto targetFn = runtime->lookupFunction(0x1871D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D213Cu; }
        if (ctx->pc != 0x2D213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii_0x1871d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D213Cu; }
        if (ctx->pc != 0x2D213Cu) { return; }
    }
    ctx->pc = 0x2D213Cu;
label_2d213c:
    // 0x2d213c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d213cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d2144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d214c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d214cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2150: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2150u;
            // 0x2d2154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2158u;
}
