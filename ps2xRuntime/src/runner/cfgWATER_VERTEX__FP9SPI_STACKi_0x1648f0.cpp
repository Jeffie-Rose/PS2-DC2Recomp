#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgWATER_VERTEX__FP9SPI_STACKi
// Address: 0x1648f0 - 0x16497c
void cfgWATER_VERTEX__FP9SPI_STACKi_0x1648f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgWATER_VERTEX__FP9SPI_STACKi_0x1648f0");
#endif

    switch (ctx->pc) {
        case 0x16490cu: goto label_16490c;
        case 0x16491cu: goto label_16491c;
        case 0x16492cu: goto label_16492c;
        case 0x164938u: goto label_164938;
        case 0x16495cu: goto label_16495c;
        default: break;
    }

    ctx->pc = 0x1648f0u;

    // 0x1648f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1648f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1648f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1648f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1648f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1648f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1648fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1648fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164900: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x164904: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x164904u;
    SET_GPR_U32(ctx, 31, 0x16490Cu);
    ctx->pc = 0x164908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164904u;
            // 0x164908: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16490Cu; }
        if (ctx->pc != 0x16490Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16490Cu; }
        if (ctx->pc != 0x16490Cu) { return; }
    }
    ctx->pc = 0x16490Cu;
label_16490c:
    // 0x16490c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164914: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x164914u;
    SET_GPR_U32(ctx, 31, 0x16491Cu);
    ctx->pc = 0x164918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164914u;
            // 0x164918: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16491Cu; }
        if (ctx->pc != 0x16491Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16491Cu; }
        if (ctx->pc != 0x16491Cu) { return; }
    }
    ctx->pc = 0x16491Cu;
label_16491c:
    // 0x16491c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16491cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164920: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x164920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x164924: 0xc051928  jal         func_1464A0
    ctx->pc = 0x164924u;
    SET_GPR_U32(ctx, 31, 0x16492Cu);
    ctx->pc = 0x164928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164924u;
            // 0x164928: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16492Cu; }
        if (ctx->pc != 0x16492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16492Cu; }
        if (ctx->pc != 0x16492Cu) { return; }
    }
    ctx->pc = 0x16492Cu;
label_16492c:
    // 0x16492c: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x16492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x164930: 0xc051928  jal         func_1464A0
    ctx->pc = 0x164930u;
    SET_GPR_U32(ctx, 31, 0x164938u);
    ctx->pc = 0x164934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164930u;
            // 0x164934: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164938u; }
        if (ctx->pc != 0x164938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164938u; }
        if (ctx->pc != 0x164938u) { return; }
    }
    ctx->pc = 0x164938u;
label_164938:
    // 0x164938: 0x8f888920  lw          $t0, -0x76E0($gp)
    ctx->pc = 0x164938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x16493c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x164944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164948: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x164948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16494c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x16494cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x164950: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x164950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x164954: 0xc061750  jal         func_185D40
    ctx->pc = 0x164954u;
    SET_GPR_U32(ctx, 31, 0x16495Cu);
    ctx->pc = 0x164958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164954u;
            // 0x164958: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185D40u;
    if (runtime->hasFunction(0x185D40u)) {
        auto targetFn = runtime->lookupFunction(0x185D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16495Cu; }
        if (ctx->pc != 0x16495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateWaterFrame__FiiPfPfP9mgCMemory_0x185d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16495Cu; }
        if (ctx->pc != 0x16495Cu) { return; }
    }
    ctx->pc = 0x16495Cu;
label_16495c:
    // 0x16495c: 0xaf828958  sw          $v0, -0x76A8($gp)
    ctx->pc = 0x16495cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 2));
    // 0x164960: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164968: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16496c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16496cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164974: 0x3e00008  jr          $ra
    ctx->pc = 0x164974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164974u;
            // 0x164978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16497Cu;
}
