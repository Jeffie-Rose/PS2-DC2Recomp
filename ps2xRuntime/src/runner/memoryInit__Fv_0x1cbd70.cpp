#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: memoryInit__Fv
// Address: 0x1cbd70 - 0x1cc038
void memoryInit__Fv_0x1cbd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memoryInit__Fv_0x1cbd70");
#endif

    switch (ctx->pc) {
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbef0u: goto label_1cbef0;
        case 0x1cbef8u: goto label_1cbef8;
        case 0x1cbf0cu: goto label_1cbf0c;
        case 0x1cbf14u: goto label_1cbf14;
        case 0x1cbf24u: goto label_1cbf24;
        case 0x1cbf38u: goto label_1cbf38;
        case 0x1cbf44u: goto label_1cbf44;
        case 0x1cbf60u: goto label_1cbf60;
        case 0x1cbf7cu: goto label_1cbf7c;
        case 0x1cbf90u: goto label_1cbf90;
        case 0x1cbf9cu: goto label_1cbf9c;
        case 0x1cbfb8u: goto label_1cbfb8;
        case 0x1cbfd4u: goto label_1cbfd4;
        case 0x1cbfe8u: goto label_1cbfe8;
        case 0x1cbff4u: goto label_1cbff4;
        case 0x1cc010u: goto label_1cc010;
        case 0x1cc020u: goto label_1cc020;
        default: break;
    }

    ctx->pc = 0x1cbd70u;

    // 0x1cbd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbd74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cbd78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cbd7c: 0xc06423c  jal         func_1908F0
    ctx->pc = 0x1CBD7Cu;
    SET_GPR_U32(ctx, 31, 0x1CBD84u);
    ctx->pc = 0x1CBD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD7Cu;
            // 0x1cbd80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD84u; }
        if (ctx->pc != 0x1CBD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBD84u; }
        if (ctx->pc != 0x1CBD84u) { return; }
    }
    ctx->pc = 0x1CBD84u;
label_1cbd84:
    // 0x1cbd84: 0xaf828d70  sw          $v0, -0x7290($gp)
    ctx->pc = 0x1cbd84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 2));
    // 0x1cbd88: 0x8f828d70  lw          $v0, -0x7290($gp)
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbd8c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1cbd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1cbd90: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1cbd90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1cbd94: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbd98: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBD98u;
    SET_GPR_U32(ctx, 31, 0x1CBDA0u);
    ctx->pc = 0x1CBD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBD98u;
            // 0x1cbd9c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDA0u; }
        if (ctx->pc != 0x1CBDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDA0u; }
        if (ctx->pc != 0x1CBDA0u) { return; }
    }
    ctx->pc = 0x1CBDA0u;
label_1cbda0:
    // 0x1cbda0: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbda4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbda8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBDA8u;
    SET_GPR_U32(ctx, 31, 0x1CBDB0u);
    ctx->pc = 0x1CBDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDA8u;
            // 0x1cbdac: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDB0u; }
        if (ctx->pc != 0x1CBDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDB0u; }
        if (ctx->pc != 0x1CBDB0u) { return; }
    }
    ctx->pc = 0x1CBDB0u;
label_1cbdb0:
    // 0x1cbdb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbdb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbdb8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1cbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1cbdbc: 0xc050784  jal         func_141E10
    ctx->pc = 0x1CBDBCu;
    SET_GPR_U32(ctx, 31, 0x1CBDC4u);
    ctx->pc = 0x1CBDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDBCu;
            // 0x1cbdc0: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDC4u; }
        if (ctx->pc != 0x1CBDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDC4u; }
        if (ctx->pc != 0x1CBDC4u) { return; }
    }
    ctx->pc = 0x1CBDC4u;
label_1cbdc4:
    // 0x1cbdc4: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbdc8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBDC8u;
    SET_GPR_U32(ctx, 31, 0x1CBDD0u);
    ctx->pc = 0x1CBDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDC8u;
            // 0x1cbdcc: 0x24054e20  addiu       $a1, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDD0u; }
        if (ctx->pc != 0x1CBDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDD0u; }
        if (ctx->pc != 0x1CBDD0u) { return; }
    }
    ctx->pc = 0x1CBDD0u;
label_1cbdd0:
    // 0x1cbdd0: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbdd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbdd8: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBDD8u;
    SET_GPR_U32(ctx, 31, 0x1CBDE0u);
    ctx->pc = 0x1CBDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDD8u;
            // 0x1cbddc: 0x24054e20  addiu       $a1, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDE0u; }
        if (ctx->pc != 0x1CBDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDE0u; }
        if (ctx->pc != 0x1CBDE0u) { return; }
    }
    ctx->pc = 0x1CBDE0u;
label_1cbde0:
    // 0x1cbde0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbde4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cbde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbde8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cbde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbdec: 0x2484f230  addiu       $a0, $a0, -0xDD0
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963760));
    // 0x1cbdf0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1CBDF0u;
    SET_GPR_U32(ctx, 31, 0x1CBDF8u);
    ctx->pc = 0x1CBDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBDF0u;
            // 0x1cbdf4: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDF8u; }
        if (ctx->pc != 0x1CBDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBDF8u; }
        if (ctx->pc != 0x1CBDF8u) { return; }
    }
    ctx->pc = 0x1CBDF8u;
label_1cbdf8:
    // 0x1cbdf8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbdfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cbdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbe00: 0x2484f260  addiu       $a0, $a0, -0xDA0
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963808));
    // 0x1cbe04: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1CBE04u;
    SET_GPR_U32(ctx, 31, 0x1CBE0Cu);
    ctx->pc = 0x1CBE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE04u;
            // 0x1cbe08: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE0Cu; }
        if (ctx->pc != 0x1CBE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE0Cu; }
        if (ctx->pc != 0x1CBE0Cu) { return; }
    }
    ctx->pc = 0x1CBE0Cu;
label_1cbe0c:
    // 0x1cbe0c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbe10: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1cbe14: 0x2484f230  addiu       $a0, $a0, -0xDD0
    ctx->pc = 0x1cbe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963760));
    // 0x1cbe18: 0xc0507bc  jal         func_141EF0
    ctx->pc = 0x1CBE18u;
    SET_GPR_U32(ctx, 31, 0x1CBE20u);
    ctx->pc = 0x1CBE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE18u;
            // 0x1cbe1c: 0x24a5f260  addiu       $a1, $a1, -0xDA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE20u; }
        if (ctx->pc != 0x1CBE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE20u; }
        if (ctx->pc != 0x1CBE20u) { return; }
    }
    ctx->pc = 0x1CBE20u;
label_1cbe20:
    // 0x1cbe20: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbe24: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBE24u;
    SET_GPR_U32(ctx, 31, 0x1CBE2Cu);
    ctx->pc = 0x1CBE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE24u;
            // 0x1cbe28: 0x3405ea60  ori         $a1, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE2Cu; }
        if (ctx->pc != 0x1CBE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE2Cu; }
        if (ctx->pc != 0x1CBE2Cu) { return; }
    }
    ctx->pc = 0x1CBE2Cu;
label_1cbe2c:
    // 0x1cbe2c: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbe30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbe30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbe34: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBE34u;
    SET_GPR_U32(ctx, 31, 0x1CBE3Cu);
    ctx->pc = 0x1CBE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE34u;
            // 0x1cbe38: 0x3405ea60  ori         $a1, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE3Cu; }
        if (ctx->pc != 0x1CBE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE3Cu; }
        if (ctx->pc != 0x1CBE3Cu) { return; }
    }
    ctx->pc = 0x1CBE3Cu;
label_1cbe3c:
    // 0x1cbe3c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbe40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cbe40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbe44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cbe44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbe48: 0x2484f290  addiu       $a0, $a0, -0xD70
    ctx->pc = 0x1cbe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963856));
    // 0x1cbe4c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1CBE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE54u);
    ctx->pc = 0x1CBE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE4Cu;
            // 0x1cbe50: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE54u; }
        if (ctx->pc != 0x1CBE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE54u; }
        if (ctx->pc != 0x1CBE54u) { return; }
    }
    ctx->pc = 0x1CBE54u;
label_1cbe54:
    // 0x1cbe54: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbe58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cbe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbe5c: 0x2484f2c0  addiu       $a0, $a0, -0xD40
    ctx->pc = 0x1cbe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963904));
    // 0x1cbe60: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1CBE60u;
    SET_GPR_U32(ctx, 31, 0x1CBE68u);
    ctx->pc = 0x1CBE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE60u;
            // 0x1cbe64: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE68u; }
        if (ctx->pc != 0x1CBE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE68u; }
        if (ctx->pc != 0x1CBE68u) { return; }
    }
    ctx->pc = 0x1CBE68u;
label_1cbe68:
    // 0x1cbe68: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbe68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbe6c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cbe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1cbe70: 0x2484f290  addiu       $a0, $a0, -0xD70
    ctx->pc = 0x1cbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963856));
    // 0x1cbe74: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    // 0x1cbe78: 0xc050810  jal         func_142040
    ctx->pc = 0x1CBE78u;
    SET_GPR_U32(ctx, 31, 0x1CBE80u);
    ctx->pc = 0x1CBE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE78u;
            // 0x1cbe7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE80u; }
        if (ctx->pc != 0x1CBE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE80u; }
        if (ctx->pc != 0x1CBE80u) { return; }
    }
    ctx->pc = 0x1CBE80u;
label_1cbe80:
    // 0x1cbe80: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbe84: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBE84u;
    SET_GPR_U32(ctx, 31, 0x1CBE8Cu);
    ctx->pc = 0x1CBE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE84u;
            // 0x1cbe88: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE8Cu; }
        if (ctx->pc != 0x1CBE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBE8Cu; }
        if (ctx->pc != 0x1CBE8Cu) { return; }
    }
    ctx->pc = 0x1CBE8Cu;
label_1cbe8c:
    // 0x1cbe8c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbe90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbe90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbe94: 0x2484f3b0  addiu       $a0, $a0, -0xC50
    ctx->pc = 0x1cbe94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
    // 0x1cbe98: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1CBE98u;
    SET_GPR_U32(ctx, 31, 0x1CBEA0u);
    ctx->pc = 0x1CBE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBE98u;
            // 0x1cbe9c: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEA0u; }
        if (ctx->pc != 0x1CBEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEA0u; }
        if (ctx->pc != 0x1CBEA0u) { return; }
    }
    ctx->pc = 0x1CBEA0u;
label_1cbea0:
    // 0x1cbea0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1cbea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1cbea4: 0xc04a422  jal         func_129088
    ctx->pc = 0x1CBEA4u;
    SET_GPR_U32(ctx, 31, 0x1CBEACu);
    ctx->pc = 0x1CBEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEA4u;
            // 0x1cbea8: 0x24846c78  addiu       $a0, $a0, 0x6C78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEACu; }
        if (ctx->pc != 0x1CBEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEACu; }
        if (ctx->pc != 0x1CBEACu) { return; }
    }
    ctx->pc = 0x1CBEACu;
label_1cbeac:
    // 0x1cbeac: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1cbeacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cbeb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBEB0u;
    {
        const bool branch_taken_0x1cbeb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEB0u;
            // 0x1cbeb4: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbeb0) {
            ctx->pc = 0x1CBEC8u;
            goto label_1cbec8;
        }
    }
    ctx->pc = 0x1CBEB8u;
    // 0x1cbeb8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cbeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1cbebc: 0x2484f3b0  addiu       $a0, $a0, -0xC50
    ctx->pc = 0x1cbebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
    // 0x1cbec0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1CBEC0u;
    SET_GPR_U32(ctx, 31, 0x1CBEC8u);
    ctx->pc = 0x1CBEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEC0u;
            // 0x1cbec4: 0x24a56c78  addiu       $a1, $a1, 0x6C78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEC8u; }
        if (ctx->pc != 0x1CBEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEC8u; }
        if (ctx->pc != 0x1CBEC8u) { return; }
    }
    ctx->pc = 0x1CBEC8u;
label_1cbec8:
    // 0x1cbec8: 0x8f878d70  lw          $a3, -0x7290($gp)
    ctx->pc = 0x1cbec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbecc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cbeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1cbed0: 0xac20f3d4  sw          $zero, -0xC2C($at)
    ctx->pc = 0x1cbed0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964180), GPR_U32(ctx, 0));
    // 0x1cbed4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1cbed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1cbed8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1cbedc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1cbee0: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1cbee4: 0x240600af  addiu       $a2, $zero, 0xAF
    ctx->pc = 0x1cbee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1cbee8: 0xc04b20c  jal         func_12C830
    ctx->pc = 0x1CBEE8u;
    SET_GPR_U32(ctx, 31, 0x1CBEF0u);
    ctx->pc = 0x1CBEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBEE8u;
            // 0x1cbeec: 0xac20f3cc  sw          $zero, -0xC34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C830u;
    if (runtime->hasFunction(0x12C830u)) {
        auto targetFn = runtime->lookupFunction(0x12C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEF0u; }
        if (ctx->pc != 0x1CBEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTableBuffer__17mgCTextureManagerFiiP9mgCMemory_0x12c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEF0u; }
        if (ctx->pc != 0x1CBEF0u) { return; }
    }
    ctx->pc = 0x1CBEF0u;
label_1cbef0:
    // 0x1cbef0: 0xc064234  jal         func_1908D0
    ctx->pc = 0x1CBEF0u;
    SET_GPR_U32(ctx, 31, 0x1CBEF8u);
    ctx->pc = 0x1908D0u;
    if (runtime->hasFunction(0x1908D0u)) {
        auto targetFn = runtime->lookupFunction(0x1908D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEF8u; }
        if (ctx->pc != 0x1CBEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVramTopAddress__Fv_0x1908d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBEF8u; }
        if (ctx->pc != 0x1CBEF8u) { return; }
    }
    ctx->pc = 0x1CBEF8u;
label_1cbef8:
    // 0x1cbef8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1cbef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1cbefc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf00: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1cbf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1cbf04: 0xc04b2b4  jal         func_12CAD0
    ctx->pc = 0x1CBF04u;
    SET_GPR_U32(ctx, 31, 0x1CBF0Cu);
    ctx->pc = 0x1CBF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF04u;
            // 0x1cbf08: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD0u;
    if (runtime->hasFunction(0x12CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x12CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF0Cu; }
        if (ctx->pc != 0x1CBF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17mgCTextureManagerFii_0x12cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF0Cu; }
        if (ctx->pc != 0x1CBF0Cu) { return; }
    }
    ctx->pc = 0x1CBF0Cu;
label_1cbf0c:
    // 0x1cbf0c: 0xc07a6d8  jal         func_1E9B60
    ctx->pc = 0x1CBF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF14u);
    ctx->pc = 0x1E9B60u;
    if (runtime->hasFunction(0x1E9B60u)) {
        auto targetFn = runtime->lookupFunction(0x1E9B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF14u; }
        if (ctx->pc != 0x1CBF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocSize__Fv_0x1e9b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF14u; }
        if (ctx->pc != 0x1CBF14u) { return; }
    }
    ctx->pc = 0x1CBF14u;
label_1cbf14:
    // 0x1cbf14: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbf18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf1c: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF24u);
    ctx->pc = 0x1CBF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF1Cu;
            // 0x1cbf20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF24u; }
        if (ctx->pc != 0x1CBF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF24u; }
        if (ctx->pc != 0x1CBF24u) { return; }
    }
    ctx->pc = 0x1CBF24u;
label_1cbf24:
    // 0x1cbf24: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbf28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cbf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf30: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1CBF30u;
    SET_GPR_U32(ctx, 31, 0x1CBF38u);
    ctx->pc = 0x1CBF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF30u;
            // 0x1cbf34: 0x2484f3e0  addiu       $a0, $a0, -0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF38u; }
        if (ctx->pc != 0x1CBF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF38u; }
        if (ctx->pc != 0x1CBF38u) { return; }
    }
    ctx->pc = 0x1CBF38u;
label_1cbf38:
    // 0x1cbf38: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1cbf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1cbf3c: 0xc04a422  jal         func_129088
    ctx->pc = 0x1CBF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF44u);
    ctx->pc = 0x1CBF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF3Cu;
            // 0x1cbf40: 0x24846c88  addiu       $a0, $a0, 0x6C88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF44u; }
        if (ctx->pc != 0x1CBF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF44u; }
        if (ctx->pc != 0x1CBF44u) { return; }
    }
    ctx->pc = 0x1CBF44u;
label_1cbf44:
    // 0x1cbf44: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1cbf44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cbf48: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBF48u;
    {
        const bool branch_taken_0x1cbf48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF48u;
            // 0x1cbf4c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf48) {
            ctx->pc = 0x1CBF60u;
            goto label_1cbf60;
        }
    }
    ctx->pc = 0x1CBF50u;
    // 0x1cbf50: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1cbf54: 0x2484f3e0  addiu       $a0, $a0, -0xC20
    ctx->pc = 0x1cbf54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964192));
    // 0x1cbf58: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1CBF58u;
    SET_GPR_U32(ctx, 31, 0x1CBF60u);
    ctx->pc = 0x1CBF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF58u;
            // 0x1cbf5c: 0x24a56c88  addiu       $a1, $a1, 0x6C88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF60u; }
        if (ctx->pc != 0x1CBF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF60u; }
        if (ctx->pc != 0x1CBF60u) { return; }
    }
    ctx->pc = 0x1CBF60u;
label_1cbf60:
    // 0x1cbf60: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbf64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cbf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1cbf68: 0xac20f404  sw          $zero, -0xBFC($at)
    ctx->pc = 0x1cbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964228), GPR_U32(ctx, 0));
    // 0x1cbf6c: 0x24054e20  addiu       $a1, $zero, 0x4E20
    ctx->pc = 0x1cbf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    // 0x1cbf70: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cbf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1cbf74: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBF74u;
    SET_GPR_U32(ctx, 31, 0x1CBF7Cu);
    ctx->pc = 0x1CBF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF74u;
            // 0x1cbf78: 0xac20f3fc  sw          $zero, -0xC04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF7Cu; }
        if (ctx->pc != 0x1CBF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF7Cu; }
        if (ctx->pc != 0x1CBF7Cu) { return; }
    }
    ctx->pc = 0x1CBF7Cu;
label_1cbf7c:
    // 0x1cbf7c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbf80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf84: 0x2484f560  addiu       $a0, $a0, -0xAA0
    ctx->pc = 0x1cbf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
    // 0x1cbf88: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1CBF88u;
    SET_GPR_U32(ctx, 31, 0x1CBF90u);
    ctx->pc = 0x1CBF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF88u;
            // 0x1cbf8c: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF90u; }
        if (ctx->pc != 0x1CBF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF90u; }
        if (ctx->pc != 0x1CBF90u) { return; }
    }
    ctx->pc = 0x1CBF90u;
label_1cbf90:
    // 0x1cbf90: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1cbf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1cbf94: 0xc04a422  jal         func_129088
    ctx->pc = 0x1CBF94u;
    SET_GPR_U32(ctx, 31, 0x1CBF9Cu);
    ctx->pc = 0x1CBF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBF94u;
            // 0x1cbf98: 0x24846c98  addiu       $a0, $a0, 0x6C98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF9Cu; }
        if (ctx->pc != 0x1CBF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBF9Cu; }
        if (ctx->pc != 0x1CBF9Cu) { return; }
    }
    ctx->pc = 0x1CBF9Cu;
label_1cbf9c:
    // 0x1cbf9c: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1cbf9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cbfa0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBFA0u;
    {
        const bool branch_taken_0x1cbfa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFA0u;
            // 0x1cbfa4: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfa0) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBFA8u;
    // 0x1cbfa8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cbfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1cbfac: 0x2484f560  addiu       $a0, $a0, -0xAA0
    ctx->pc = 0x1cbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
    // 0x1cbfb0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1CBFB0u;
    SET_GPR_U32(ctx, 31, 0x1CBFB8u);
    ctx->pc = 0x1CBFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFB0u;
            // 0x1cbfb4: 0x24a56c98  addiu       $a1, $a1, 0x6C98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFB8u; }
        if (ctx->pc != 0x1CBFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFB8u; }
        if (ctx->pc != 0x1CBFB8u) { return; }
    }
    ctx->pc = 0x1CBFB8u;
label_1cbfb8:
    // 0x1cbfb8: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cbfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cbfbc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cbfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1cbfc0: 0xac20f584  sw          $zero, -0xA7C($at)
    ctx->pc = 0x1cbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964612), GPR_U32(ctx, 0));
    // 0x1cbfc4: 0x34059c40  ori         $a1, $zero, 0x9C40
    ctx->pc = 0x1cbfc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x1cbfc8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cbfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1cbfcc: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CBFCCu;
    SET_GPR_U32(ctx, 31, 0x1CBFD4u);
    ctx->pc = 0x1CBFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFCCu;
            // 0x1cbfd0: 0xac20f57c  sw          $zero, -0xA84($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFD4u; }
        if (ctx->pc != 0x1CBFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFD4u; }
        if (ctx->pc != 0x1CBFD4u) { return; }
    }
    ctx->pc = 0x1CBFD4u;
label_1cbfd4:
    // 0x1cbfd4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1cbfd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbfdc: 0x2484f590  addiu       $a0, $a0, -0xA70
    ctx->pc = 0x1cbfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
    // 0x1cbfe0: 0xc04e64c  jal         func_139930
    ctx->pc = 0x1CBFE0u;
    SET_GPR_U32(ctx, 31, 0x1CBFE8u);
    ctx->pc = 0x1CBFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFE0u;
            // 0x1cbfe4: 0x34069c40  ori         $a2, $zero, 0x9C40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139930u;
    if (runtime->hasFunction(0x139930u)) {
        auto targetFn = runtime->lookupFunction(0x139930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFE8u; }
        if (ctx->pc != 0x1CBFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeapMem__9mgCMemoryFP1i_0x139930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFE8u; }
        if (ctx->pc != 0x1CBFE8u) { return; }
    }
    ctx->pc = 0x1CBFE8u;
label_1cbfe8:
    // 0x1cbfe8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1cbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1cbfec: 0xc04a422  jal         func_129088
    ctx->pc = 0x1CBFECu;
    SET_GPR_U32(ctx, 31, 0x1CBFF4u);
    ctx->pc = 0x1CBFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFECu;
            // 0x1cbff0: 0x24846cb0  addiu       $a0, $a0, 0x6CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFF4u; }
        if (ctx->pc != 0x1CBFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBFF4u; }
        if (ctx->pc != 0x1CBFF4u) { return; }
    }
    ctx->pc = 0x1CBFF4u;
label_1cbff4:
    // 0x1cbff4: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1cbff4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cbff8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBFF8u;
    {
        const bool branch_taken_0x1cbff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBFF8u;
            // 0x1cbffc: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbff8) {
            ctx->pc = 0x1CC010u;
            goto label_1cc010;
        }
    }
    ctx->pc = 0x1CC000u;
    // 0x1cc000: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cc000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1cc004: 0x2484f590  addiu       $a0, $a0, -0xA70
    ctx->pc = 0x1cc004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
    // 0x1cc008: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1CC008u;
    SET_GPR_U32(ctx, 31, 0x1CC010u);
    ctx->pc = 0x1CC00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC008u;
            // 0x1cc00c: 0x24a56cb0  addiu       $a1, $a1, 0x6CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC010u; }
        if (ctx->pc != 0x1CC010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC010u; }
        if (ctx->pc != 0x1CC010u) { return; }
    }
    ctx->pc = 0x1CC010u;
label_1cc010:
    // 0x1cc010: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1cc014: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1cc014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1cc018: 0xc04e704  jal         func_139C10
    ctx->pc = 0x1CC018u;
    SET_GPR_U32(ctx, 31, 0x1CC020u);
    ctx->pc = 0x1CC01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC018u;
            // 0x1cc01c: 0x34450d40  ori         $a1, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC020u; }
        if (ctx->pc != 0x1CC020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC020u; }
        if (ctx->pc != 0x1CC020u) { return; }
    }
    ctx->pc = 0x1CC020u;
label_1cc020:
    // 0x1cc020: 0xaf828d74  sw          $v0, -0x728C($gp)
    ctx->pc = 0x1cc020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937972), GPR_U32(ctx, 2));
    // 0x1cc024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc02c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc030: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC030u;
            // 0x1cc034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC038u;
}
